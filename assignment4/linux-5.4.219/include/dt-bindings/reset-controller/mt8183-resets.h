/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 * Author: Yong Liang <yong.liang@mediatek.com>
 */

#ifndef _DT_BINDINGS_RESET_CONTROLLER_MT8183
#define _DT_BINDINGS_RESET_CONTROLLER_MT8183

/* INFRACFG AO resets */
#define MT8183_INFRACFG_AO_THERM_SW_RST				0
#define MT8183_INFRACFG_AO_USB_TOP_SW_RST			1
#define MT8183_INFRACFG_AO_MM_IOMMU_SW_RST			3
#define MT8183_INFRACFG_AO_MSDC3_SW_RST				4
#define MT8183_INFRACFG_AO_MSDC2_SW_RST				5
#define MT8183_INFRACFG_AO_MSDC1_SW_RST				6
#define MT8183_INFRACFG_AO_MSDC0_SW_RST				7
#define MT8183_INFRACFG_AO_APDMA_SW_RST				9
#define MT8183_INFRACFG_AO_MIMP_D_SW_RST			10
#define MT8183_INFRACFG_AO_BTIF_SW_RST				12
#define MT8183_INFRACFG_AO_DISP_PWM_SW_RST			14
#define MT8183_INFRACFG_AO_AUXADC_SW_RST			15

#define MT8183_INFRACFG_AO_IRTX_SW_RST				32
#define MT8183_INFRACFG_AO_SPI0_SW_RST				33
#define MT8183_INFRACFG_AO_I2C0_SW_RST				34
#define MT8183_INFRACFG_AO_I2C1_SW_RST				35
#define MT8183_INFRACFG_AO_I2C2_SW_RST				36
#define MT8183_INFRACFG_AO_I2C3_SW_RST				37
#define MT8183_INFRACFG_AO_UART0_SW_RST				38
#define MT8183_INFRACFG_AO_UART1_SW_RST				39
#define MT8183_INFRACFG_AO_UART2_SW_RST				40
#define MT8183_INFRACFG_AO_PWM_SW_RST				41
#define MT8183_INFRACFG_AO_SPI1_SW_RST				42
#define MT8183_INFRACFG_AO_I2C4_SW_RST				43
#define MT8183_INFRACFG_AO_DVFSP_SW_RST				44
#define MT8183_INFRACFG_AO_SPI2_SW_RST				45
#define MT8183_INFRACFG_AO_SPI3_SW_RST				46
#define MT8183_INFRACFG_AO_UFSHCI_SW_RST			47

#define MT8183_INFRACFG_AO_PMIC_WRAP_SW_RST			64
#define MT8183_INFRACFG_AO_SPM_SW_RST				65
#define MT8183_INFRACFG_AO_USBSIF_SW_RST			66
#define MT8183_INFRACFG_AO_KP_SW_RST				68
#define MT8183_INFRACFG_AO_APXGPT_SW_RST			69
#define MT8183_INFRACFG_AO_CLDMA_AO_SW_RST			70
#define MT8183_INFRACFG_AO_UNIPRO_UFS_SW_RST			71
#define MT8183_INFRACFG_AO_DX_CC_SW_RST				72
#define MT8183_INFRACFG_AO_UFSPHY_SW_RST			73

#define MT8183_INFRACFG_AO_DX_CC_SEC_SW_RST			96
#define MT8183_INFRACFG_AO_GCE_SW_RST				97
#define MT8183_INFRACFG_AO_CLDMA_SW_RST				98
#define MT8183_INFRACFG_AO_TRNG_SW_RST				99
#define MT8183_INFRACFG_AO_AP_MD_CCIF_1_SW_RST			103
#define MT8183_INFRACFG_AO_AP_MD_CCIF_SW_RST			104
#define MT8183_INFRACFG_AO_I2C1_IMM_SW_RST			105
#define MT8183_INFRACFG_AO_I2C1_ARB_SW_RST			106
#define MT8183_INFRACFG_AO_I2C2_IMM_SW_RST			107
#define MT8183_INFRACFG_AO_I2C2_ARB_SW_RST			108
#define MT8183_INFRACFG_AO_I2C5_SW_RST				109
#define MT8183_INFRACFG_AO_I2C5_IMM_SW_RST			110
#define MT8183_INFRACFG_AO_I2C5_ARB_SW_RST			111
#define MT8183_INFRACFG_AO_SPI4_SW_RST				112
#define MT8183_INFRACFG_AO_SPI5_SW_RST				113
#define MT8183_INFRACFG_AO_INFRA2MFGAXI_CBIP_CLAS_SW_RST	114
#define MT8183_INFRACFG_AO_MFGAXI2INFRA_M0_CBIP_GLAS_OUT_SW_RST	115
#define MT8183_INFRACFG_AO_MFGAXI2INFRA_M1_CBIP_GLAS_OUT_SW_RST	116
#define MT8183_INFRACFG_AO_UFS_AES_SW_RST			117
#define MT8183_INFRACFG_AO_CCU_I2C_IRQ_SW_RST			118
#define MT8183_INFRACFG_AO_CCU_I2C_DMA_SW_RST			119
#define MT8183_INFRACFG_AO_I2C6_SW_RST				120
#define MT8183_INFRACFG_AO_CCU_GALS_SW_RST			121
#define MT8183_INFRACFG_AO_IPU_GALS_SW_RST			122
#define MT8183_INFRACFG_AO_CONN2AP_GALS_SW_RST			123
#define MT8183_INFRACFG_AO_AP_MD_CCIF2_SW_RST			124
#define MT8183_INFRACFG_AO_AP_MD_CCIF3_SW_RST			125
#define MT8183_INFRACFG_AO_I2C7_SW_RST				126
#define MT8183_INFRACFG_AO_I2C8_SW_RST				127

#endif  /* _DT_BINDINGS_RESET_CONTROLLER_MT8183 */
