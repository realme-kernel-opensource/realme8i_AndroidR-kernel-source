/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */
#ifndef _MTK_EEM_CONFIG_H_
#define _MTK_EEM_CONFIG_H_

/* CONFIG (SW related) */
/* #define EEM_NOT_READY		(1) */
#define CONFIG_EEM_SHOWLOG	(0)
#define EN_ISR_LOG		(0)
#define EEM_BANK_SOC		(0) /* use voltage bin, so disable it */
#define EARLY_PORTING		(0) /* for detecting real vboot in eem_init01 */
#define DUMP_DATA_TO_DE		(1)
#define EEM_ENABLE		(1) /* enable; after pass HPT mini-SQC */
#define EEM_FAKE_EFUSE		(1)
//#define MT6885
//#define MT6889
//#define MC50_LOAD

/* FIX ME */
#define UPDATE_TO_UPOWER	(1)
#define EEM_LOCKTIME_LIMIT	(3000)
#define ENABLE_LOO              (0)
#define ENABLE_LOO_B            (0)
#define ENABLE_LOO_G            (0)
#define ENABLE_CPU			(1)
#define ENABLE_GPU                      (0)
#define EN_EEM_THERM_CLK	(0)
#define SUPPORT_PICACHU		(1)
#define SUPPORT_BL_ULV		(0)



#define ENABLE_INIT1_STRESS	(0)

#define EEM_OFFSET
#define SET_PMIC_VOLT		(1)
#define SET_PMIC_VOLT_TO_DVFS	(1)
#define LOG_INTERVAL		(2LL * NSEC_PER_SEC)
#define DVT			(0)
#define SUPPORT_DCONFIG		(1)
#define ENABLE_HT_FT		(1)
//#define EARLY_PORTING_VPU
#define ENABLE_MINIHQA		(0)
#define ENABLE_REMOVE_AGING	(0)

#if DVT
#define DUMP_LEN		410
#else
#define DUMP_LEN		105
#endif


enum mt_cpu_dvfs_id {
	MT_CPU_DVFS_LL,
	MT_CPU_DVFS_L,
	MT_CPU_DVFS_B,
	MT_CPU_DVFS_CCI,

	NR_MT_CPU_DVFS,
};

#define DEVINFO_HRID_0 12
#define DEVINFO_SEG_IDX 30

#define DEVINFO_IDX_0 50
#define DEVINFO_IDX_1 51
#define DEVINFO_IDX_2 52
#define DEVINFO_IDX_3 53
#define DEVINFO_IDX_4 54
#define DEVINFO_IDX_5 55
#define DEVINFO_IDX_6 56
#define DEVINFO_IDX_7 57
#define DEVINFO_IDX_8 58
#define DEVINFO_IDX_9 59
#define DEVINFO_IDX_10 60
#define DEVINFO_IDX_11 61
#define DEVINFO_IDX_12 62
#define DEVINFO_IDX_13 63




#define DEVINFO_TIME_IDX 132



#if EEM_FAKE_EFUSE		/* select secure mode based on efuse config */
#define SEC_MOD_SEL			0x00		/* non secure  mode */
#else
#define SEC_MOD_SEL			0x00		/* Secure Mode 0 */
/* #define SEC_MOD_SEL			0x10	*/	/* Secure Mode 1 */
/* #define SEC_MOD_SEL			0x20	*/	/* Secure Mode 2 */
/* #define SEC_MOD_SEL			0x30	*/	/* Secure Mode 3 */
/* #define SEC_MOD_SEL			0x40	*/	/* Secure Mode 4 */
#endif



#if defined(CMD_LOAD)
#define DEVINFO_0 0x0 /* MC50 Safe EFUSE */
#define DEVINFO_1 0x92A82589 /* CPU_L_HIGH */
#define DEVINFO_2 0x97A52597 /* CPU_L_MID */
#define DEVINFO_3 0x9C592585 /* CPU_BL_HIGH */
#define DEVINFO_4 0x93A52589 /* CPU_BL_MID */
#define DEVINFO_5 0x89A825E3 /* CPU_BL_LOW */
#define DEVINFO_6 0x86A825E3 /* CPU_BL_ULV */
#define DEVINFO_7 0x96B72585 /* CPU_B_HIGH */
#define DEVINFO_8 0xFBA12589 /* CPU_B_MID */
#define DEVINFO_9 0xE2A925E3 /* CPU_B_LOW */
#define DEVINFO_10 0xA28D2589 /* CPU_CCI_HIGH */
#define DEVINFO_11 0xC2592589 /* CPU_CCI_MID */
#define DEVINFO_12 0xECA62597 /* CPU_CCI_LOW */
#define DEVINFO_13 0xA8FB1B03 /* LCPU/GPU */


#elif defined(MC50_LOAD)

#if defined(MT6885)
#define DEVINFO_0 0x0 /* MC50 Safe EFUSE */
#define DEVINFO_1 0x92A82589 /* CPU_L_HIGH */
#define DEVINFO_2 0x97A52597 /* CPU_L_MID */
#define DEVINFO_3 0x9C592585 /* CPU_BL_HIGH */
#define DEVINFO_4 0x93A52589 /* CPU_BL_MID */
#define DEVINFO_5 0x89A825E3 /* CPU_BL_LOW */
#define DEVINFO_6 0x86A825E3 /* CPU_BL_ULV */
#define DEVINFO_7 0x96B72585 /* CPU_B_HIGH */
#define DEVINFO_8 0xFBA12589 /* CPU_B_MID */
#define DEVINFO_9 0xE2A925E3 /* CPU_B_LOW */
#define DEVINFO_10 0xA28D2589 /* CPU_CCI_HIGH */
#define DEVINFO_11 0xC2592589 /* CPU_CCI_MID */
#define DEVINFO_12 0xECA62597 /* CPU_CCI_LOW */
#define DEVINFO_13 0xA8FB1B03 /* LCPU/GPU */




#elif defined(MT6889)
#define DEVINFO_0 0x0 /* MC50 Safe EFUSE */
#define DEVINFO_1 0x92A82589 /* CPU_L_HIGH */
#define DEVINFO_2 0x97A52597 /* CPU_L_MID */
#define DEVINFO_3 0x9C592585 /* CPU_BL_HIGH */
#define DEVINFO_4 0x93A52589 /* CPU_BL_MID */
#define DEVINFO_5 0x89A825E3 /* CPU_BL_LOW */
#define DEVINFO_6 0x86A825E3 /* CPU_BL_ULV */
#define DEVINFO_7 0x96B72585 /* CPU_B_HIGH */
#define DEVINFO_8 0xFBA12589 /* CPU_B_MID */
#define DEVINFO_9 0xE2A925E3 /* CPU_B_LOW */
#define DEVINFO_10 0xA28D2589 /* CPU_CCI_HIGH */
#define DEVINFO_11 0xC2592589 /* CPU_CCI_MID */
#define DEVINFO_12 0xECA62597 /* CPU_CCI_LOW */
#define DEVINFO_13 0xA8FB1B03 /* LCPU/GPU */


#endif

#else

#define DEVINFO_0 0x0 /* MC50 Safe EFUSE */
#define DEVINFO_1 0x92A82589 /* CPU_L_HIGH */
#define DEVINFO_2 0x97A52597 /* CPU_L_MID */
#define DEVINFO_3 0x9C592585 /* CPU_BL_HIGH */
#define DEVINFO_4 0x93A52589 /* CPU_BL_MID */
#define DEVINFO_5 0x89A825E3 /* CPU_BL_LOW */
#define DEVINFO_6 0x86A825E3 /* CPU_BL_ULV */
#define DEVINFO_7 0x96B72585 /* CPU_B_HIGH */
#define DEVINFO_8 0xFBA12589 /* CPU_B_MID */
#define DEVINFO_9 0xE2A925E3 /* CPU_B_LOW */
#define DEVINFO_10 0xA28D2589 /* CPU_CCI_HIGH */
#define DEVINFO_11 0xC2592589 /* CPU_CCI_MID */
#define DEVINFO_12 0xECA62597 /* CPU_CCI_LOW */
#define DEVINFO_13 0xA8FB1B03 /* LCPU/GPU */


#endif



/*****************************************
 * eem sw setting
 ******************************************
 */
#define NR_HW_RES_FOR_BANK	(14) /* real eem banks for efuse */

#define NR_FREQ 16
#define NR_FREQ_CPU 16

#define L_MAX_FREQ_BASE		1000
#define L_FREQ_BASE			2000
#define L_M2_FREQ_BASE		1600

#define BL_MAX_FREQ_BASE	1200
#define BL_FREQ_BASE		2800
#define BL_M2_FREQ_BASE		2600
#define BL_M3_FREQ_BASE		1740
#define BL_M4_FREQ_BASE		700

#define B_MAX_FREQ_BASE		2000
#define B_FREQ_BASE			3000
#define B_M2_FREQ_BASE		2600
#define B_M3_FREQ_BASE		1820

#define CCI_MAX_FREQ_BASE	1000
#define	CCI_FREQ_BASE		1700
#define	CCI_M2_FREQ_BASE	1400
#define	CCI_M3_FREQ_BASE	1200


#define	OPP_FREQ_NOT_FOUND	NR_FREQ_CPU


/*
 * 100 us, This is the EEM Detector sampling time as represented in
 * cycles of bclk_ck during INIT. 52 MHz
 */
#define DETWINDOW_VAL		0xA28

/*
 * mili Volt to config value. voltage = 600mV + val * 6.25mV
 * val = (voltage - 600) / 6.25
 * @mV:	mili volt
 */

/* 1mV=>10uV */
/* EEM */
#define EEM_V_BASE		(40000)
#define EEM_STEP		(625)

/* CPU */
#define CPU_PMIC_BASE_6315	(0)
#define CPU_PMIC_STEP		(625) /* 1.231/1024=0.001202v=120(10uv)*/
#define CPU_PMIC_VMAX_CLAMP	(0xB3) /* volt domain: 1.11875v*/


#define DTHI_VAL		(0x01) /* positive */
#define DTLO_VAL		(0xfe) /* negative (2's compliment) */
/* This timeout value is in cycles of bclk_ck. */
#define DETMAX_VAL		(0xffff)
#define AGECONFIG_VAL	(0x555555)
#define AGEM_VAL		(0x0)
#define DCCONFIG_VAL	(0x1)

/* common part: for cci, LL, L, GPU */
/* common part: for  LL, L */
#define VBOOT_PMIC_VAL	(75000)
#define VBOOT_PMIC_CLR	(0)
#define VBOOT_VAL		(0x38) /* volt domain: 0.75v */
#define VMAX_VAL		(0x73) /* volt domain: 1.11875v*/
#define VMIN_VAL		(0x10) /* volt domain: 0.5v*/
#define VCO_VAL			(0x10)
#define DVTFIXED_VAL	(0x6)

/* different for B_L */
#define VMAX_VAL_BL		(0x73) /* volt domain: 1.11875v*/
#define VMIN_VAL_BL		(0x18) /* volt domain: 0.55v*/
#define VCO_VAL_BL		(0x10) /* volt domain: 0.5v*/

#define VMAX_VAL_B		(0x73) /* volt domain: 1.11875v*/
#define VMIN_VAL_B		(0x18) /* volt domain: 0.55v*/
#define VCO_VAL_B		(0x10) /* volt domain: 0.5v*/


/* different for CCI */
#define VMAX_VAL_CCI		(0x73) /* volt domain: 1.11875v*/
#define VMIN_VAL_CCI		(0x10) /* volt domain: 0.5v*/
#define VCO_VAL_CCI			(0x10) /* volt domain: 0.5v*/



/* use in base_ops_mon_mode */
#define MTS_VAL			(0x1fb)
#define BTS_VAL			(0x6d1)

#define CORESEL_VAL			(0x8fff0000)
#define CORESEL_INIT2_VAL		(0x0fff0000)


#define LOW_TEMP_VAL		(18000)
#define EXTRA_LOW_TEMP_VAL	(10000)
#define HIGH_TEMP_VAL		(85000)

#define LOW_TEMP_OFF_DEFAULT	(0)
#define LOW_TEMP_OFF_L		(8)
#define HIGH_TEMP_OFF_L		(3)
#define LOW_TEMP_OFF_B		(8)
#define HIGH_TEMP_OFF_B		(3)
#define HIGH_TEMP_OFF_B_3G		(5)
#define LOW_TEMP_OFF_GPU		(4)
#define HIGH_TEMP_OFF_GPU		(3)
#define EXTRA_LOW_TEMP_OFF_GPU	(7)
#define MARGIN_ADD_OFF			(5)
#define MARGIN_CLAMP_OFF		(8)



/* for EEMCTL0's setting */
#define EEM_CTL0_L			(0xBA98000F)
#define EEM_CTL0_BL		(0x00010001)
#define EEM_CTL0_B			(0x05400007)
#define EEM_CTL0_CCI		(0xBA98000F)



#define AGING_VAL_CPU		(0x0) /* CPU aging margin : 31mv*/
#define AGING_VAL_CPU_B		(0x0) /* CPU aging margin : 37mv*/
#define AGING_VAL_GPU		(0x0) /* GPU aging margin : 43.75mv*/

#endif
