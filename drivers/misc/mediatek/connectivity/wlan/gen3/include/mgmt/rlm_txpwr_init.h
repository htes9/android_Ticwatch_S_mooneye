/*
** Id: //Department/DaVinci/BRANCHES/MT6620_WIFI_DRIVER_V2_3/include/mgmt/rlm_txpwr_init.h#1
*/

/*! \file   "rlm_txpwr_init.h"
    \brief
*/

/*
** Log: rlm_txpwr_init.h
*/

#ifndef _RLM_TXPWR_INIT_H
#define _RLM_TXPWR_INIT_H

/*******************************************************************************
*                         C O M P I L E R   F L A G S
********************************************************************************
*/

/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/

/*******************************************************************************
*                              C O N S T A N T S
********************************************************************************
*/
/*Support Tx Power Range : 63~ -64 (unit : 0.5dBm)*/

#define PWR_LIMIT_2G4_IN_MW_MHZ    BIT(0)
#define PWR_LIMIT_UNII1_IN_MW_MHZ  BIT(1)
#define PWR_LIMIT_UNII2A_IN_MW_MHZ BIT(2)
#define PWR_LIMIT_UNII2C_IN_MW_MHZ BIT(3)
#define PWR_LIMIT_UNII3_IN_MW_MHZ  BIT(4)

#if CFG_SUPPORT_PWR_LIMIT_COUNTRY

COUNTRY_POWER_LIMIT_TABLE_DEFAULT g_rRlmPowerLimitDefault[] = {

	{{'A', 'O'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'B', 'Z'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'B', 'J'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'B', 'T'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'B', 'O'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'B', 'I'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'M'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'F'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'D'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'K', 'M'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'D'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'G'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'I'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'D', 'J'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'Q'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'E', 'R'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'F', 'J'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'A'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'M'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'N'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'W'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'R', 'K'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'K', 'G'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'L', 'Y'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'M', 'G'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'M', 'L'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'N', 'R'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'N', 'C'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'T'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'C'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'L'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'B'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'O'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'R'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'Z'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'J'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'G'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'O'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'M'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'V'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'V', 'U'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'Y', 'E'}
	 , {40, 63, 63, 63, 63}
	 , 0}
	,
	{{'A', 'S'}
	 , {60, 34, 46, 48, 60}
	 , 0}
	,
	{{'A', 'I'}
	 , {60, 34, 48, 60, 60}
	 , 0}
	,
	{{'B', 'M'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'C', 'A'}
	 , {60, 46, 48, 48, 60}
	 , 0}
	,
	{{'K', 'Y'}
	 , {60, 34, 48, 60, 60}
	 , 0}
	,
	{{'G', 'U'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'F', 'M'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'P', 'R'}
	 , {60, 34, 46, 48, 60}
	 , 0}
	,
	{{'U', 'S'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'V', 'I'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'A', 'R'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'A', 'U'}
	 , {63, 46, 46, 60, 63}
	 , 0}
	,
	{{'A', 'Z'}
	 , {40, 34, 48, 60, 60}
	 , 0}
	,
	{{'B', 'W'}
	 , {40, 46, 46, 60, 60}
	 , 0}
	,
	{{'K', 'H'}
	 , {40, 46, 46, 48, 60}
	 , 0}
	,
	{{'C', 'X'}
	 , {63, 46, 46, 60, 63}
	 , 0}
	,
	{{'C', 'O'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'C', 'R'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'E', 'C'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'G', 'D'}
	 , {40, 46, 46, 60, 60}
	 , 0}
	,
	{{'G', 'T'}
	 , {40, 34, 48, 48, 60}
	 , 0}
	,
	{{'H', 'K'}
	 , {63, 46, 46, 60, 63}
	 , 0}
	,
	{{'K', 'I'}
	 , {63, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'B'}
	 , {40, 46, 46, 46, 46}
	 , 0}
	,
	{{'L', 'R'}
	 , {60, 46, 60, 63, 63}
	 , 0}
	,
	{{'M', 'N'}
	 , {46, 32, 46, 46, 58}
	 , 0}
	,
	{{'A', 'N'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'N', 'Z'}
	 , {63, 46, 60, 48, 63}
	 , 0}
	,
	{{'N', 'I'}
	 , {60, 34, 48, 48, 60}
	 , 0}
	,
	{{'P', 'W'}
	 , {60, 60, 60, 60, 60}
	 , 0}
	,
	{{'P', 'Y'}
	 , {60, 46, 46, 48, 60}
	 , 0}
	,
	{{'P', 'E'}
	 , {54, 46, 48, 42, 48}
	 , 0}
	,
	{{'P', 'H'}
	 , {40, 46, 46, 48, 48}
	 , 0}
	,
	{{'W', 'S'}
	 , {40, 40, 40, 40, 60}
	 , 0}
	,
	{{'S', 'G'}
	 , {46, 46, 46, 60, 60}
	 , 0}
	,
	{{'L', 'K'}
	 , {46, 46, 46, 46, 46}
	 , 0}
	,
	{{'T', 'H'}
	 , {40, 46, 46, 60, 60}
	 , 0}
	,
	{{'T', 'T'}
	 , {60, 46, 46, 60, 60}
	 , 0}
	,
	{{'U', 'Y'}
	 , {63, 46, 46, 46, 46}
	 , 0}
	,
	{{'V', 'N'}
	 , {46, 46, 46, 60, 60}
	 , 0}
	,
	{{'A', 'W'}
	 , {60, 46, 60, 60, 63}
	 , 0}
	,
	{{'L', 'A'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'A'}
	 , {40, 46, 46, 60, 60}
	 , 0}
	,
	{{'A', 'E'}
	 , {40, 46, 46, 60, 46}
	 , 0}
	,
	{{'U', 'G'}
	 , {40, 46, 46, 48, 60}
	 , 0}
	,
	{{'M', 'M'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'A', 'L'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'D', 'Z'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'A', 'D'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'A', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'B', 'Y'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'B', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'B', 'A'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'V', 'G'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'B', 'G'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'C', 'V'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'H', 'R'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'C', 'Y'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'C', 'Z'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'D', 'K'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'E', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'E', 'T'}
	 , {40, 40, 40, 40, 63}
	 , 0}
	,
	{{'F', 'I'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'F', 'R'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'G', 'F'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'P', 'F'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'T', 'F'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'G', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'D', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'G', 'H'}
	 , {40, 34, 48, 60, 63}
	 , 0}
	,
	{{'G', 'R'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'G', 'P'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'H', 'U'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'I', 'S'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'I', 'Q'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'I', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'I', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'K', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'V'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'S'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'I'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'L', 'U'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'K'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'Q'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'R'}
	 , {40, 46, 46, 46, 63}
	 , 0}
	,
	{{'M', 'U'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'Y', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'D'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'C'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'S'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'N', 'L'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'N', 'O'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'O', 'M'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'P', 'L'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'P', 'T'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'R', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'R', 'O'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'M', 'F'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'M'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'N'}
	 , {40, 40, 40, 60, 63}
	 , 0}
	,
	{{'R', 'S'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'K'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'I'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'Z', 'A'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'E', 'S'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'S', 'E'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'C', 'H'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'T', 'R'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'T', 'C'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'G', 'B'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'V', 'A'}
	 , {40, 46, 46, 60, 63}
	 , 0}
	,
	{{'A', 'M'}
	 , {40, 40, 40, 63, 63}
	 , 0}
	,
	{{'I', 'L'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'K', 'W'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'M', 'A'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'N', 'E'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'T', 'N'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'E', 'H'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'N', 'P'}
	 , {60, 46, 46, 63, 60}
	 , 0}
	,
	{{'A', 'F'}
	 , {40, 46, 63, 63, 63}
	 , 0}
	,
	{{'A', 'G'}
	 , {40, 46, 48, 63, 54}
	 , 0}
	,
	{{'B', 'S'}
	 , {63, 46, 60, 63, 63}
	 , 0}
	,
	{{'B', 'H'}
	 , {40, 46, 46, 63, 63}
	 , 0}
	,
	{{'B', 'B'}
	 , {40, 46, 48, 63, 54}
	 , 0}
	,
	{{'B', 'N'}
	 , {46, 46, 46, 63, 60}
	 , 0}
	,
	{{'C', 'L'}
	 , {40, 44, 44, 63, 44}
	 , 0}
	,
	{{'C', 'N'}
	 , {40, 46, 46, 63, 54}
	 , 0}
	,
	{{'E', 'G'}
	 , {40, 46, 46, 63, 46}
	 , 0}
	,
	{{'S', 'V'}
	 , {60, 34, 48, 63, 60}
	 , 0}
	,
	{{'I', 'N'}
	 , {60, 46, 46, 63, 60}
	 , 0}
	,
	{{'M', 'Y'}
	 , {54, 60, 60, 63, 60}
	 , 0}
	,
	{{'M', 'V'}
	 , {40, 46, 46, 63, 40}
	 , 0}
	,
	{{'P', 'A'}
	 , {60, 34, 48, 63, 60}
	 , 0}
	,
	{{'V', 'E'}
	 , {60, 46, 46, 63, 60}
	 , 0}
	,
	{{'Z', 'M'}
	 , {60, 46, 46, 63, 60}
	 , 0}
	,
	{{'J', 'O'}
	 , {40, 46, 63, 63, 46}
	 , 0}
	,
	{{'P', 'G'}
	 , {40, 46, 63, 63, 60}
	 , 0}
	,
	{{'B', 'F'}
	 , {40, 63, 63, 63, 60}
	 , 0}
	,
	{{'G', 'Y'}
	 , {60, 63, 63, 63, 60}
	 , 0}
	,
	{{'H', 'T'}
	 , {40, 63, 63, 63, 60}
	 , 0}
	,
	{{'H', 'N'}
	 , {60, 63, 63, 63, 60}
	 , 0}
	,
	{{'J', 'M'}
	 , {54, 63, 63, 63, 57}
	 , 0}
	,
	{{'M', 'O'}
	 , {40, 63, 63, 63, 40}
	 , 0}
	,
	{{'M', 'W'}
	 , {60, 63, 63, 63, 60}
	 , 0}
	,
	{{'P', 'K'}
	 , {40, 63, 63, 63, 40}
	 , 0}
	,
	{{'Q', 'A'}
	 , {40, 63, 63, 63, 40}
	 , 0}
	,
	{{'R', 'W'}
	 , {40, 63, 63, 63, 60}
	 , 0}
	,
	{{'K', 'N'}
	 , {40, 63, 63, 63, 60}
	 , 0}
	,
	{{'T', 'Z'}
	 , {40, 63, 63, 63, 40}
	 , 0}
	,
	{{'I', 'D'}
	 , {46, 63, 63, 63, 60}
	 , 0}
	,
	{{'N', 'G'}
	 , {40, 63, 46, 63, 60}
	 , 0}
	,
	{{'B', 'D'}
	 , {40, 46, 46, 60, 28}
	 , 0}
	,
	{{'B', 'R'}
	 , {52, 46, 46, 60, 60}
	 , 0}
	,
	{{'D', 'M'}
	 , {60, 34, 46, 48, 60}
	 , 0}
	,
	{{'D', 'O'}
	 , {63, 46, 46, 60, 63}
	 , 0}
	,
	{{'F', 'K'}
	 , {40, 46, 46, 60, 28}
	 , 0}
	,
	{{'K', 'Z'}
	 , {40, 34, 48, 60, 60}
	 , 0}
	,
	{{'M', 'X'}
	 , {60, 34, 48, 60, 63}
	 , 0}
	,
	{{'M', 'Z'}
	 , {40, 34, 46, 48, 60}
	 , 0}
	,
	{{'N', 'A'}
	 , {40, 34, 46, 48, 60}
	 , 0}
	,
	{{'R', 'U'}
	 , {40, 34, 48, 60, 60}
	 , 0}
	,
	{{'L', 'C'}
	 , {40, 34, 48, 48, 60}
	 , 0}
	,
	{{'V', 'C'}
	 , {40, 34, 46, 48, 60}
	 , 0}
	,
	{{'U', 'A'}
	 , {40, 46, 46, 46, 48}
	 , 0}
	,
	{{'U', 'Z'}
	 , {40, 48, 48, 48, 60}
	 , 0}
	,
	{{'Z', 'W'}
	 , {40, 34, 46, 48, 60}
	 , 0}
	,
	{{'M', 'P'}
	 , {60, 34, 46, 48, 60}
	 , 0}
	,
	{{'T', 'W'}
	 , {60, 63, 34, 48, 60}
	 , 0}
	,
	{{'C', 'K'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'C', 'U'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'T', 'L'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'F', 'O'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'I'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'G', 'G'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'I', 'R'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'I', 'M'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'J', 'E'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'K', 'P'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'M', 'H'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'N', 'U'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'N', 'F'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'P', 'S'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'P', 'N'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'P', 'M'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'S'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'D'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'S', 'Y'}
	 , {63, 63, 63, 63, 63}
	 , 0}
	,
	{{'J', 'P'}
	 , {46, 46, 46, 60, 63}
	 , 0}
	,
	{{'K', 'R'}
	 , {46, 34, 46, 46, 46}
	 , PWR_LIMIT_UNII1_IN_MW_MHZ}
	,

/*Default*/
	{{0, 0}
	 , {63, 63, 63, 63, 63}
	 , 0}
};

COUNTRY_POWER_LIMIT_TABLE_CONFIGURATION g_rRlmPowerLimitConfiguration[] = {

	{{'A', 'I'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'A', 'Z'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'B', 'W'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'G', 'D'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'L', 'B'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'L', 'R'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'W', 'S'}
	 , 165, {40, 40, 40, 40, 40}
	 }
	,
	{{'V', 'N'}
	 , 144, {48, 48, 48, 48, 48}
	 }
	,
	{{'U', 'S'}
	 , 1, {38, 30, 60, 60, 60}
	 }
	,
	{{'U', 'S'}
	 , 3, {60, 60, 26, 60, 60}
	 }
	,
	{{'U', 'S'}
	 , 9, {60, 60, 26, 60, 60}
	 }
	,
	{{'U', 'S'}
	 , 11, {38, 30, 60, 60, 60}
	 }
	,
	{{'U', 'S'}
	 , 36, {34, 34, 34, 34, 34}
	 }
	,
	{{'U', 'S'}
	 , 38, {34, 34, 34, 34, 34}
	 }
	,
	{{'U', 'S'}
	 , 42, {34, 34, 34, 31, 34}
	 }
	,
	{{'U', 'S'}
	 , 58, {48, 48, 48, 31, 48}
	 }
	,
	{{'U', 'S'}
	 , 62, {48, 48, 34, 48, 48}
	 }
	,
	{{'U', 'S'}
	 , 64, {37, 37, 48, 48, 48}
	 }
	,
	{{'U', 'S'}
	 , 100, {37, 37, 48, 48, 48}
	 }
	,
	{{'U', 'S'}
	 , 102, {48, 48, 34, 48, 48}
	 }
	,
	{{'U', 'S'}
	 , 106, {48, 48, 48, 31, 48}
	 }
	,
	{{'U', 'S'}
	 , 155, {60, 60, 60, 31, 60}
	 }
	,
	{{'U', 'S'}
	 , 159, {60, 60, 34, 60, 60}
	 }
	,
	{{'U', 'S'}
	 , 165, {37, 37, 60, 60, 60}
	 }
	,
/* JP configuration for Polar */
	{{'J', 'P'} , 1, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 2, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 3, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 4, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 5, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 6, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 7, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 8, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 9, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 10, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 11, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 12, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 13, {38, 26, 30, 60, 60}},
	{{'J', 'P'} , 14, {38, 26, 30, 60, 60}},

/*Default*/
	{{0, 0}
	 , 165, {63, 63, 63, 63, 63}
	 }
};

#if 0
COUNTRY_CHANNEL_POWER_LIMIT g_rRlmCountryPowerLimitTable[] = {
	{
	 {'A', 'O'}
	 , 0, 0, {0, 0, 0, 0}
	 ,
	 {
	  CHANNEL_PWR_LIMIT(1, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(2, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(3, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(4, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(5, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(6, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(7, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(8, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(9, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(10, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(11, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(12, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(13, 40, 40, 40, 40, 40, 0),
	  CHANNEL_PWR_LIMIT(14, 40, 40, 40, 40, 40, 0),

	  CHANNEL_PWR_LIMIT(36, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(38, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(40, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(42, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(44, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(46, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(48, 63, 63, 63, 63, 63, 0),

	  CHANNEL_PWR_LIMIT(52, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(54, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(56, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(58, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(60, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(62, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(64, 63, 63, 63, 63, 63, 0),

	  CHANNEL_PWR_LIMIT(100, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(102, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(104, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(106, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(108, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(110, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(112, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(114, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(116, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(118, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(120, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(122, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(124, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(126, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(128, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(130, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(132, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(134, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(136, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(138, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(140, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(142, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(144, 63, 63, 63, 63, 63, 0),

	  CHANNEL_PWR_LIMIT(149, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(151, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(153, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(155, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(157, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(159, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(161, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(163, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(165, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(167, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(169, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(171, 63, 63, 63, 63, 63, 0),
	  CHANNEL_PWR_LIMIT(173, 63, 63, 63, 63, 63, 0)
	  }
	 }
	,
	{
	 /*Used to check the end of country entry */
	 {0, 0}
	 , 0, 0, {0, 0, 0, 0}
	 ,
	 {
	  /*Used to check the end of channel power limit */
	  CHANNEL_PWR_LIMIT(ENDCH, 0, 0, 0, 0, 0, 0)
	  }
	 }			/*end of CountryTable */
};
#endif
#endif

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

/*******************************************************************************
*                           P R I V A T E   D A T A
********************************************************************************
*/

/*******************************************************************************
*                                 M A C R O S
********************************************************************************
*/

/*******************************************************************************
*                   F U N C T I O N   D E C L A R A T I O N S
********************************************************************************
*/

#endif /* _RLM_TXPWR_INIT_H */
