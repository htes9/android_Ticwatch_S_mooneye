/*
* Copyright (C) 2011-2014 MediaTek Inc.
*
* This program is free software: you can redistribute it and/or modify it under the terms of the
* GNU General Public License version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __DISP_DRV_H__
#define __DISP_DRV_H__

#include <mach/mt_typedefs.h>

#include "disp_drv_log.h"
#include "ddp_path.h"
#include "lcm_drv.h"
#include "disp_hal.h"

#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------------------------------------------------- */

#define DISP_CHECK_RET(expr) \
	do { \
		DISP_STATUS ret = (expr); \
		if (DISP_STATUS_OK != ret) { \
			pr_err("[COMMON][ERROR][mtkfb] DISP API return error code: 0x%x\n" \
			       "  file : %s, line : %d\n" \
			       "  expr : %s\n", ret, __FILE__, __LINE__, #expr); \
		} \
	} while (0)

/* --------------------------------------------------------------------------- */

#define ASSERT_LAYER    (DDP_OVL_LAYER_MUN-1)
extern unsigned int FB_LAYER;	/* default LCD layer */
#define DISP_DEFAULT_UI_LAYER_ID (DDP_OVL_LAYER_MUN-1)
#define DISP_CHANGED_UI_LAYER_ID (DDP_OVL_LAYER_MUN-2)

#define HW_OVERLAY_COUNT                 (4)
#define RESERVED_LAYER_COUNT             (2)
#define VIDEO_LAYER_COUNT                (HW_OVERLAY_COUNT - RESERVED_LAYER_COUNT)

typedef struct {
	unsigned int id;
	unsigned int curr_en;
	unsigned int next_en;
	unsigned int hw_en;
	int curr_idx;
	int next_idx;
	int hw_idx;
	int curr_identity;
	int next_identity;
	int hw_identity;
	int curr_conn_type;
	int next_conn_type;
	int hw_conn_type;
} DISP_LAYER_INFO;

typedef enum {
	NONE_MODE = 0,
	TARGET_LINE = 1,
	COMMAND_DONE = 2
} DISP_MERGE_TRIGGER_MODE;

enum {
	DISP_POWER_MODE_OFF = 0,
	DISP_POWER_MODE_DOZE = 1,
	DISP_POWER_MODE_NORMAL = 2,
	DISP_POWER_MODE_DOZE_SUSPEND = 3
};

/* forward declarations */
struct fb_overlay_mode;

/* --------------------------------------------------------------------------- */
/* Public Functions */
/* --------------------------------------------------------------------------- */
UINT32 DISP_GetOVLRamSize(void);
BOOL DISP_IsDecoupleMode(void);
void DISP_StartOverlayTransfer(void);
DISP_STATUS DISP_SwitchDisplayMode(struct fb_overlay_mode *pConfig);
void DISP_WaitMemWriteDoneIfNeeded(void);

DISP_STATUS DISP_Init(UINT32 fbVA, UINT32 fbPA, BOOL isLcmInited);
DISP_STATUS DISP_Deinit(void);
DISP_STATUS DISP_PowerEnable(BOOL enable);
DISP_STATUS DISP_PanelEnable(BOOL enable);
DISP_STATUS DISP_PanelSetIdle(BOOL enable);
DISP_STATUS DISP_PanelSetIdlePrepare(void);
DISP_STATUS DISP_PanelChangeFps(unsigned int mode);
DISP_STATUS DISP_UpdateScreen(UINT32 x, UINT32 y, UINT32 width, UINT32 height);
DISP_STATUS DISP_WaitForLCDNotBusy(void);
DISP_STATUS DISP_PrepareSuspend(void);
DISP_STATUS DISP_GetLayerInfo(DISP_LAYER_INFO *pLayer);

/* Register extra trigger source */
typedef int (*DISP_EXTRA_CHECKUPDATE_PTR) (int);
typedef int (*DISP_EXTRA_CONFIG_PTR) (int);
int DISP_RegisterExTriggerSource(DISP_EXTRA_CHECKUPDATE_PTR pCheckUpdateFunc, DISP_EXTRA_CONFIG_PTR pConfFunc);
void DISP_UnRegisterExTriggerSource(int u4ID);
void GetUpdateMutex(void);
void ReleaseUpdateMutex(void);

/* Retrieve Information */
BOOL DISP_IsVideoMode(void);
UINT32 DISP_GetScreenWidth(void);
UINT32 DISP_GetScreenHeight(void);
UINT32 DISP_GetPhysicalWidth(void);
UINT32 DISP_GetPhysicalHeight(void);
UINT32 DISP_GetScreenBpp(void);
UINT32 DISP_GetPages(void);
DISP_STATUS DISP_SetScreenBpp(UINT32);	/* config how many bits for each pixel of framebuffer */
DISP_STATUS DISP_SetPages(UINT32);	/* config how many framebuffer will be used */
/* above information is used to determine the vRAM size */

UINT32 DISP_GetFBRamSize(void);	/* get FB buffer size */
UINT32 DISP_GetVRamSize(void);	/* get total RAM size (FB+working buffer+DAL buffer) */
PANEL_COLOR_FORMAT DISP_GetPanelColorFormat(void);
UINT32 DISP_GetPanelBPP(void);
BOOL DISP_IsLcmFound(void);
DISP_STATUS DISP_ConfigImmediateUpdate(BOOL enable);

DISP_STATUS DISP_SetBacklight(UINT32 level);
DISP_STATUS DISP_SetPWM(UINT32 divider);
DISP_STATUS DISP_GetPWM(UINT32 divider, unsigned int *freq);
DISP_STATUS DISP_SetBacklight_mode(UINT32 mode);

DISP_STATUS DISP_Set3DPWM(BOOL enable, BOOL landscape);

/* FM De-sense */

DISP_STATUS DISP_Get_Default_UpdateSpeed(unsigned int *speed);
DISP_STATUS DISP_Get_Current_UpdateSpeed(unsigned int *speed);
DISP_STATUS DISP_Change_Update(unsigned int);

void DISP_Set_MergeTrigger_Mode(unsigned int mode);
DISP_MERGE_TRIGGER_MODE DISP_Get_MergeTrigger_Mode(void);

/* --------------------------------------------------------------------------- */
/* Private Functions */
/* --------------------------------------------------------------------------- */

BOOL DISP_SelectDevice(const char *lcm_name);
BOOL DISP_DetectDevice(void);
BOOL DISP_SelectDeviceBoot(const char *lcm_name);
UINT32 DISP_GetVRamSizeBoot(char *cmdline);
DISP_STATUS DISP_Capture_Framebuffer(unsigned int pvbuf, unsigned int bpp, unsigned int is_early_suspended);
BOOL DISP_IsContextInited(void);

UINT32 DISP_GetOutputBPPforDithering(void);
const char *DISP_GetLCMId(void);

BOOL DISP_EsdRecoverCapbility(void);
BOOL DISP_EsdCheck(void);
BOOL DISP_EsdRecover(void);
void DISP_WaitVSYNC(void);
void DISP_InitVSYNC(unsigned int vsync_interval);
DISP_STATUS DISP_PauseVsync(BOOL enable);
DISP_STATUS DISP_Config_Overlay_to_Memory(unsigned int mva, int enable);
void DISP_StartConfigUpdate(void);

void DISP_HalfVsync(bool enable);
unsigned long DISP_GetLCMIndex(void);
unsigned int DISP_AutoTest(void);
unsigned int DISP_BLS_Query(void);
void DISP_BLS_Enable(BOOL enable);
DISP_STATUS DISP_Auto_Capture_FB(unsigned int pvbuf, unsigned int wdma_out_fmt, unsigned int bpp, unsigned int is_early_suspended, int wdma_width, int wdma_height);
/* --------------------------------------------------------------------------- */
DISP_STATUS DISP_Change_LCM_Resolution(unsigned int width, unsigned int height);

DISP_STATUS DISP_DispsysPowerEnable(bool enable);
DISP_STATUS DISP_DispsysCheckPowerDown(void);
DISP_STATUS DISP_TriggerSessionEarlySuspend(void);
void DISP_EarlySuspend(void);
void DISP_LateResume(void);

/* This part is for Display Customization Tool Implementation**************** */
/* #ifdef MTK_DISP_CONFIG_SUPPORT */
void fbconfig_disp_set_mipi_clk(unsigned int clk);
void fbconfig_disp_set_mipi_ssc(unsigned int ssc);
BOOL fbconfig_dsi_vdo_prepare(void);
BOOL fbconfig_rest_lcm_setting_prepare(void);
void fbconfig_disp_set_mipi_lane_num(unsigned int lane_num);
int fbconfig_get_esd_check(void);
void fbconfig_restart_engine(void);
/* #endif */

#ifdef __cplusplus
}
#endif
#endif				/* __DISP_DRV_H__ */
