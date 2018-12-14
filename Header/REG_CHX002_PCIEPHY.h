//************************************************************************
//************************************************************************
//**									**
//**     Copyright (c) 2015 Shanghai Zhaoxin Semiconductor Co., Ltd. 	**
//**     Project:		CHX002					**
//**     Module:		PCIEPHY					**
//**									**
//************************************************************************
//************************************************************************
// This file is auto converted by ZhaoXin Irs2h from IRS_CHX002_PCIE PHY_R100(A0).doc(final)MOD_PCIEPHYCFG.xls
#ifndef _CHX002_PCIEPHY_H
#define _CHX002_PCIEPHY_H
//PCIEPHYCFG
#define PCIEPHYCFG_EPHY0_EPHY_CTL		0x40	//EPHY0 EPHY Control
    #define PCIEPHYCFG_RSV10_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_CTSCLKSEL_X14A			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_CTSCLKSEL_X14A			BIT8	//0/x/x/x Select CTSCLK Source
    #define PCIEPHYCFG_FHP1_EPHYMSTEN_X14A			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_EPHYMSTEN_X14A			BIT6	//0/x/x/x Force to Turn on All Functions in Master Block when EPHY Testing
    #define PCIEPHYCFG_FHP1_TPLL1_PD_X14A			BIT5	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_PD_X14A			BIT4	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_PD_X14A			BIT3	//0/x/x/x Master 0, TPLL 1 Power down
    #define PCIEPHYCFG_FHP0_TPLL0_PD_X14A			BIT2	//0/x/x/x Master 0, TPLL 0 Power down
    #define PCIEPHYCFG_FHP_MPLLPD_PHY1_X14A			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP_MPLLPD_PHY0_X14A			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_BANDGAP		0x42	//Bandgap
    #define PCIEPHYCFG_RSV42_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_IPTUNE_X14A			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_IPTUNE_X14A			(BIT6 + BIT7 + BIT8)	//0/x/x/x Internal Current Source Value Tuning.
    #define PCIEPHYCFG_FHP1_BG_TRIM_X14A			(BIT3 + BIT4 + BIT5)	//100b/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_BG_TRIM_X14A			(BIT0 + BIT1 + BIT2)	//100b/x/x/x Fine Tune Bandgap Setting
#define PCIEPHYCFG_BANDGAP_AND_REFCLK		0x44	//Bandgap and Refclk
    #define PCIEPHYCFG_RSV44_11_CFG16			0xF800	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_IPTATUNE_X14A			(BIT8 + BIT9 + BIT10)	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV44_7_CFG16			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_IPTATUNE_X14A			(BIT4 + BIT5 + BIT6)	//0/x/x/x Internal PTAT Current Source Value Tuning.
    #define PCIEPHYCFG_FHP1_REFCLKPS_SEL_X14A			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_REFCLKPS_SEL_X14A			BIT2	//0/x/x/x Manual Setting for Selecting Internal PCIE or SATA Clock
    #define PCIEPHYCFG_FHP1_REFCLK_SEL_X14A			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_REFCLK_SEL_X14A			BIT0	//0/x/x/x Manual Setting for Selecting Internal or External Clock (Feed-through from CKGSRC)
#define PCIEPHYCFG_MPLL_0		0x46	//MPLL 0
    #define PCIEPHYCFG_RSV47_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_MPLLMODE_X14A			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLLMODE_X14A			BIT8	//0/x/x/x MPLL Mode Selection
    #define PCIEPHYCFG_FHP1_MPLL_CP_X14A			0xF0	//5h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_CP_X14A			0xF	//5h/x/x/x MPLL CP Current Setting. 
#define PCIEPHYCFG_MPLL_1		0x48	//MPLL 1
    #define PCIEPHYCFG_FHP1_MPLL_FSEL_X14A			(BIT13 + BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_FSEL_X14A			(BIT10 + BIT11 + BIT12)	//0/x/x/x MPLL VCO Frequency Tuning
    #define PCIEPHYCFG_FHP1_MPLL_FLAGCK_EN_X14A			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_FLAGCK_EN_X14A			BIT8	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_MPLL_DELAY_X14A			(BIT6 + BIT7)	//01b/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_DELAY_X14A			(BIT4 + BIT5)	//01b/x/x/x MPLL Feedback Divider Delay Setting. 
    #define PCIEPHYCFG_FHP1_MPLL_LOCK_EN_X14A			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_LOCK_EN_X14A			BIT2	//0/x/x/x Overwrite MPLL Lock Flag Setting
    #define PCIEPHYCFG_FHP1_MPLL_OP_X14A			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_OP_X14A			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_CTL_0		0x4A	//TPLL Control 0
    #define PCIEPHYCFG_LP1_TPLL1_CP_X14A			0xF000	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP1_TPLL0_CP_X14A			0xF00	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP0_TPLL1_CP_X14A			0xF0	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP0_TPLL0_CP_X14A			0xF	//Fh/x/x/x TPLL0 CP Current Setting. 
#define PCIEPHYCFG_TPLL_CTL_1		0x4C	//TPLL Control 1
    #define PCIEPHYCFG_FHP1_TPLL1_FTUNE_EN_X14A			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FTUNE_EN_X14A			BIT14	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FTUNE_EN_X14A			BIT13	//0/x/x/x Enable TPLL1 Frequency Manual Tuning
    #define PCIEPHYCFG_FHP0_TPLL0_FTUNE_EN_X14A			BIT12	//0/x/x/x Enable TPLL0 Frequency Manual Tuning
    #define PCIEPHYCFG_FHP1_TPLL1_GATECLK_EN_X14A			BIT11	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_GATECLK_EN_X14A			BIT10	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV4C_9			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV4C_8			BIT8	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_FLAGCK_EN_X14A			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FLAGCK_EN_X14A			BIT6	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FLAGCK_EN_X14A			BIT5	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_FLAGCK_EN_X14A			BIT4	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_LOCK_EN_X14A			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_LOCK_EN_X14A			BIT2	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_LOCK_EN_X14A			BIT1	//0/x/x/x Overwrite TPLL Lock Flag Setting
    #define PCIEPHYCFG_FHP0_TPLL0_LOCK_EN_X14A			BIT0	//0/x/x/x Overwrite TPLL Lock Flag Setting
#define PCIEPHYCFG_MASTER_0_TPLL_0_FTUNE		0x4E	//Master 0 TPLL 0 Ftune
    #define PCIEPHYCFG_RSV4F_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_FTUNE_X14A			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_0_TPLL_1_FTUNE		0x50	//Master 0 TPLL 1 Ftune
    #define PCIEPHYCFG_RSV50_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FTUNE_X14A			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_1_TPLL_0_FTUNE		0x52	//Master 1 TPLL 0 Ftune
    #define PCIEPHYCFG_RSV53_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FTUNE_X14A			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_1_TPLL_1_FTUNE		0x54	//Master 1 TPLL 1 Ftune
    #define PCIEPHYCFG_RSV55_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_FTUNE_X14A			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_BAND_MANUAL_TUNING_ENABLE		0x56	//TPLL Band Manual Tuning Enable
    #define PCIEPHYCFG_RSV57_CFG16			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_BDSET_EN_X14A			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_BDSET_EN_X14A			BIT2	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_BDSET_EN_X14A			BIT1	//0/x/x/x Enable TPLL1 Band Manual Tuning
    #define PCIEPHYCFG_FHP0_TPLL0_BDSET_EN_X14A			BIT0	//0/x/x/x Enable TPLL0 Band Manual Tuning
#define PCIEPHYCFG_TPLL_MANUAL_TUNING_SETTING		0x58	//TPLL Manual Tuning Setting
    #define PCIEPHYCFG_FHP1_TPLL1_BDSET_X14A			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_BDSET_X14A			0xF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_BDSET_X14A			0xF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_BDSET_X14A			0xF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_INITIAL_VCTL_SEL		0x5A	//TPLL Initial Vcontrol Selection
    #define PCIEPHYCFG_RSV5B_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_VCRST_X14A			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_VCRST_X14A			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_VCRST_X14A			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Initial Vcontrol Selection
    #define PCIEPHYCFG_FHP0_TPLL0_VCRST_X14A			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Initial Vcontrol Selection
#define PCIEPHYCFG_TPLL_CLK_BUFFER_REGULATOR_VOLTAGE_SEL		0x5C	//TPLL Clock Buffer Regulator Voltage Selection
    #define PCIEPHYCFG_RSV5D_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_CKBUFVREG_X14A			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_CKBUFVREG_X14A			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_CKBUFVREG_X14A			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Clock Buffer Regulator Voltage Selection
    #define PCIEPHYCFG_FHP0_TPLL0_CKBUFVREG_X14A			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Clock Buffer Regulator Voltage Selection
#define PCIEPHYCFG_TPLL_CLK_BUFFER_DUTY_SEL		0x5E	//TPLL Clock Buffer Duty Selection
    #define PCIEPHYCFG_RSV5F_CFG16			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FH0_TPLL1_CLK_DIST_MODE_X14A			BIT13	//0/x/x/x Reserved
    #define PCIEPHYCFG_FH1_TPLL1_CLK_DIST_MODE_X14A			BIT12	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_CKBUFDUTY_X14A			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_CKBUFDUTY_X14A			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_CKBUFDUTY_X14A			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Clock Buffer Duty Selection
    #define PCIEPHYCFG_FHP0_TPLL0_CKBUFDUTY_X14A			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Clock Buffer Duty Selection
#define PCIEPHYCFG_TX_RESISTANCE_SET		0x60	//TX Resistance Set
    #define PCIEPHYCFG_RSV61_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNTXSETEN_X14A			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNTXSETEN_X14A			BIT8	//0/x/x/x TX Resistance Set Enable 
    #define PCIEPHYCFG_FHP1_RTNTXSET_X14A			0xF0	//8h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNTXSET_X14A			0xF	//8h/x/x/x TX Resistance Set Value
#define PCIEPHYCFG_RX_RESISTANCE_SET		0x62	//RX Resistance Set
    #define PCIEPHYCFG_RSV63_CFG16			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TXREG_DN_X14A			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TXREG_DN_X14A			(BIT11 + BIT12)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
    #define PCIEPHYCFG_RSV62_10_CFG16			BIT10	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNRXSETEN_X14A			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNRXSETEN_X14A			BIT8	//0/x/x/x RX Resistance Set Enable 
    #define PCIEPHYCFG_FHP1_RTNRXSET_X14A			0xF0	//8h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNRXSET_X14A			0xF	//8h/x/x/x RX Resistance Set Value, Same as TX ; 
#define PCIEPHYCFG_BIST_SETTING		0x64	//BIST Setting
    #define PCIEPHYCFG_RSV65_CFG16			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNBIST_X14A			(BIT2 + BIT3)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNBIST_X14A			(BIT0 + BIT1)	//0/x/x/x BIST Setting 1
#define PCIEPHYCFG_RESERVED		0x66	//Reserved
    #define PCIEPHYCFG_RSV67_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_FHP_TPLLPD_TPLL_PWR_DOWN		0x6F	//FHP TPLLPD (TPLL Power Down)
    #define PCIEPHYCFG_FHP1_TPLLPD_X14A			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLLPD_X14A			BIT6	//0/0/x/x TPLL Power Down Control
    #define PCIEPHYCFG_FHP1_TPLLPD_X2B			BIT5	//0/0/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLLPD_X2B			BIT4	//0/0/x/x TPLL Power Down Control
    #define PCIEPHYCFG_RSV6F_CFG16			0xF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G1		0x70	//TPLL Feedback Frequency Dividers G1
    #define PCIEPHYCFG_RSV71_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X14A_G1			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X14A_G1			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X14A_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X14A_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G1		0x72	//TPLL VCO Operation Frequency G1
    #define PCIEPHYCFG_RSV73_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X14A_G1			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X14A_G1			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X14A_G1			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X14A_G1			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency:
#define PCIEPHYCFG_RESERVED_Z1		0x74	//Reserved
    #define PCIEPHYCFG_RSV74_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z2		0x76	//Reserved
    #define PCIEPHYCFG_RSV76_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G2		0x80	//TPLL Feedback Frequency Dividers G2
    #define PCIEPHYCFG_RSV81_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X14A_G2			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X14A_G2			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X14A_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X14A_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G2		0x82	//TPLL VCO Operation Frequency G2
    #define PCIEPHYCFG_RSV83_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X14A_G2			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X14A_G2			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X14A_G2			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X14A_G2			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency:
#define PCIEPHYCFG_RESERVED_Z3		0x84	//Reserved
    #define PCIEPHYCFG_RSV85_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z4		0x86	//Reserved
    #define PCIEPHYCFG_RSV86_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G3		0x90	//TPLL Feedback Frequency Dividers G3
    #define PCIEPHYCFG_RSV91_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X14A_G3			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X14A_G3			(BIT6 + BIT7 + BIT8)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X14A_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X14A_G3			(BIT0 + BIT1 + BIT2)	//010b/x/x/x Reserved
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G3		0x92	//TPLL VCO Operation Frequency G3
    #define PCIEPHYCFG_RSV93_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X14A_G3			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X14A_G3			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X14A_G3			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency:
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X14A_G3			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency:
#define PCIEPHYCFG_RESERVED_Z5		0x94	//Reserved
    #define PCIEPHYCFG_RSV95_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z6		0x96	//Reserved
    #define PCIEPHYCFG_RSV97_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESISTANCE_OUTPUT		0xA0	//Resistance Output
    #define PCIEPHYCFG_RSVA0_12_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP0_RTNRXOUT_X14A			0xF00	//HwInit/x/x/x RTN RX Resistance Output
    #define PCIEPHYCFG_RSVA0_4_CFG16			0xF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP0_RTNTXOUT_X14A			0xF	//HwInit/x/x/x RTN TX Resistance Output
#define PCIEPHYCFG_TPLL_TURN_OFF		0xA2	//TPLL Turn off
    #define PCIEPHYCFG_RSVA2_CFG16			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_RTPLL1_TIMER_LIM_X14A			(BIT4 + BIT5)	//01b/x/x/x TPLL0 Timer Limit
    #define PCIEPHYCFG_RTPLL0_TIMER_LIM_X14A			(BIT2 + BIT3)	//01b/x/x/x TPLL1 Timer Limit
    #define PCIEPHYCFG_RTPLL1PD_G2_X14A			BIT1	//0/x/x/x TPLL0 Gating
    #define PCIEPHYCFG_RTPLL0PD_G3_X14A			BIT0	//0/x/x/x TPLL1 Gating
#define PCIEPHYCFG_RESERVED_Z7		0xA4	//Reserved
    #define PCIEPHYCFG_RSVA4_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z8		0xA6	//Reserved
    #define PCIEPHYCFG_RSVA6_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE00		0xB0	//TX Swing Manual Set Lane00
    #define PCIEPHYCFG_RSVPCIEPHYCFG_B0_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP00_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE01		0xB2	//TX Swing Manual Set Lane01
    #define PCIEPHYCFG_RSVPCIEPHYCFG_B2_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP01_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE02		0xB4	//TX Swing Manual Set Lane02
    #define PCIEPHYCFG_RSVPCIEPHYCFG_B4_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP02_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE03		0xB6	//TX Swing Manual Set Lane03
    #define PCIEPHYCFG_RSVPCIEPHYCFG_B6_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP03_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE04		0xB8	//TX Swing Manual Set Lane04
    #define PCIEPHYCFG_RSVPCIEPHYCFG_B8_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP04_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE05		0xBA	//TX Swing Manual Set Lane05
    #define PCIEPHYCFG_RSVPCIEPHYCFG_BA_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP05_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE06		0xBC	//TX Swing Manual Set Lane06
    #define PCIEPHYCFG_RSVPCIEPHYCFG_BC_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP06_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE07		0xBE	//TX Swing Manual Set Lane07
    #define PCIEPHYCFG_RSVPCIEPHYCFG_BE_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP07_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE08		0xC0	//TX Swing Manual Set Lane08
    #define PCIEPHYCFG_RSVPCIEPHYCFG_C0_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP08_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE09		0xC2	//TX Swing Manual Set Lane09
    #define PCIEPHYCFG_RSVPCIEPHYCFG_C2_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP09_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE10		0xC4	//TX Swing Manual Set Lane10
    #define PCIEPHYCFG_RSVPCIEPHYCFG_C4_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP10_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE11		0xC6	//TX Swing Manual Set Lane11
    #define PCIEPHYCFG_RSVPCIEPHYCFG_C6_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP11_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE12		0xC8	//TX Swing Manual Set Lane12
    #define PCIEPHYCFG_RSVPCIEPHYCFG_C8_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP12_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE13		0xCA	//TX Swing Manual Set Lane13
    #define PCIEPHYCFG_RSVPCIEPHYCFG_CA_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP13_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE14		0xCC	//TX Swing Manual Set Lane14
    #define PCIEPHYCFG_RSVPCIEPHYCFG_CC_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP14_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_TX_SWING_MANUAL_SET_LANE15		0xCE	//TX Swing Manual Set Lane15
    #define PCIEPHYCFG_RSVPCIEPHYCFG_CE_7			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_PCIE_TXEQSET_8_0			0x3FE	//0/0/x/x TX Swing Manual Setting
    #define PCIEPHYCFG_FRP15_PCIE_TXEQSET_EN			BIT0	//0/0/x/x PCIe TX Swing and EQ Manual Set Enable
#define PCIEPHYCFG_PCIE_ROMSIP_REG		0xE0	//PCIE ROMSIP Register
    #define PCIEPHYCFG_R_PEMCU_VPI			BIT7	//0/0/x/x R_PEMCU_VPI PEMCU RW DATA from/to PCIE / VPI
    #define PCIEPHYCFG_R_PEMCU_BIOS			BIT6	//0/0/x/x Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E0_7			BIT5	//0/x/x/x Reserved
    #define PCIEPHYCFG_PEMCU_RPCIESATACFG_4_0			0x1F	//HwInit/x/x/x PCIe Configuration
#define PCIEPHYCFG_PCIE_ROMSIP_REG_Z1		0xE1	//PCIE ROMSIP Register
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE3_1_0			(BIT6 + BIT7)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE2_1_0			(BIT4 + BIT5)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE1_1_0			(BIT2 + BIT3)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE0_1_0			(BIT0 + BIT1)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
#define PCIEPHYCFG_PCIE_ROMSIP_REG_Z2		0xE2	//PCIE ROMSIP Register
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE7_1_0			(BIT6 + BIT7)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE6_1_0			(BIT4 + BIT5)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE5_1_0			(BIT2 + BIT3)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
    #define PCIEPHYCFG_PEMCU_PCIE_REVISION_PE4_1_0			(BIT0 + BIT1)	//HwInit/x/x/x PCIe Revision (Gen3 or Gen2 or Gen1) Selection
#define PCIEPHYCFG_RESERVED_Z9		0xE3	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E3			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_PSO_ACK_PWR_GATE_AND_ISO_ENABLE		0xE4	//PSO_ACK Power Gate and ISO Enable
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E4			0xF8	//0/x/x/x Reserved
    #define PCIEPHYCFG_PSO_ACK_X8			BIT2	//HwInit/x/x/x X8 Power Gating Acknowledge
    #define PCIEPHYCFG_ISO_EN_X8			BIT1	//0/0/x/x X8 Isolation Enable
    #define PCIEPHYCFG_PSO_EN_X8			BIT0	//0/0/x/x X8 Power Gating Acknowledge Enable
#define PCIEPHYCFG_MISC		0xE5	//MISC
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E5			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_SPEED_CHG_ARB_EN			BIT4	//1b/x/x/x Multi-port Speed Change Control
    #define PCIEPHYCFG_RWAITMORE			BIT3	//0/x/x/x Wait State Mechanism in Module PHYLS_DLBUF Wait more Time or not
    #define PCIEPHYCFG_RSPDCH			BIT2	//0/x/x/x Change Speed when LCRL Want to GEN3.
    #define PCIEPHYCFG_RHNRECOV			BIT1	//0/x/x/x Hot-reset / Disable / Loopback in TS
    #define PCIEPHYCFG_REQ2FBRECP			BIT0	//0/x/x/x Feedback USE_PRESET Flag during EQ Phase 2
#define PCIEPHYCFG_RESERVED_Z10		0xE6	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E6			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RDISPEXC_PHYA_B		0xE7	//RDISPEXC_PHYA/B
    #define PCIEPHYCFG_RSVPCIEPHYCFG_E7			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_PEMCU_USE_REG_0		0xF0	//PEMCU Use Register 0
    #define PCIEPHYCFG_PEMCU_REG_0			0xFFFFFFFF	//0/x/x/x The Register for PEMCU
#define PCIEPHYCFG_PEMCU_USE_REG_1		0xF4	//PEMCU Use Register 1
    #define PCIEPHYCFG_PEMCU_REG_1			0xFFFFFFFF	//0/x/x/x The Register for PEMCU
#define PCIEPHYCFG_PEMCU_USE_REG_2		0xF8	//PEMCU Use Register 2
    #define PCIEPHYCFG_PEMCU_REG_2			0xFFFFFFFF	//0/x/x/x The Register for PEMCU
#define PCIEPHYCFG_PEMCU_USE_REG_3		0xFC	//PEMCU Use Register 3
    #define PCIEPHYCFG_PEMCU_REG_3			0xFFFFFFFF	//0/x/x/x The Register for PEMCU
#define PCIEPHYCFG_EPHY0_EPHY_CTL_Z1		0x140	//EPHY0 EPHY Control
    #define PCIEPHYCFG_RSV140_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_CTSCLKSEL_X2B			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_CTSCLKSEL_X2B			BIT8	//0/x/x/x Select CTSCLK Source.
    #define PCIEPHYCFG_FHP1_EPHYMSTEN_X2B			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_EPHYMSTEN_X2B			BIT6	//0/x/x/x Force to Turn on All Functions in Master Block when EPHY Testing 
    #define PCIEPHYCFG_FHP1_TPLL1_PD_X2B			BIT5	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_PD_X2B			BIT4	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_PD_X2B			BIT3	//0/x/x/x Master 0, TPLL 1 Power down
    #define PCIEPHYCFG_FHP0_TPLL0_PD_X2B			BIT2	//0/x/x/x Master 0, TPLL 0 Power down
    #define PCIEPHYCFG_FHP_MPLLPD_PHY1_X2B			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP_MPLLPD_PHY0_X2B			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_BANDGAP_Z1		0x142	//Bandgap
    #define PCIEPHYCFG_RSV142_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_IPTUNE_X2B			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_IPTUNE_X2B			(BIT6 + BIT7 + BIT8)	//0/x/x/x Internal Current Source Value Tuning.
    #define PCIEPHYCFG_FHP1_BG_TRIM_X2B			(BIT3 + BIT4 + BIT5)	//100b/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_BG_TRIM_X2B			(BIT0 + BIT1 + BIT2)	//100b/x/x/x Fine Tune Bandgap Setting
#define PCIEPHYCFG_BANDGAP_AND_REFCLK_Z1		0x144	//Bandgap and Refclk
    #define PCIEPHYCFG_RSV144_11_CFG16			0xF800	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_IPTATUNE_X2B			(BIT8 + BIT9 + BIT10)	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV12_7_CFG16			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_IPTATUNE_X2B			(BIT4 + BIT5 + BIT6)	//0/x/x/x Internal PTAT Current Source Value Tuning.
    #define PCIEPHYCFG_FHP1_REFCLKPS_SEL_X2B			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_REFCLKPS_SEL_X2B			BIT2	//0/x/x/x Manual Setting for Selecting Internal PCIE or SATA Clock
    #define PCIEPHYCFG_FHP1_REFCLK_SEL_X2B			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_REFCLK_SEL_X2B			BIT0	//0/x/x/x Manual Setting for Selecting Internal or External Clock (Feed-through from CKGSRC)
#define PCIEPHYCFG_MPLL_0_Z1		0x146	//MPLL 0
    #define PCIEPHYCFG_RSV147_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_MPLLMODE_X2B			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLLMODE_X2B			BIT8	//0/x/x/x MPLL Mode Selection
    #define PCIEPHYCFG_FHP1_MPLL_CP_X2B			0xF0	//5h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_CP_X2B			0xF	//5h/x/x/x MPLL CP Current Setting. 
#define PCIEPHYCFG_MPLL_1_Z1		0x148	//MPLL 1
    #define PCIEPHYCFG_FHP1_MPLL_FSEL_X2B			(BIT13 + BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_FSEL_X2B			(BIT10 + BIT11 + BIT12)	//0/x/x/x MPLL VCO Frequency Tuning
    #define PCIEPHYCFG_FHP1_MPLL_FLAGCK_EN_X2B			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_FLAGCK_EN_X2B			BIT8	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_MPLL_DELAY_X2B			(BIT6 + BIT7)	//01b/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_DELAY_X2B			(BIT4 + BIT5)	//01b/x/x/x MPLL Feedback Divider Delay Setting.
    #define PCIEPHYCFG_FHP1_MPLL_LOCK_EN_X2B			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_LOCK_EN_X2B			BIT2	//0/x/x/x Overwrite MPLL Lock Flag Setting
    #define PCIEPHYCFG_FHP1_MPLL_OP_X2B			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_MPLL_OP_X2B			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_CTL_0_Z1		0x14A	//TPLL Control 0
    #define PCIEPHYCFG_LP1_TPLL1_CP_X2B			0xF000	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP1_TPLL0_CP_X2B			0xF00	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP0_TPLL1_CP_X2B			0xF0	//Fh/x/x/x TPLL0 CP Current Setting. 
    #define PCIEPHYCFG_LP0_TPLL0_CP_X2B			0xF	//Fh/x/x/x TPLL0 CP Current Setting. 
#define PCIEPHYCFG_TPLL_CTL_1_Z1		0x14C	//TPLL Control 1
    #define PCIEPHYCFG_FHP1_TPLL1_FTUNE_EN_X2B			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FTUNE_EN_X2B			BIT14	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FTUNE_EN_X2B			BIT13	//0/x/x/x Enable TPLL1 Frequency Manual Tuning.
    #define PCIEPHYCFG_FHP0_TPLL0_FTUNE_EN_X2B			BIT12	//0/x/x/x Enable TPLL0 Frequency Manual Tuning.
    #define PCIEPHYCFG_FHP1_TPLL1_GATECLK_EN_X2B			BIT11	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_GATECLK_EN_X2B			BIT10	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV14D_9			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV14D_8			BIT8	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_FLAGCK_EN_X2B			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FLAGCK_EN_X2B			BIT6	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FLAGCK_EN_X2B			BIT5	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_FLAGCK_EN_X2B			BIT4	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_LOCK_EN_X2B			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_LOCK_EN_X2B			BIT2	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_LOCK_EN_X2B			BIT1	//0/x/x/x Overwrite TPLL Lock Flag Setting
    #define PCIEPHYCFG_FHP0_TPLL0_LOCK_EN_X2B			BIT0	//0/x/x/x Overwrite TPLL Lock Flag Setting
#define PCIEPHYCFG_MASTER_0_TPLL_0_FTUNE_Z1		0x14E	//Master 0 TPLL 0 Ftune
    #define PCIEPHYCFG_RSV14E_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_FTUNE_X2B			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_0_TPLL_1_FTUNE_Z1		0x150	//Master 0 TPLL 1 Ftune
    #define PCIEPHYCFG_RSV151_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_FTUNE_X2B			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_1_TPLL_0_FTUNE_Z1		0x152	//Master 1 TPLL 0 Ftune
    #define PCIEPHYCFG_RSV153_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_FTUNE_X2B			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_MASTER_1_TPLL_1_FTUNE_Z1		0x154	//Master 1 TPLL 1 Ftune
    #define PCIEPHYCFG_RSV155_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_FTUNE_X2B			0x3FF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_BAND_MANUAL_TUNING_ENABLE_Z1		0x156	//TPLL Band Manual Tuning Enable
    #define PCIEPHYCFG_RSV157_CFG16			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_BDSET_EN_X2B			BIT3	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_BDSET_EN_X2B			BIT2	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_BDSET_EN_X2B			BIT1	//0/x/x/x Enable TPLL1 Band Manual Tuning.
    #define PCIEPHYCFG_FHP0_TPLL0_BDSET_EN_X2B			BIT0	//0/x/x/x Enable TPLL0 Band Manual Tuning.
#define PCIEPHYCFG_TPLL_MANUAL_TUNING_SETTING_Z1		0x158	//TPLL Manual Tuning Setting
    #define PCIEPHYCFG_FHP1_TPLL1_BDSET_X2B			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_BDSET_X2B			0xF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_BDSET_X2B			0xF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL0_BDSET_X2B			0xF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_INITIAL_VCTL_SEL_Z1		0x15A	//TPLL Initial Vcontrol Selection
    #define PCIEPHYCFG_RSV15B_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_VCRST_X2B			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_VCRST_X2B			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_VCRST_X2B			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Initial Vcontrol Selection
    #define PCIEPHYCFG_FHP0_TPLL0_VCRST_X2B			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Initial Vcontrol Selection
#define PCIEPHYCFG_TPLL_CLK_BUFFER_REGULATOR_VOLTAGE_SEL_Z1		0x15C	//TPLL Clock Buffer Regulator Voltage Selection
    #define PCIEPHYCFG_RSV15D_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_CKBUFVREG_X2B			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_CKBUFVREG_X2B			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_CKBUFVREG_X2B			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Clock Buffer Regulator Voltage Selection
    #define PCIEPHYCFG_FHP0_TPLL0_CKBUFVREG_X2B			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Clock Buffer Regulator Voltage Selection
#define PCIEPHYCFG_TPLL_CLK_BUFFER_DUTY_SEL_Z1		0x15E	//TPLL Clock Buffer Duty Selection
    #define PCIEPHYCFG_RSV15F_CFG16			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FH0_TPLL1_CLK_DIST_MODE_X2B			BIT13	//0/x/x/x Reserved
    #define PCIEPHYCFG_FH1_TPLL1_CLK_DIST_MODE_X2B			BIT12	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL1_CKBUFDUTY_X2B			(BIT9 + BIT10 + BIT11)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TPLL0_CKBUFDUTY_X2B			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TPLL1_CKBUFDUTY_X2B			(BIT3 + BIT4 + BIT5)	//0/x/x/x TPLL1 Clock Buffer Duty Selection
    #define PCIEPHYCFG_FHP0_TPLL0_CKBUFDUTY_X2B			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL0 Clock Buffer Duty Selection
#define PCIEPHYCFG_TX_RESISTANCE_SET_Z1		0x160	//Tx Resistance Set
    #define PCIEPHYCFG_RSV161_CFG16			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNTXSETEN_X2B			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNTXSETEN_X2B			BIT8	//0/x/x/x TX Resistance Set Enable 
    #define PCIEPHYCFG_FHP1_RTNTXSET_X2B			0xF0	//8h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNTXSET_X2B			0xF	//8h/x/x/x TX Resistance Set Value
#define PCIEPHYCFG_RX_RESISTANCE_SET_Z1		0x162	//Rx Resistance Set
    #define PCIEPHYCFG_RSV163_CFG16			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_TXREG_DN_X2B			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_TXREG_DN_X2B			(BIT11 + BIT12)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
    #define PCIEPHYCFG_RSV162_10_CFG16			BIT10	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNRXSETEN_X2B			BIT9	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNRXSETEN_X2B			BIT8	//0/x/x/x RX Resistance Set Enable 
    #define PCIEPHYCFG_FHP1_RTNRXSET_X2B			0xF0	//8h/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNRXSET_X2B			0xF	//8h/x/x/x RX Resistance Set Value, Same as TX
#define PCIEPHYCFG_BIST_SETTING_Z1		0x164	//BIST Setting
    #define PCIEPHYCFG_RSV165_CFG16			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP1_RTNBIST_X2B			(BIT2 + BIT3)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP0_RTNBIST_X2B			(BIT0 + BIT1)	//0/x/x/x BIST Setting 0
#define PCIEPHYCFG_RESERVED_Z11		0x166	//Reserved
    #define PCIEPHYCFG_RSV166_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G1_Z1		0x170	//TPLL Feedback Frequency Dividers G1
    #define PCIEPHYCFG_RSV171_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X2B_G1			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X2B_G1			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X2B_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X2B_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G1_Z1		0x172	//TPLL VCO Operation Frequency G1
    #define PCIEPHYCFG_RSV173_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X2B_G1			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X2B_G1			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X2B_G1			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X2B_G1			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency
#define PCIEPHYCFG_RESERVED_Z12		0x174	//Reserved
    #define PCIEPHYCFG_RSV175_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z13		0x176	//Reserved
    #define PCIEPHYCFG_RSV177_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G2_Z1		0x180	//TPLL Feedback Frequency Dividers G2
    #define PCIEPHYCFG_RSV181_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X2B_G2			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X2B_G2			(BIT6 + BIT7 + BIT8)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X2B_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X2B_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G2_Z1		0x182	//TPLL VCO Operation Frequency G2
    #define PCIEPHYCFG_RSV183_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X2B_G2			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X2B_G2			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X2B_G2			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X2B_G2			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency
#define PCIEPHYCFG_RESERVED_Z14		0x184	//Reserved
    #define PCIEPHYCFG_RSV185_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z15		0x186	//Reserved
    #define PCIEPHYCFG_RSV187_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TPLL_FEEDBACK_FREQUENCY_DIVIDERS_G3_Z1		0x190	//TPLL Feedback Frequency Dividers G3
    #define PCIEPHYCFG_RSV191_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_DIV_X2B_G3			(BIT9 + BIT10 + BIT11)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL0_DIV_X2B_G3			(BIT6 + BIT7 + BIT8)	//010b/x/x/x Reserved
    #define PCIEPHYCFG_FRP0_TPLL1_DIV_X2B_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x TPLL Feedback Frequency Dividers M0, M1, M2, N Selection and Settings
    #define PCIEPHYCFG_FRP0_TPLL0_DIV_X2B_G3			(BIT0 + BIT1 + BIT2)	//010b/x/x/x Reserved
#define PCIEPHYCFG_TPLL_VCO_OPERATION_FREQUENCY_G3_Z1		0x192	//TPLL VCO Operation Frequency G3
    #define PCIEPHYCFG_RSV193_CFG16			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP1_TPLL1_BAND_X2B_G3			(BIT6 + BIT7)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP1_TPLL0_BAND_X2B_G3			(BIT4 + BIT5)	//01b/x/x/x TPLL0 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL1_BAND_X2B_G3			(BIT2 + BIT3)	//01b/x/x/x TPLL1 VCO Operation Frequency
    #define PCIEPHYCFG_FRP0_TPLL0_BAND_X2B_G3			(BIT0 + BIT1)	//01b/x/x/x TPLL0 VCO Operation Frequency
#define PCIEPHYCFG_RESERVED_Z16		0x194	//Reserved
    #define PCIEPHYCFG_RSV194_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z17		0x196	//Reserved
    #define PCIEPHYCFG_RSV196_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESISTANCE_OUTPUT_Z1		0x1A0	//Resistance Output
    #define PCIEPHYCFG_RSV1A0_12_CFG16			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP0_RTNRXOUT_X2B			0xF00	//HwInit/x/x/x RX Resistance Output
    #define PCIEPHYCFG_RSV1A0_4_CFG16			0xF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP0_RTNTXOUT_X2B			0xF	//HwInit/x/x/x TX Resistance Output
#define PCIEPHYCFG_TPLL_TURN_OFF_Z1		0x1A2	//TPLL Turn Off
    #define PCIEPHYCFG_RSV1A1_CFG16			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_RTPLL1_TIMER_LIM_X2B			(BIT4 + BIT5)	//01b/x/x/x TPLL0 Timer Limit
    #define PCIEPHYCFG_RTPLL0_TIMER_LIM_X2B			(BIT2 + BIT3)	//01b/x/x/x TPLL1 Timer Limit
    #define PCIEPHYCFG_RTPLL1PD_G2_X2B			BIT1	//0/x/x/x TPLL0 Gating
    #define PCIEPHYCFG_RTPLL0PD_G3_X2B			BIT0	//0/x/x/x TPLL1 Gating
#define PCIEPHYCFG_RESERVED_Z18		0x1A4	//Reserved
    #define PCIEPHYCFG_RSV1A4_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z19		0x1A6	//Reserved
    #define PCIEPHYCFG_RSV1A6_CFG16			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE00		0x200	//RCV CDR EQ Control Lane00
    #define PCIEPHYCFG_RSV200_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP00_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP00_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP00_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP00_RCVPDSEL			BIT9	//1b/x/x/x RCV Power Off Method
    #define PCIEPHYCFG_FHP00_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP00_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP00_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP00_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP00_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select 
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE00		0x202	//Manual Set in Test Mode Lane00
    #define PCIEPHYCFG_FHP00_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP00_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power Down in Test Mode
    #define PCIEPHYCFG_FHP00_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP00_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP00_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Ideal Power Down Enable in Test Mode
    #define PCIEPHYCFG_FRP00_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP00_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in test mode
    #define PCIEPHYCFG_FRP00_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP00_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP00_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP00_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP00_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set Register
    #define PCIEPHYCFG_FRP00_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE00_G1		0x204	//TX_DUTY TXSW TDNCIS TDPCIS Lane00 G1
    #define PCIEPHYCFG_FRP00_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP00_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP00_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP00_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE00_G1		0x206	//TDCIS TXPSR TXNSR Lane00 G1
    #define PCIEPHYCFG_RSV206_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE00_G1		0x208	//RCV Lane00 G1
    #define PCIEPHYCFG_RSV208_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP00_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP00_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP00_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP00_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE00_G1		0x20A	//CDR 0 Lane00 G1
    #define PCIEPHYCFG_RSV20A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP00_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP00_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s to P0
    #define PCIEPHYCFG_FRP00_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP00_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE00_G1		0x20C	//CDR 1 Lane00 G1
    #define PCIEPHYCFG_RSV20C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode 
    #define PCIEPHYCFG_FRP00_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP00_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP00_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP00_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode 
    #define PCIEPHYCFG_FRP00_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP00_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP00_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE00_G1		0x20E	//Equalizer Adaptive 0 Lane00 G1
    #define PCIEPHYCFG_FRP00_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE00_G1		0x210	//Equalizer Adaptive 1 Lane00 G1
    #define PCIEPHYCFG_FRP00_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP00_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP00_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP00_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE00_G1		0x212	//Equalizer Adaptive 2 Lane00 G1
    #define PCIEPHYCFG_FRP00_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV212_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV212_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP00_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE00_G1		0x214	//Equalizer Adaptive 3 Lane00 G1
    #define PCIEPHYCFG_FRP00_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV214_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP00_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV214_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE00_G1		0x216	//Equalizer Adaptive 4 Lane00 G1
    #define PCIEPHYCFG_FRP00_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV216_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP00_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV216_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE00		0x220	//EQTNBIST Lane00
    #define PCIEPHYCFG_RSV220_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP00_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE00		0x222	//Eye Monitor Lane00
    #define PCIEPHYCFG_RSV222_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP00_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP00_TXMODE			BIT13	//0/x/x/x TX Operating Mode 
    #define PCIEPHYCFG_FRP00_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP00_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP00_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP00_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE00_G2		0x224	//TX_DUTY TXSW TDNCIS TDPCIS Lane00 G2
    #define PCIEPHYCFG_FRP00_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP00_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP00_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP00_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE00_G2		0x226	//TDCIS TXPSR TXNSR Lane00 G2
    #define PCIEPHYCFG_RSV226_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE00_G2		0x228	//RCV Lane00 G2
    #define PCIEPHYCFG_RSV228_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP00_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP00_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP00_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP00_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE00_G2		0x22A	//CDR 0 Lane00 G2
    #define PCIEPHYCFG_RSV22A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP00_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP00_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP00_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP00_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE00_G2		0x22C	//CDR 1 Lane00 G2
    #define PCIEPHYCFG_RSV22C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP00_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP00_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP00_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP00_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP00_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP00_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP00_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE00_G2		0x22E	//Equalizer Adaptive 0 Lane00 G2
    #define PCIEPHYCFG_FRP00_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE00_G2		0x230	//Equalizer Adaptive 1 Lane00 G2
    #define PCIEPHYCFG_FRP00_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP00_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP00_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP00_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE00_G2		0x232	//Equalizer Adaptive 2 Lane00 G2
    #define PCIEPHYCFG_FRP00_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV232_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV232_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP00_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE00_G2		0x234	//Equalizer Adaptive 3 Lane00 G2
    #define PCIEPHYCFG_FRP00_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV234_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial Or Set Value
    #define PCIEPHYCFG_FRP00_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV234_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE00_G2		0x236	//Equalizer Adaptive 4 Lane00 G2
    #define PCIEPHYCFG_FRP00_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV236_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP00_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV236_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_00		0x240	//RCV CDR EQ Control 1 lane 00
    #define PCIEPHYCFG_RSV240_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP00_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP00_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH00_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z20		0x242	//Reserved
    #define PCIEPHYCFG_RSV242_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE00_G3		0x244	//TX_DUTY TXSW TDNCIS TDPCIS Lane00 G3
    #define PCIEPHYCFG_FRP00_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP00_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP00_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP00_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE00_G3		0x246	//TDCIS TXPSR TXNSR Lane00 G3
    #define PCIEPHYCFG_RSV246_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE00_G3		0x248	//RCV Lane00 G3
    #define PCIEPHYCFG_RSV248_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP00_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP00_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP00_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP00_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE00_G3		0x24A	//CDR 0 Lane00 G3
    #define PCIEPHYCFG_RSV24A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP00_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP00_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP00_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP00_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE00_G3		0x24C	//CDR 1 Lane00 G3
    #define PCIEPHYCFG_RSV24C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP00_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP00_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP00_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP00_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP00_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP00_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP00_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE00_G3		0x24E	//Equalizer Adaptive 0 Lane00 G3
    #define PCIEPHYCFG_FRP00_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE00_G3		0x250	//Equalizer Adaptive 1 Lane00 G3
    #define PCIEPHYCFG_FRP00_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after first Tuning Finished
    #define PCIEPHYCFG_FRP00_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP00_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP00_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP00_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE00_G3		0x252	//Equalizer Adaptive 2 Lane00 G3
    #define PCIEPHYCFG_FRP00_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV252_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV252_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP00_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE00_G3		0x254	//Equalizer Adaptive 3 Lane00 G3
    #define PCIEPHYCFG_FRP00_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV254_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP00_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV254_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE00_G3		0x256	//Equalizer Adaptive 4 Lane00 G3
    #define PCIEPHYCFG_FRP00_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV256_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP00_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV256_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP00_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE00		0x260	//EPHY Status 0 Lane00
    #define PCIEPHYCFG_RSV260_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV260_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP00_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical idle  Detection Flag 
    #define PCIEPHYCFG_EP00_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE00		0x262	//EPHY Status 1 Lane00
    #define PCIEPHYCFG_RSV262_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV262_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE00		0x264	//EPHY Status 2 Lane00
    #define PCIEPHYCFG_RSV264_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV264_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE00		0x266	//BER Counter Result Lane00
    #define PCIEPHYCFG_RSV266_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP00_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE00		0x268	//Ideal PI Phase for Data Sampling Lane00
    #define PCIEPHYCFG_RSV268_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP00_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE01		0x280	//RCV CDR EQ Control Lane01
    #define PCIEPHYCFG_RSV280_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP01_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3 
    #define PCIEPHYCFG_FHP01_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP01_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW 
    #define PCIEPHYCFG_FHP01_RCVPDSEL			BIT9	//1b/x/x/x RCV Power Off method  
    #define PCIEPHYCFG_FHP01_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP01_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP01_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP01_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP01_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE01		0x282	//Manual Set in Test Mode Lane01
    #define PCIEPHYCFG_FHP01_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP01_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP01_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP01_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP01_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP01_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP01_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP01_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP01_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP01_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP01_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP01_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual set in Test Mode
    #define PCIEPHYCFG_FRP01_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE01_G1		0x284	//TX_DUTY TXSW TDNCIS TDPCIS Lane01 G1
    #define PCIEPHYCFG_FRP01_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP01_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP01_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP01_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE01_G1		0x286	//TDCIS TXPSR TXNSR Lane01 G1
    #define PCIEPHYCFG_RSV287_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE01_G1		0x288	//RCV Lane01 G1
    #define PCIEPHYCFG_RSV289_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP01_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP01_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP01_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP01_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE01_G1		0x28A	//CDR 0 Lane01 G1
    #define PCIEPHYCFG_RSV28B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP01_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP01_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP01_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP01_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE01_G1		0x28C	//CDR 1 Lane01 G1
    #define PCIEPHYCFG_RSV28D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP01_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP01_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP01_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP01_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP01_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP01_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE01_G1		0x28E	//Equalizer Adaptive 0 Lane01 G1
    #define PCIEPHYCFG_FRP01_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE01_G1		0x290	//Equalizer Adaptive 1 Lane01 G1
    #define PCIEPHYCFG_FRP01_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP01_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP01_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP01_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE01_G1		0x292	//Equalizer Adaptive 2 Lane01 G1
    #define PCIEPHYCFG_FRP01_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV292_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV292_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP01_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE01_G1		0x294	//Equalizer Adaptive 3 Lane01 G1
    #define PCIEPHYCFG_FRP01_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV294_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV294_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE01_G1		0x296	//Equalizer Adaptive 4 Lane01 G1
    #define PCIEPHYCFG_FRP01_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV296_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV296_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE01		0x2A0	//EQTNBIST Lane01
    #define PCIEPHYCFG_RSV2A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP01_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE01		0x2A2	//Eye Monitor Lane01
    #define PCIEPHYCFG_RSV2A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP01_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP01_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP01_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP01_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP01_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP01_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE01_G2		0x2A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane01 G2
    #define PCIEPHYCFG_FRP01_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP01_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP01_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put swing control set
    #define PCIEPHYCFG_FRP01_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE01_G2		0x2A6	//TDCIS TXPSR TXNSR Lane01 G2
    #define PCIEPHYCFG_RSV2A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE01_G2		0x2A8	//RCV Lane01 G2
    #define PCIEPHYCFG_RSV2A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP01_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP01_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP01_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP01_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE01_G2		0x2AA	//CDR 0 Lane01 G2
    #define PCIEPHYCFG_RSV2AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP01_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP01_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP01_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP01_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE01_G2		0x2AC	//CDR 1 Lane01 G2
    #define PCIEPHYCFG_RSV2AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP01_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP01_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP01_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP01_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP01_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE01_G2		0x2AE	//Equalizer Adaptive 0 Lane01 G2
    #define PCIEPHYCFG_FRP01_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE01_G2		0x2B0	//Equalizer Adaptive 1 Lane01 G2
    #define PCIEPHYCFG_FRP01_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP01_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP01_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP01_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE01_G2		0x2B2	//Equalizer Adaptive 2 Lane01 G2
    #define PCIEPHYCFG_FRP01_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV2B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP01_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE01_G2		0x2B4	//Equalizer Adaptive 3 Lane01 G2
    #define PCIEPHYCFG_FRP01_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE01_G2		0x2B6	//Equalizer Adaptive 4 Lane01 G2
    #define PCIEPHYCFG_FRP01_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_01		0x2C0	//RCV CDR EQ Control 1 lane 01
    #define PCIEPHYCFG_RSV2C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP01_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP01_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH01_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver OUT_put CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z21		0x2C2	//Reserved
    #define PCIEPHYCFG_RSV2C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE01_G3		0x2C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane01 G3
    #define PCIEPHYCFG_FRP01_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP01_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP01_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP01_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE01_G3		0x2C6	//TDCIS TXPSR TXNSR Lane01 G3
    #define PCIEPHYCFG_RSV2C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE01_G3		0x2C8	//RCV Lane01 G3
    #define PCIEPHYCFG_RSV2C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP01_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP01_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP01_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP01_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE01_G3		0x2CA	//CDR 0 Lane01 G3
    #define PCIEPHYCFG_RSV2CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP01_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP01_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP01_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0  
    #define PCIEPHYCFG_FRP01_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE01_G3		0x2CC	//CDR 1 Lane01 G3
    #define PCIEPHYCFG_RSV2CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP01_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode  
    #define PCIEPHYCFG_FRP01_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode 
    #define PCIEPHYCFG_FRP01_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP01_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode 
    #define PCIEPHYCFG_FRP01_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE01_G3		0x2CE	//Equalizer Adaptive 0 Lane01 G3
    #define PCIEPHYCFG_FRP01_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE01_G3		0x2D0	//Equalizer Adaptive 1 Lane01 G3
    #define PCIEPHYCFG_FRP01_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after first Tuning Finished 
    #define PCIEPHYCFG_FRP01_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP01_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP01_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP01_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE01_G3		0x2D2	//Equalizer Adaptive 2 Lane01 G3
    #define PCIEPHYCFG_FRP01_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV2D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP01_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE01_G3		0x2D4	//Equalizer Adaptive 3 Lane01 G3
    #define PCIEPHYCFG_FRP01_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE01_G3		0x2D6	//Equalizer Adaptive 4 Lane01 G3
    #define PCIEPHYCFG_FRP01_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP01_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV2D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP01_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE01		0x2E0	//EPHY Status 0 Lane01
    #define PCIEPHYCFG_RSV2E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV2E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP01_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical idle Detection Flag 
    #define PCIEPHYCFG_EP01_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE01		0x2E2	//EPHY Status 1 Lane01
    #define PCIEPHYCFG_RSV2E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV2E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE01		0x2E4	//EPHY Status 2 Lane01
    #define PCIEPHYCFG_RSV2E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV2E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE01		0x2E6	//BER Counter Result Lane01
    #define PCIEPHYCFG_RSV2E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP01_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE01		0x2E8	//Ideal PI Phase for Data Sampling Lane01
    #define PCIEPHYCFG_RSV2E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP01_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE02		0x300	//RCV CDR EQ Control Lane02
    #define PCIEPHYCFG_RSV300_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP02_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3 
    #define PCIEPHYCFG_FHP02_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP02_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter buffer BW 
    #define PCIEPHYCFG_FHP02_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method 
    #define PCIEPHYCFG_FHP02_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP02_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP02_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP02_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP02_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE02		0x302	//Manual Set in Test Mode Lane02
    #define PCIEPHYCFG_FHP02_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP02_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP02_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP02_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP02_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power Down Enable in Test Mode
    #define PCIEPHYCFG_FRP02_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP02_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP02_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP02_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP02_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP02_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP02_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP02_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE02_G1		0x304	//TX_DUTY TXSW TDNCIS TDPCIS Lane02 G1
    #define PCIEPHYCFG_FRP02_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP02_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP02_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP02_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE02_G1		0x306	//TDCIS TXPSR TXNSR Lane02 G1
    #define PCIEPHYCFG_RSV303_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE02_G1		0x308	//RCV Lane02 G1
    #define PCIEPHYCFG_RSV304_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP02_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP02_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP02_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP02_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE02_G1		0x30A	//CDR 0 Lane02 G1
    #define PCIEPHYCFG_RSV305_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP02_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP02_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP02_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP02_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE02_G1		0x30C	//CDR 1 Lane02 G1
    #define PCIEPHYCFG_RSV306_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP02_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP02_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP02_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode 
    #define PCIEPHYCFG_FRP02_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP02_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP02_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode  
    #define PCIEPHYCFG_FRP02_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE02_G1		0x30E	//Equalizer Adaptive 0 Lane02 G1
    #define PCIEPHYCFG_FRP02_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE02_G1		0x310	//Equalizer Adaptive 1 Lane02 G1
    #define PCIEPHYCFG_FRP02_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP02_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP02_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP02_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE02_G1		0x312	//Equalizer Adaptive 2 Lane02 G1
    #define PCIEPHYCFG_FRP02_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV312_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV312_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP02_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE02_G1		0x314	//Equalizer Adaptive 3 Lane02 G1
    #define PCIEPHYCFG_FRP02_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV314_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV314_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE02_G1		0x316	//Equalizer Adaptive 4 Lane02 G1
    #define PCIEPHYCFG_FRP02_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV316_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV316_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE02		0x320	//EQTNBIST Lane02
    #define PCIEPHYCFG_RSV320_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP02_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE02		0x322	//Eye Monitor Lane02
    #define PCIEPHYCFG_RSV322_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP02_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP02_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP02_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP02_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP02_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP02_PH_OS			0x7F	//0/x/x/x Actual PI phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE02_G2		0x324	//TX_DUTY TXSW TDNCIS TDPCIS Lane02 G2
    #define PCIEPHYCFG_FRP02_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP02_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP02_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put swing Control Set
    #define PCIEPHYCFG_FRP02_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE02_G2		0x326	//TDCIS TXPSR TXNSR Lane02 G2
    #define PCIEPHYCFG_RSV326_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE02_G2		0x328	//RCV Lane02 G2
    #define PCIEPHYCFG_RSV329_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP02_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP02_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP02_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP02_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE02_G2		0x32A	//CDR 0 Lane02 G2
    #define PCIEPHYCFG_RSV32A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP02_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP02_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP02_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP02_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE02_G2		0x32C	//CDR 1 Lane02 G2
    #define PCIEPHYCFG_RSV32C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP02_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP02_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP02_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode 
    #define PCIEPHYCFG_FRP02_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP02_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP02_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP02_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE02_G2		0x32E	//Equalizer Adaptive 0 Lane02 G2
    #define PCIEPHYCFG_FRP02_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE02_G2		0x330	//Equalizer Adaptive 1 Lane02 G2
    #define PCIEPHYCFG_FRP02_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP02_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP02_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP02_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE02_G2		0x332	//Equalizer Adaptive 2 Lane02 G2
    #define PCIEPHYCFG_FRP02_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV332_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV332_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP02_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE02_G2		0x334	//Equalizer Adaptive 3 Lane02 G2
    #define PCIEPHYCFG_FRP02_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV334_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV334_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE02_G2		0x336	//Equalizer Adaptive 4 Lane02 G2
    #define PCIEPHYCFG_FRP02_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV336_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV336_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_02		0x340	//RCV CDR EQ Control 1 lane 02
    #define PCIEPHYCFG_RSV340_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP02_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP02_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH02_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver OUT_put CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z22		0x342	//Reserved
    #define PCIEPHYCFG_RSV342_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE02_G3		0x344	//TX_DUTY TXSW TDNCIS TDPCIS Lane02 G3
    #define PCIEPHYCFG_FRP02_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP02_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP02_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP02_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE02_G3		0x346	//TDCIS TXPSR TXNSR Lane02 G3
    #define PCIEPHYCFG_RSV346_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE02_G3		0x348	//RCV Lane02 G3
    #define PCIEPHYCFG_RSV348_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP02_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP02_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP02_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP02_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE02_G3		0x34A	//CDR 0 Lane02 G3
    #define PCIEPHYCFG_RSV34A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP02_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP02_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP02_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP02_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE02_G3		0x34C	//CDR 1 Lane02 G3
    #define PCIEPHYCFG_RSV34C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP02_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP02_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP02_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP02_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP02_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP02_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP02_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE02_G3		0x34E	//Equalizer Adaptive 0 Lane02 G3
    #define PCIEPHYCFG_FRP02_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE02_G3		0x350	//Equalizer Adaptive 1 Lane02 G3
    #define PCIEPHYCFG_FRP02_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP02_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP02_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP02_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP02_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE02_G3		0x352	//Equalizer Adaptive 2 Lane02 G3
    #define PCIEPHYCFG_FRP02_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV352_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV352_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP02_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE02_G3		0x354	//Equalizer Adaptive 3 Lane02 G3
    #define PCIEPHYCFG_FRP02_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV354_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV354_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE02_G3		0x356	//Equalizer Adaptive 4 Lane02 G3
    #define PCIEPHYCFG_FRP02_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV356_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP02_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV356_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP02_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE02		0x360	//EPHY Status 0 Lane02
    #define PCIEPHYCFG_RSV360_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV360_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP02_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP02_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE02		0x362	//EPHY Status 1 Lane02
    #define PCIEPHYCFG_RSV362_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV362_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE02		0x364	//EPHY Status 2 Lane02
    #define PCIEPHYCFG_RSV364_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV364_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE02		0x366	//BER Counter Result Lane02
    #define PCIEPHYCFG_RSV366_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP02_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE02		0x368	//Ideal PI Phase for Data Sampling Lane02
    #define PCIEPHYCFG_RSV368_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP02_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE03		0x380	//RCV CDR EQ Control Lane03
    #define PCIEPHYCFG_RSV380_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP03_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP03_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP03_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP03_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method  
    #define PCIEPHYCFG_FHP03_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1  
    #define PCIEPHYCFG_FHP03_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP03_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP03_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP03_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE03		0x382	//Manual Set in Test Mode Lane03
    #define PCIEPHYCFG_FHP03_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP03_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP03_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP03_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP03_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP03_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP03_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP03_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP03_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in test Mode
    #define PCIEPHYCFG_FRP03_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP03_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP03_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP03_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE03_G1		0x384	//TX_DUTY TXSW TDNCIS TDPCIS Lane03 G1
    #define PCIEPHYCFG_FRP03_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP03_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP03_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP03_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE03_G1		0x386	//TDCIS TXPSR TXNSR Lane03 G1
    #define PCIEPHYCFG_RSV387_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE03_G1		0x388	//RCV Lane03 G1
    #define PCIEPHYCFG_RSV389_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP03_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP03_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP03_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP03_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE03_G1		0x38A	//CDR 0 Lane03 G1
    #define PCIEPHYCFG_RSV38B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP03_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP03_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP03_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP03_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE03_G1		0x38C	//CDR 1 Lane03 G1
    #define PCIEPHYCFG_RSV38D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP03_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP03_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP03_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP03_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP03_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP03_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP03_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE03_G1		0x38E	//Equalizer Adaptive 0 Lane03 G1
    #define PCIEPHYCFG_FRP03_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE03_G1		0x390	//Equalizer Adaptive 1 Lane03 G1
    #define PCIEPHYCFG_FRP03_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after first Tuning Finished
    #define PCIEPHYCFG_FRP03_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP03_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP03_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE03_G1		0x392	//Equalizer Adaptive 2 Lane03 G1
    #define PCIEPHYCFG_FRP03_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV392_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV392_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP03_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE03_G1		0x394	//Equalizer Adaptive 3 Lane03 G1
    #define PCIEPHYCFG_FRP03_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV394_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV394_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE03_G1		0x396	//Equalizer Adaptive 4 Lane03 G1
    #define PCIEPHYCFG_FRP03_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV396_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV396_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE03		0x3A0	//EQTNBIST Lane03
    #define PCIEPHYCFG_RSV3A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP03_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE03		0x3A2	//Eye Monitor Lane03
    #define PCIEPHYCFG_RSV3A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP03_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP03_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP03_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP03_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP03_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP03_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE03_G2		0x3A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane03 G2
    #define PCIEPHYCFG_FRP03_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP03_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP03_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP03_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE03_G2		0x3A6	//TDCIS TXPSR TXNSR Lane03 G2
    #define PCIEPHYCFG_RSV3A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE03_G2		0x3A8	//RCV Lane03 G2
    #define PCIEPHYCFG_RSV3A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP03_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP03_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP03_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP03_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE03_G2		0x3AA	//CDR 0 Lane03 G2
    #define PCIEPHYCFG_RSV3AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP03_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP03_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP03_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP03_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE03_G2		0x3AC	//CDR 1 Lane03 G2
    #define PCIEPHYCFG_RSV3AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode 
    #define PCIEPHYCFG_FRP03_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP03_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP03_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP03_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode 
    #define PCIEPHYCFG_FRP03_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP03_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode 
    #define PCIEPHYCFG_FRP03_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE03_G2		0x3AE	//Equalizer Adaptive 0 Lane03 G2
    #define PCIEPHYCFG_FRP03_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE03_G2		0x3B0	//Equalizer Adaptive 1 Lane03 G2
    #define PCIEPHYCFG_FRP03_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP03_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP03_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP03_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE03_G2		0x3B2	//Equalizer Adaptive 2 Lane03 G2
    #define PCIEPHYCFG_FRP03_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP03_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE03_G2		0x3B4	//Equalizer Adaptive 3 Lane03 G2
    #define PCIEPHYCFG_FRP03_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE03_G2		0x3B6	//Equalizer Adaptive 4 Lane03 G2
    #define PCIEPHYCFG_FRP03_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_03		0x3C0	//RCV CDR EQ Control 1 lane 03
    #define PCIEPHYCFG_RSV3C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP03_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP03_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH03_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver OUT_put CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z23		0x3C2	//Reserved
    #define PCIEPHYCFG_RSV3C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE03_G3		0x3C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane03 G3
    #define PCIEPHYCFG_FRP03_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP03_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP03_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP03_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE03_G3		0x3C6	//TDCIS TXPSR TXNSR Lane03 G3
    #define PCIEPHYCFG_RSV3C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE03_G3		0x3C8	//RCV Lane03 G3
    #define PCIEPHYCFG_RSV3C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP03_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP03_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP03_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP03_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE03_G3		0x3CA	//CDR 0 Lane03 G3
    #define PCIEPHYCFG_RSV3CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP03_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP03_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP03_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP03_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE03_G3		0x3CC	//CDR 1 Lane03 G3
    #define PCIEPHYCFG_RSV3CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP03_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP03_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP03_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP03_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode 
    #define PCIEPHYCFG_FRP03_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP03_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP03_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE03_G3		0x3CE	//Equalizer Adaptive 0 Lane03 G3
    #define PCIEPHYCFG_FRP03_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE03_G3		0x3D0	//Equalizer Adaptive 1 Lane03 G3
    #define PCIEPHYCFG_FRP03_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after first Tuning Finished 
    #define PCIEPHYCFG_FRP03_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP03_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP03_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP03_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE03_G3		0x3D2	//Equalizer Adaptive 2 Lane03 G3
    #define PCIEPHYCFG_FRP03_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP03_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE03_G3		0x3D4	//Equalizer Adaptive 3 Lane03 G3
    #define PCIEPHYCFG_FRP03_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE03_G3		0x3D6	//Equalizer Adaptive 4 Lane03 G3
    #define PCIEPHYCFG_FRP03_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP03_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP03_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE03		0x3E0	//EPHY Status 0 Lane03
    #define PCIEPHYCFG_RSV3E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP03_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical idle Detection Flag
    #define PCIEPHYCFG_EP03_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE03		0x3E2	//EPHY Status 1 Lane03
    #define PCIEPHYCFG_RSV3E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE03		0x3E4	//EPHY Status 2 Lane03
    #define PCIEPHYCFG_RSV3E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE03		0x3E6	//BER Counter Result Lane03
    #define PCIEPHYCFG_RSV3E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP03_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE03		0x3E8	//Ideal PI Phase for Data Sampling Lane03
    #define PCIEPHYCFG_RSV3E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP03_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE04		0x400	//RCV CDR EQ Control Lane04
    #define PCIEPHYCFG_RSV400_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP04_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP04_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP04_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP04_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method 
    #define PCIEPHYCFG_FHP04_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP04_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP04_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP04_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP04_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE04		0x402	//Manual Set in Test Mode Lane04
    #define PCIEPHYCFG_FHP04_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP04_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP04_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP04_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP04_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP04_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP04_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP04_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP04_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP04_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP04_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP04_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP04_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE04_G1		0x404	//TX_DUTY TXSW TDNCIS TDPCIS Lane04 G1
    #define PCIEPHYCFG_FRP04_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP04_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP04_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP04_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE04_G1		0x406	//TDCIS TXPSR TXNSR Lane04 G1
    #define PCIEPHYCFG_RSV406_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE04_G1		0x408	//RCV Lane04 G1
    #define PCIEPHYCFG_RSV408_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP04_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP04_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP04_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP04_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE04_G1		0x40A	//CDR 0 Lane04 G1
    #define PCIEPHYCFG_RSV40A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP04_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP04_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP04_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP04_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE04_G1		0x40C	//CDR 1 Lane04 G1
    #define PCIEPHYCFG_RSV40C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP04_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP04_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP04_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP04_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP04_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP04_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode 
    #define PCIEPHYCFG_FRP04_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE04_G1		0x40E	//Equalizer Adaptive 0 Lane04 G1
    #define PCIEPHYCFG_FRP04_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE04_G1		0x410	//Equalizer Adaptive 1 Lane04 G1
    #define PCIEPHYCFG_FRP04_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP04_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP04_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection 
    #define PCIEPHYCFG_FRP04_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE04_G1		0x412	//Equalizer Adaptive 2 Lane04 G1
    #define PCIEPHYCFG_FRP04_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV412_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV412_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP04_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE04_G1		0x414	//Equalizer Adaptive 3 Lane04 G1
    #define PCIEPHYCFG_FRP04_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV414_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV414_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE04_G1		0x416	//Equalizer Adaptive 4 Lane04 G1
    #define PCIEPHYCFG_FRP04_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV416_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV416_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE04		0x420	//EQTNBIST Lane04
    #define PCIEPHYCFG_RSV420_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP04_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE04		0x422	//Eye Monitor Lane04
    #define PCIEPHYCFG_RSV422_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP04_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP04_TXMODE			BIT13	//0/x/x/x TX Operating Mode 
    #define PCIEPHYCFG_FRP04_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP04_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP04_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP04_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE04_G2		0x424	//TX_DUTY TXSW TDNCIS TDPCIS Lane04 G2
    #define PCIEPHYCFG_FRP04_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP04_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP04_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP04_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE04_G2		0x426	//TDCIS TXPSR TXNSR Lane04 G2
    #define PCIEPHYCFG_RSV426_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE04_G2		0x428	//RCV Lane04 G2
    #define PCIEPHYCFG_RSV428_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP04_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP04_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP04_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP04_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE04_G2		0x42A	//CDR 0 Lane04 G2
    #define PCIEPHYCFG_RSV42A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP04_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP04_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP04_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP04_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE04_G2		0x42C	//CDR 1 Lane04 G2
    #define PCIEPHYCFG_RSV42C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP04_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP04_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP04_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP04_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP04_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP04_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP04_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE04_G2		0x42E	//Equalizer Adaptive 0 Lane04 G2
    #define PCIEPHYCFG_FRP04_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE04_G2		0x430	//Equalizer Adaptive 1 Lane04 G2
    #define PCIEPHYCFG_FRP04_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP04_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP04_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP04_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE04_G2		0x432	//Equalizer Adaptive 2 Lane04 G2
    #define PCIEPHYCFG_FRP04_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV432_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV432_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP04_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE04_G2		0x434	//Equalizer Adaptive 3 Lane04 G2
    #define PCIEPHYCFG_FRP04_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV434_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV434_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE04_G2		0x436	//Equalizer Adaptive 4 Lane04 G2
    #define PCIEPHYCFG_FRP04_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV436_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV436_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_04		0x440	//RCV CDR EQ Control 1 lane 04
    #define PCIEPHYCFG_RSV440_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP04_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP04_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH04_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver OUT_put CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z24		0x442	//Reserved
    #define PCIEPHYCFG_RSV442_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE04_G3		0x444	//TX_DUTY TXSW TDNCIS TDPCIS Lane04 G3
    #define PCIEPHYCFG_FRP04_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP04_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP04_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP04_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE04_G3		0x446	//TDCIS TXPSR TXNSR Lane04 G3
    #define PCIEPHYCFG_RSV446_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE04_G3		0x448	//RCV Lane04 G3
    #define PCIEPHYCFG_RSV448_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP04_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP04_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP04_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP04_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE04_G3		0x44A	//CDR 0 Lane04 G3
    #define PCIEPHYCFG_RSV44A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP04_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP04_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP04_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP04_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE04_G3		0x44C	//CDR 1 Lane04 G3
    #define PCIEPHYCFG_RSV44C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP04_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF select during Training Mode
    #define PCIEPHYCFG_FRP04_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP04_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP04_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP04_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP04_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode  
    #define PCIEPHYCFG_FRP04_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE04_G3		0x44E	//Equalizer Adaptive 0 Lane04 G3
    #define PCIEPHYCFG_FRP04_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE04_G3		0x450	//Equalizer Adaptive 1 Lane04 G3
    #define PCIEPHYCFG_FRP04_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP04_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP04_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP04_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP04_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE04_G3		0x452	//Equalizer Adaptive 2 Lane04 G3
    #define PCIEPHYCFG_FRP04_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV452_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV452_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP04_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE04_G3		0x454	//Equalizer Adaptive 3 Lane04 G3
    #define PCIEPHYCFG_FRP04_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV454_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV454_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE04_G3		0x456	//Equalizer Adaptive 4 Lane04 G3
    #define PCIEPHYCFG_FRP04_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV456_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP04_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV456_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP04_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE04		0x460	//EPHY Status 0 Lane04
    #define PCIEPHYCFG_RSV460_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV460_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP04_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP04_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE04		0x462	//EPHY Status 1 Lane04
    #define PCIEPHYCFG_RSV462_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV462_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE04		0x464	//EPHY Status 2 Lane04
    #define PCIEPHYCFG_RSV464_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV464_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE04		0x466	//BER Counter Result Lane04
    #define PCIEPHYCFG_RSV466_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP04_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE04		0x468	//Ideal PI Phase for Data Sampling Lane04
    #define PCIEPHYCFG_RSV468_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP04_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE05		0x480	//RCV CDR EQ Control Lane05
    #define PCIEPHYCFG_RSV480_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP05_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP05_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select 
    #define PCIEPHYCFG_FHP05_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW 
    #define PCIEPHYCFG_FHP05_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method  
    #define PCIEPHYCFG_FHP05_VCOPDSEL			BIT8	//0/x/x/x VCO Power Off Method at P1 
    #define PCIEPHYCFG_FHP05_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP05_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP05_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch detection Mode Select 
    #define PCIEPHYCFG_FHP05_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select 
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE05		0x482	//Manual Set in Test Mode Lane05
    #define PCIEPHYCFG_FHP05_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP05_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP05_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP05_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP05_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP05_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP05_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP05_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP05_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP05_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP05_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP05_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP05_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE05_G1		0x484	//TX_DUTY TXSW TDNCIS TDPCIS Lane05 G1
    #define PCIEPHYCFG_FRP05_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP05_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP05_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP05_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE05_G1		0x486	//TDCIS TXPSR TXNSR Lane05 G1
    #define PCIEPHYCFG_RSV487_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE05_G1		0x488	//RCV Lane05 G1
    #define PCIEPHYCFG_RSV489_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP05_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP05_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP05_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP05_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE05_G1		0x48A	//CDR 0 Lane05 G1
    #define PCIEPHYCFG_RSV48B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP05_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP05_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP05_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP05_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select  
#define PCIEPHYCFG_CDR_1_LANE05_G1		0x48C	//CDR 1 Lane05 G1
    #define PCIEPHYCFG_RSV48D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP05_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP05_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP05_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP05_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode  
    #define PCIEPHYCFG_FRP05_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP05_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP05_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE05_G1		0x48E	//Equalizer Adaptive 0 Lane05 G1
    #define PCIEPHYCFG_FRP05_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE05_G1		0x490	//Equalizer Adaptive 1 Lane05 G1
    #define PCIEPHYCFG_FRP05_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP05_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer always Tuning Mode Enable
    #define PCIEPHYCFG_FRP05_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP05_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE05_G1		0x492	//Equalizer Adaptive 2 Lane05 G1
    #define PCIEPHYCFG_FRP05_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV492_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV492_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP05_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE05_G1		0x494	//Equalizer Adaptive 3 Lane05 G1
    #define PCIEPHYCFG_FRP05_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV494_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV494_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE05_G1		0x496	//Equalizer Adaptive 4 Lane05 G1
    #define PCIEPHYCFG_FRP05_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV496_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV496_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE05		0x4A0	//EQTNBIST Lane05
    #define PCIEPHYCFG_RSV4A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP05_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE05		0x4A2	//Eye Monitor Lane05
    #define PCIEPHYCFG_RSV4A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP05_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP05_TXMODE			BIT13	//0/x/x/x TX Operating Mode 
    #define PCIEPHYCFG_FRP05_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP05_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP05_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP05_PH_OS			0x7F	//0/x/x/x Actual PI phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE05_G2		0x4A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane05 G2
    #define PCIEPHYCFG_FRP05_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP05_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP05_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP05_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE05_G2		0x4A6	//TDCIS TXPSR TXNSR Lane05 G2
    #define PCIEPHYCFG_RSV4A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE05_G2		0x4A8	//RCV Lane05 G2
    #define PCIEPHYCFG_RSV4A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP05_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP05_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP05_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP05_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE05_G2		0x4AA	//CDR 0 Lane05 G2
    #define PCIEPHYCFG_RSV4AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP05_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP05_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP05_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP05_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE05_G2		0x4AC	//CDR 1 Lane05 G2
    #define PCIEPHYCFG_RSV4AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP05_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP05_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP05_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP05_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode 
    #define PCIEPHYCFG_FRP05_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP05_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP05_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE05_G2		0x4AE	//Equalizer Adaptive 0 Lane05 G2
    #define PCIEPHYCFG_FRP05_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE05_G2		0x4B0	//Equalizer Adaptive 1 Lane05 G2
    #define PCIEPHYCFG_FRP05_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable low Speed Mode after first Tuning Finished
    #define PCIEPHYCFG_FRP05_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP05_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection  
    #define PCIEPHYCFG_FRP05_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE05_G2		0x4B2	//Equalizer Adaptive 2 Lane05 G2
    #define PCIEPHYCFG_FRP05_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV4B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP05_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE05_G2		0x4B4	//Equalizer Adaptive 3 Lane05 G2
    #define PCIEPHYCFG_FRP05_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE05_G2		0x4B6	//Equalizer Adaptive 4 Lane05 G2
    #define PCIEPHYCFG_FRP05_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_05		0x4C0	//RCV CDR EQ Control 1 lane 05
    #define PCIEPHYCFG_RSV4C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP05_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP05_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH05_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX driver OUT_put CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z25		0x4C2	//Reserved
    #define PCIEPHYCFG_RSV4C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE05_G3		0x4C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane05 G3
    #define PCIEPHYCFG_FRP05_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP05_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP05_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx OUT_put Swing Control Set
    #define PCIEPHYCFG_FRP05_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE05_G3		0x4C6	//TDCIS TXPSR TXNSR Lane05 G3
    #define PCIEPHYCFG_RSV4C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE05_G3		0x4C8	//RCV Lane05 G3
    #define PCIEPHYCFG_RSV4C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP05_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP05_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP05_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP05_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE05_G3		0x4CA	//CDR 0 Lane05 G3
    #define PCIEPHYCFG_RSV4CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP05_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP05_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP05_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP05_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE05_G3		0x4CC	//CDR 1 Lane05 G3
    #define PCIEPHYCFG_RSV4CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode  
    #define PCIEPHYCFG_FRP05_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP05_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP05_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP05_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP05_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP05_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode 
    #define PCIEPHYCFG_FRP05_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE05_G3		0x4CE	//Equalizer Adaptive 0 Lane05 G3
    #define PCIEPHYCFG_FRP05_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE05_G3		0x4D0	//Equalizer Adaptive 1 Lane05 G3
    #define PCIEPHYCFG_FRP05_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP05_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP05_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP05_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP05_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE05_G3		0x4D2	//Equalizer Adaptive 2 Lane05 G3
    #define PCIEPHYCFG_FRP05_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV4D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP05_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE05_G3		0x4D4	//Equalizer Adaptive 3 Lane05 G3
    #define PCIEPHYCFG_FRP05_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE05_G3		0x4D6	//Equalizer Adaptive 4 Lane05 G3
    #define PCIEPHYCFG_FRP05_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP05_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV4D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP05_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE05		0x4E0	//EPHY Status 0 Lane05
    #define PCIEPHYCFG_RSV4E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV4E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP05_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP05_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE05		0x4E2	//EPHY Status 1 Lane05
    #define PCIEPHYCFG_RSV4E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV4E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE05		0x4E4	//EPHY Status 2 Lane05
    #define PCIEPHYCFG_RSV4E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV4E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE05		0x4E6	//BER Counter Result Lane05
    #define PCIEPHYCFG_RSV4E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP05_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE05		0x4E8	//Ideal PI Phase for Data Sampling Lane05
    #define PCIEPHYCFG_RSV4E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP05_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE06		0x500	//RCV CDR EQ Control Lane06
    #define PCIEPHYCFG_RSV500_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP06_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3 
    #define PCIEPHYCFG_FHP06_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP06_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP06_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method 
    #define PCIEPHYCFG_FHP06_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP06_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP06_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP06_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select 
    #define PCIEPHYCFG_FHP06_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE06		0x502	//Manual Set in Test Mode Lane06
    #define PCIEPHYCFG_FHP06_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP06_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP06_RXHZ			BIT13	//0/x/x/x Rx high Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP06_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP06_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP06_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP06_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP06_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP06_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP06_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP06_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP06_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP06_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE06_G1		0x504	//TX_DUTY TXSW TDNCIS TDPCIS Lane06 G1
    #define PCIEPHYCFG_FRP06_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP06_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP06_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP06_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE06_G1		0x506	//TDCIS TXPSR TXNSR Lane06 G1
    #define PCIEPHYCFG_RSV503_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE06_G1		0x508	//RCV Lane06 G1
    #define PCIEPHYCFG_RSV504_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP06_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP06_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP06_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP06_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and de-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE06_G1		0x50A	//CDR 0 Lane06 G1
    #define PCIEPHYCFG_RSV505_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP06_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP06_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP06_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP06_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE06_G1		0x50C	//CDR 1 Lane06 G1
    #define PCIEPHYCFG_RSV506_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP06_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP06_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP06_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP06_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP06_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE06_G1		0x50E	//Equalizer Adaptive 0 Lane06 G1
    #define PCIEPHYCFG_FRP06_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE06_G1		0x510	//Equalizer Adaptive 1 Lane06 G1
    #define PCIEPHYCFG_FRP06_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP06_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP06_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection 
    #define PCIEPHYCFG_FRP06_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE06_G1		0x512	//Equalizer Adaptive 2 Lane06 G1
    #define PCIEPHYCFG_FRP06_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV512_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV512_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP06_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE06_G1		0x514	//Equalizer Adaptive 3 Lane06 G1
    #define PCIEPHYCFG_FRP06_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV514_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV514_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE06_G1		0x516	//Equalizer Adaptive 4 Lane06 G1
    #define PCIEPHYCFG_FRP06_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV516_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV516_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE06		0x520	//EQTNBIST Lane06
    #define PCIEPHYCFG_RSV520_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP06_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE06		0x522	//Eye Monitor lane06
    #define PCIEPHYCFG_RSV522_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP06_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE bypass Current Control
    #define PCIEPHYCFG_LP06_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP06_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP06_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP06_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP06_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE06_G2		0x524	//TX_DUTY TXSW TDNCIS TDPCIS Lane06 G2
    #define PCIEPHYCFG_FRP06_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP06_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP06_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP06_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE06_G2		0x526	//TDCIS TXPSR TXNSR Lane06 G2
    #define PCIEPHYCFG_RSV526_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE06_G2		0x528	//RCV Lane06 G2
    #define PCIEPHYCFG_RSV529_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP06_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP06_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP06_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP06_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE06_G2		0x52A	//CDR 0 Lane06 G2
    #define PCIEPHYCFG_RSV52A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP06_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP06_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP06_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP06_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE06_G2		0x52C	//CDR 1 Lane06 G2
    #define PCIEPHYCFG_RSV52C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode 
    #define PCIEPHYCFG_FRP06_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP06_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP06_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP06_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP06_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE06_G2		0x52E	//Equalizer Adaptive 0 Lane06 G2
    #define PCIEPHYCFG_FRP06_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE06_G2		0x530	//Equalizer Adaptive 1 Lane06 G2
    #define PCIEPHYCFG_FRP06_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP06_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP06_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection 
    #define PCIEPHYCFG_FRP06_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE06_G2		0x532	//Equalizer Adaptive 2 Lane06 G2
    #define PCIEPHYCFG_FRP06_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV532_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV532_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP06_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE06_G2		0x534	//Equalizer Adaptive 3 Lane06 G2
    #define PCIEPHYCFG_FRP06_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV534_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV534_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE06_G2		0x536	//Equalizer Adaptive 4 Lane06 G2
    #define PCIEPHYCFG_FRP06_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV536_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV536_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_06		0x540	//RCV CDR EQ Control 1 lane 06
    #define PCIEPHYCFG_RSV540_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP06_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI clock Buffer Selection
    #define PCIEPHYCFG_FHP06_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop bandwidth Mode Selection
    #define PCIEPHYCFG_FH06_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z26		0x542	//Reserved
    #define PCIEPHYCFG_RSV542_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE06_G3		0x544	//TX_DUTY TXSW TDNCIS TDPCIS Lane06 G3
    #define PCIEPHYCFG_FRP06_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP06_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP06_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP06_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE06_G3		0x546	//TDCIS TXPSR TXNSR Lane06 G3
    #define PCIEPHYCFG_RSV546_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE06_G3		0x548	//RCV Lane06 G3
    #define PCIEPHYCFG_RSV548_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP06_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP06_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP06_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP06_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE06_G3		0x54A	//CDR 0 Lane06 G3
    #define PCIEPHYCFG_RSV54A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP06_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP06_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP06_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP06_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE06_G3		0x54C	//CDR 1 Lane06 G3
    #define PCIEPHYCFG_RSV54C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP06_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP06_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode 
    #define PCIEPHYCFG_FRP06_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP06_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP06_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP06_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE06_G3		0x54E	//Equalizer Adaptive 0 Lane06 G3
    #define PCIEPHYCFG_FRP06_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE06_G3		0x550	//Equalizer Adaptive 1 Lane06 G3
    #define PCIEPHYCFG_FRP06_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP06_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP06_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP06_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP06_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE06_G3		0x552	//Equalizer Adaptive 2 Lane06 G3
    #define PCIEPHYCFG_FRP06_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV552_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV552_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP06_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE06_G3		0x554	//Equalizer Adaptive 3 Lane06 G3
    #define PCIEPHYCFG_FRP06_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV554_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV554_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE06_G3		0x556	//Equalizer Adaptive 4 Lane06 G3
    #define PCIEPHYCFG_FRP06_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV556_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP06_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV556_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP06_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE06		0x560	//EPHY Status 0 Lane06
    #define PCIEPHYCFG_RSV560_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV560_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP06_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP06_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE06		0x562	//EPHY Status 1 Lane06
    #define PCIEPHYCFG_RSV562_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV562_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE06		0x564	//EPHY Status 2 Lane06
    #define PCIEPHYCFG_RSV564_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV564_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE06		0x566	//BER counter Result Lane06
    #define PCIEPHYCFG_RSV566_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP06_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE06		0x568	//Ideal PI Phase for Data Sampling Lane06
    #define PCIEPHYCFG_RSV568_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP06_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE07		0x580	//RCV CDR EQ Control Lane07
    #define PCIEPHYCFG_RSV580_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP07_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3 
    #define PCIEPHYCFG_FHP07_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP07_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP07_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP07_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP07_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP07_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP07_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP07_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select  
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE07		0x582	//Manual Set in Test Mode Lane07
    #define PCIEPHYCFG_FHP07_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP07_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP07_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP07_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP07_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP07_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP07_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP07_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP07_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP07_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP07_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP07_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP07_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE07_G1		0x584	//TX_DUTY TXSW TDNCIS TDPCIS Lane07 G1
    #define PCIEPHYCFG_FRP07_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP07_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP07_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP07_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE07_G1		0x586	//TDCIS TXPSR TXNSR Lane07 G1
    #define PCIEPHYCFG_RSV587_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE07_G1		0x588	//RCV Lane07 G1
    #define PCIEPHYCFG_RSV589_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP07_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP07_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP07_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option For VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP07_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing And De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE07_G1		0x58A	//CDR 0 Lane07 G1
    #define PCIEPHYCFG_RSV58B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency 
    #define PCIEPHYCFG_FRP07_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP07_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP07_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0 
    #define PCIEPHYCFG_FRP07_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE07_G1		0x58C	//CDR 1 Lane07 G1
    #define PCIEPHYCFG_RSV58D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP07_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode 
    #define PCIEPHYCFG_FRP07_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode  
    #define PCIEPHYCFG_FRP07_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP07_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP07_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode  
    #define PCIEPHYCFG_FRP07_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP07_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE07_G1		0x58E	//Equalizer Adaptive 0 Lane07 G1
    #define PCIEPHYCFG_FRP07_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE07_G1		0x590	//Equalizer Adaptive 1 Lane07 G1
    #define PCIEPHYCFG_FRP07_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP07_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP07_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP07_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE07_G1		0x592	//Equalizer Adaptive 2 Lane07 G1
    #define PCIEPHYCFG_FRP07_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV592_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV592_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP07_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE07_G1		0x594	//Equalizer Adaptive 3 Lane07 G1
    #define PCIEPHYCFG_FRP07_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV594_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV594_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE07_G1		0x596	//Equalizer Adaptive 4 Lane07 G1
    #define PCIEPHYCFG_FRP07_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV596_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV596_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE07		0x5A0	//EQTNBIST Lane07
    #define PCIEPHYCFG_RSV5A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP07_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE07		0x5A2	//Eye Monitor Lane07
    #define PCIEPHYCFG_RSV5A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP07_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP07_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP07_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP07_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP07_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP07_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE07_G2		0x5A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane07 G2
    #define PCIEPHYCFG_FRP07_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP07_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP07_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP07_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE07_G2		0x5A6	//TDCIS TXPSR TXNSR Lane07 G2
    #define PCIEPHYCFG_RSV5A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE07_G2		0x5A8	//RCV Lane07 G2
    #define PCIEPHYCFG_RSV5A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP07_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP07_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP07_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP07_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE07_G2		0x5AA	//CDR 0 Lane07 G2
    #define PCIEPHYCFG_RSV5AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP07_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency 
    #define PCIEPHYCFG_FRP07_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP07_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP07_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE07_G2		0x5AC	//CDR 1 Lane07 G2
    #define PCIEPHYCFG_RSV5AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP07_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP07_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP07_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP07_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode  
    #define PCIEPHYCFG_FRP07_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP07_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode  
    #define PCIEPHYCFG_FRP07_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE07_G2		0x5AE	//Equalizer Adaptive 0 Lane07 G2
    #define PCIEPHYCFG_FRP07_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE07_G2		0x5B0	//Equalizer Adaptive 1 Lane07 G2
    #define PCIEPHYCFG_FRP07_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP07_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP07_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE tap Selection
    #define PCIEPHYCFG_FRP07_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE07_G2		0x5B2	//Equalizer Adaptive 2 Lane07 G2
    #define PCIEPHYCFG_FRP07_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV5B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP07_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE07_G2		0x5B4	//Equalizer Adaptive 3 Lane07 G2
    #define PCIEPHYCFG_FRP07_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE07_G2		0x5B6	//Equalizer Adaptive 4 Lane07 G2
    #define PCIEPHYCFG_FRP07_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_07		0x5C0	//RCV CDR EQ Control 1 lane 07
    #define PCIEPHYCFG_RSV5C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP07_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP07_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH07_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z27		0x5C2	//Reserved
    #define PCIEPHYCFG_RSV5C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE07_G3		0x5C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane07 G3
    #define PCIEPHYCFG_FRP07_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP07_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP07_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP07_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE07_G3		0x5C6	//TDCIS TXPSR TXNSR Lane07 G3
    #define PCIEPHYCFG_RSV5C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE07_G3		0x5C8	//RCV Lane07 G3
    #define PCIEPHYCFG_RSV5C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP07_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP07_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP07_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP07_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE07_G3		0x5CA	//CDR 0 Lane07 G3
    #define PCIEPHYCFG_RSV5CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP07_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP07_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP07_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP07_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE07_G3		0x5CC	//CDR 1 Lane07 G3
    #define PCIEPHYCFG_RSV5CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP07_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP07_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP07_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode 
    #define PCIEPHYCFG_FRP07_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP07_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP07_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during tracking Mode
    #define PCIEPHYCFG_FRP07_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE07_G3		0x5CE	//Equalizer Adaptive 0 Lane07 G3
    #define PCIEPHYCFG_FRP07_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE07_G3		0x5D0	//Equalizer Adaptive 1 Lane07 G3
    #define PCIEPHYCFG_FRP07_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP07_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP07_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP07_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP07_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE07_G3		0x5D2	//Equalizer Adaptive 2 Lane07 G3
    #define PCIEPHYCFG_FRP07_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV5D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP07_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE07_G3		0x5D4	//Equalizer Adaptive 3 Lane07 G3
    #define PCIEPHYCFG_FRP07_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE07_G3		0x5D6	//Equalizer Adaptive 4 Lane07 G3
    #define PCIEPHYCFG_FRP07_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP07_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV5D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP07_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE07		0x5E0	//EPHY Status 0 Lane07
    #define PCIEPHYCFG_RSV5E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV5E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP07_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP07_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE07		0x5E2	//EPHY Status 1 Lane07
    #define PCIEPHYCFG_RSV5E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV5E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE07		0x5E4	//EPHY Status 2 Lane07
    #define PCIEPHYCFG_RSV5E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV5E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE07		0x5E6	//BER Counter Result Lane07
    #define PCIEPHYCFG_RSV5E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP07_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE07		0x5E8	//Ideal PI Phase for Data Sampling Lane07
    #define PCIEPHYCFG_RSV5E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP07_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE08		0x600	//RCV CDR EQ Control Lane08
    #define PCIEPHYCFG_RSV600_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP08_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP08_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP08_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP08_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP08_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1  
    #define PCIEPHYCFG_FHP08_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP08_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP08_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP08_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE08		0x602	//Manual Set in Test Mode Lane08
    #define PCIEPHYCFG_FHP08_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP08_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power Down in Test Mode
    #define PCIEPHYCFG_FHP08_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP08_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP08_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP08_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP08_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP08_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP08_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP08_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP08_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP08_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP08_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE08_G1		0x604	//TX_DUTY TXSW TDNCIS TDPCIS Lane08 G1
    #define PCIEPHYCFG_FRP08_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP08_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP08_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP08_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE08_G1		0x606	//TDCIS TXPSR TXNSR Lane08 G1
    #define PCIEPHYCFG_RSV606_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE08_G1		0x608	//RCV Lane08 G1
    #define PCIEPHYCFG_RSV608_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP08_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP08_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP08_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP08_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE08_G1		0x60A	//CDR 0 Lane08 G1
    #define PCIEPHYCFG_RSV60A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP08_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP08_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP08_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP08_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE08_G1		0x60C	//CDR 1 Lane08 G1
    #define PCIEPHYCFG_RSV60C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP08_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP08_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP08_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP08_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP08_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode 
    #define PCIEPHYCFG_FRP08_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP08_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE08_G1		0x60E	//Equalizer Adaptive 0 Lane08 G1
    #define PCIEPHYCFG_FRP08_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE08_G1		0x610	//Equalizer Adaptive 1 Lane08 G1
    #define PCIEPHYCFG_FRP08_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP08_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP08_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP08_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE08_G1		0x612	//Equalizer Adaptive 2 Lane08 G1
    #define PCIEPHYCFG_FRP08_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV612_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV612_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP08_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE08_G1		0x614	//Equalizer Adaptive 3 Lane08 G1
    #define PCIEPHYCFG_FRP08_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV614_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV614_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE08_G1		0x616	//Equalizer Adaptive 4 Lane08 G1
    #define PCIEPHYCFG_FRP08_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV616_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV616_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE08		0x620	//EQTNBIST Lane08
    #define PCIEPHYCFG_RSV620_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP08_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE08		0x622	//Eye Monitor Lane08
    #define PCIEPHYCFG_RSV622_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP08_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP08_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP08_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP08_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP08_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP08_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE08_G2		0x624	//TX_DUTY TXSW TDNCIS TDPCIS Lane08 G2
    #define PCIEPHYCFG_FRP08_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP08_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP08_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP08_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE08_G2		0x626	//TDCIS TXPSR TXNSR Lane08 G2
    #define PCIEPHYCFG_RSV626_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE08_G2		0x628	//RCV Lane08 G2
    #define PCIEPHYCFG_RSV628_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP08_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP08_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP08_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP08_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE08_G2		0x62A	//CDR 0 Lane08 G2
    #define PCIEPHYCFG_RSV62A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP08_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP08_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP08_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP08_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE08_G2		0x62C	//CDR 1 Lane08 G2
    #define PCIEPHYCFG_RSV62C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP08_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode  
    #define PCIEPHYCFG_FRP08_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP08_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP08_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP08_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP08_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP08_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE08_G2		0x62E	//Equalizer Adaptive 0 Lane08 G2
    #define PCIEPHYCFG_FRP08_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE08_G2		0x630	//Equalizer Adaptive 1 Lane08 G2
    #define PCIEPHYCFG_FRP08_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP08_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP08_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP08_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE08_G2		0x632	//Equalizer Adaptive 2 Lane08 G2
    #define PCIEPHYCFG_FRP08_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV632_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV632_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP08_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE08_G2		0x634	//Equalizer Adaptive 3 Lane08 G2
    #define PCIEPHYCFG_FRP08_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV634_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV634_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE08_G2		0x636	//Equalizer Adaptive 4 Lane08 G2
    #define PCIEPHYCFG_FRP08_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV636_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV636_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_08		0x640	//RCV CDR EQ Control 1 lane 08
    #define PCIEPHYCFG_RSV640_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP08_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP08_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH08_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z28		0x642	//Reserved
    #define PCIEPHYCFG_RSV642_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE08_G3		0x644	//TX_DUTY TXSW TDNCIS TDPCIS Lane08 G3
    #define PCIEPHYCFG_FRP08_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP08_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP08_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP08_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE08_G3		0x646	//TDCIS TXPSR TXNSR Lane08 G3
    #define PCIEPHYCFG_RSV646_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE08_G3		0x648	//RCV Lane08 G3
    #define PCIEPHYCFG_RSV648_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP08_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP08_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP08_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP08_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE08_G3		0x64A	//CDR 0 Lane08 G3
    #define PCIEPHYCFG_RSV64A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP08_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP08_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP08_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP08_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE08_G3		0x64C	//CDR 1 Lane08 G3
    #define PCIEPHYCFG_RSV64C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP08_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP08_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP08_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP08_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP08_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP08_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode 
    #define PCIEPHYCFG_FRP08_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE08_G3		0x64E	//Equalizer Adaptive 0 Lane08 G3
    #define PCIEPHYCFG_FRP08_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE08_G3		0x650	//Equalizer Adaptive 1 Lane08 G3
    #define PCIEPHYCFG_FRP08_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP08_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP08_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP08_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP08_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE08_G3		0x652	//Equalizer Adaptive 2 Lane08 G3
    #define PCIEPHYCFG_FRP08_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV652_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV652_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP08_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE08_G3		0x654	//Equalizer Adaptive 3 Lane08 G3
    #define PCIEPHYCFG_FRP08_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV654_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV654_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE08_G3		0x656	//Equalizer Adaptive 4 Lane08 G3
    #define PCIEPHYCFG_FRP08_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 gain manual set enable
    #define PCIEPHYCFG_RSV656_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP08_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV656_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP08_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE08		0x660	//EPHY Status 0 Lane08
    #define PCIEPHYCFG_RSV660_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV660_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP08_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical idle Detection Flag  
    #define PCIEPHYCFG_EP08_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE08		0x662	//EPHY Status 1 Lane08
    #define PCIEPHYCFG_RSV662_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV662_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE08		0x664	//EPHY Status 2 Lane08
    #define PCIEPHYCFG_RSV664_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV664_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE08		0x666	//BER Counter Result Lane08
    #define PCIEPHYCFG_RSV666_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP08_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE08		0x668	//Ideal PI Phase for Data Sampling Lane08
    #define PCIEPHYCFG_RSV668_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP08_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE09		0x680	//RCV CDR EQ Control Lane09
    #define PCIEPHYCFG_RSV680_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP09_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP09_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP09_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter buffer BW
    #define PCIEPHYCFG_FHP09_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP09_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP09_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP09_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP09_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select 
    #define PCIEPHYCFG_FHP09_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE09		0x682	//Manual Set in Test Mode Lane09
    #define PCIEPHYCFG_FHP09_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP09_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP09_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP09_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP09_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP09_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP09_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP09_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP09_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP09_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP09_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP09_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP09_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE09_G1		0x684	//TX_DUTY TXSW TDNCIS TDPCIS Lane09 G1
    #define PCIEPHYCFG_FRP09_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP09_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP09_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP09_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE09_G1		0x686	//TDCIS TXPSR TXNSR Lane09 G1
    #define PCIEPHYCFG_RSV687_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE09_G1		0x688	//RCV Lane09 G1
    #define PCIEPHYCFG_RSV689_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP09_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP09_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP09_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP09_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE09_G1		0x68A	//CDR 0 Lane09 G1
    #define PCIEPHYCFG_RSV68B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP09_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP09_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP09_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP09_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE09_G1		0x68C	//CDR 1 Lane09 G1
    #define PCIEPHYCFG_RSV68D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP09_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP09_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP09_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP09_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP09_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE09_G1		0x68E	//Equalizer Adaptive 0 Lane09 G1
    #define PCIEPHYCFG_FRP09_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE09_G1		0x690	//Equalizer Adaptive 1 Lane09 G1
    #define PCIEPHYCFG_FRP09_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP09_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP09_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP09_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE09_G1		0x692	//Equalizer Adaptive 2 Lane09 G1
    #define PCIEPHYCFG_FRP09_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV692_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV692_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP09_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE09_G1		0x694	//Equalizer Adaptive 3 Lane09 G1
    #define PCIEPHYCFG_FRP09_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV694_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV694_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE09_G1		0x696	//Equalizer Adaptive 4 Lane09 G1
    #define PCIEPHYCFG_FRP09_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV696_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 gain manual set enable
    #define PCIEPHYCFG_RSV696_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE09		0x6A0	//EQTNBIST Lane09
    #define PCIEPHYCFG_RSV6A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP09_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE09		0x6A2	//Eye Monitor Lane09
    #define PCIEPHYCFG_RSV6A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP09_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP09_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP09_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP09_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP09_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP09_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE09_G2		0x6A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane09 G2
    #define PCIEPHYCFG_FRP09_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP09_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP09_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP09_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE09_G2		0x6A6	//TDCIS TXPSR TXNSR Lane09 G2
    #define PCIEPHYCFG_RSV6A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE09_G2		0x6A8	//RCV Lane09 G2
    #define PCIEPHYCFG_RSV6A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP09_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP09_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP09_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP09_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE09_G2		0x6AA	//CDR 0 Lane09 G2
    #define PCIEPHYCFG_RSV6AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP09_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP09_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP09_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP09_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE09_G2		0x6AC	//CDR 1 Lane09 G2
    #define PCIEPHYCFG_RSV6AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP09_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP09_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP09_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP09_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP09_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE09_G2		0x6AE	//Equalizer Adaptive 0 Lane09 G2
    #define PCIEPHYCFG_FRP09_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE09_G2		0x6B0	//Equalizer Adaptive 1 Lane09 G2
    #define PCIEPHYCFG_FRP09_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP09_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP09_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP09_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE09_G2		0x6B2	//Equalizer Adaptive 2 Lane09 G2
    #define PCIEPHYCFG_FRP09_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV6B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP09_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE09_G2		0x6B4	//Equalizer Adaptive 3 Lane09 G2
    #define PCIEPHYCFG_FRP09_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE09_G2		0x6B6	//Equalizer Adaptive 4 Lane09 G2
    #define PCIEPHYCFG_FRP09_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_09		0x6C0	//RCV CDR EQ Control 1 Lane 09
    #define PCIEPHYCFG_RSV6C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP09_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP09_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH09_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z29		0x6C2	//Reserved
    #define PCIEPHYCFG_RSV6C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE09_G3		0x6C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane09 G3
    #define PCIEPHYCFG_FRP09_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP09_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP09_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP09_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE09_G3		0x6C6	//TDCIS TXPSR TXNSR Lane09 G3
    #define PCIEPHYCFG_RSV6C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE09_G3		0x6C8	//RCV Lane09 G3
    #define PCIEPHYCFG_RSV6C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP09_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP09_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP09_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP09_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE09_G3		0x6CA	//CDR 0 Lane09 G3
    #define PCIEPHYCFG_RSV6CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP09_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP09_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP09_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP09_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE09_G3		0x6CC	//CDR 1 Lane09 G3
    #define PCIEPHYCFG_RSV6CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP09_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP09_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP09_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP09_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP09_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP09_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE09_G3		0x6CE	//Equalizer Adaptive 0 Lane09 G3
    #define PCIEPHYCFG_FRP09_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE09_G3		0x6D0	//Equalizer Adaptive 1 Lane09 G3
    #define PCIEPHYCFG_FRP09_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP09_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP09_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP09_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP09_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE09_G3		0x6D2	//Equalizer Adaptive 2 Lane09 G3
    #define PCIEPHYCFG_FRP09_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV6D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP09_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE09_G3		0x6D4	//Equalizer Adaptive 3 Lane09 G3
    #define PCIEPHYCFG_FRP09_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE09_G3		0x6D6	//Equalizer Adaptive 4 Lane09 G3
    #define PCIEPHYCFG_FRP09_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP09_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV6D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP09_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE09		0x6E0	//EPHY Status 0 Lane09
    #define PCIEPHYCFG_RSV6E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV6E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP09_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP09_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE09		0x6E2	//EPHY Status 1 Lane09
    #define PCIEPHYCFG_RSV6E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV6E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE09		0x6E4	//EPHY Status 2 Lane09
    #define PCIEPHYCFG_RSV6E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV6E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE09		0x6E6	//BER Counter Result Lane09
    #define PCIEPHYCFG_RSV6E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP09_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE09		0x6E8	//Ideal PI Phase for Data Sampling Lane09
    #define PCIEPHYCFG_RSV6E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP09_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE10		0x700	//RCV CDR EQ Control Lane10
    #define PCIEPHYCFG_RSV700_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP10_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP10_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP10_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP10_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP10_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP10_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP10_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP10_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP10_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE10		0x702	//Manual Set in Test Mode Lane10
    #define PCIEPHYCFG_FHP10_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP10_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP10_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP10_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP10_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP10_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP10_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP10_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP10_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP10_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP10_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP10_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP10_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE10_G1		0x704	//TX_DUTY TXSW TDNCIS TDPCIS Lane10 G1
    #define PCIEPHYCFG_FRP10_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP10_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis set
    #define PCIEPHYCFG_FRP10_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP10_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE10_G1		0x706	//TDCIS TXPSR TXNSR Lane10 G1
    #define PCIEPHYCFG_RSV703_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE10_G1		0x708	//RCV Lane10 G1
    #define PCIEPHYCFG_RSV704_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP10_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP10_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP10_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP10_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE10_G1		0x70A	//CDR 0 Lane10 G1
    #define PCIEPHYCFG_RSV705_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP10_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP10_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP10_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP10_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE10_G1		0x70C	//CDR 1 Lane10 G1
    #define PCIEPHYCFG_RSV706_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP10_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP10_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP10_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP10_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP10_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE10_G1		0x70E	//Equalizer Adaptive 0 Lane10 G1
    #define PCIEPHYCFG_FRP10_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE10_G1		0x710	//Equalizer Adaptive 1 Lane10 G1
    #define PCIEPHYCFG_FRP10_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP10_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP10_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP10_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE10_G1		0x712	//Equalizer Adaptive 2 Lane10 G1
    #define PCIEPHYCFG_FRP10_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV712_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV712_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP10_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE10_G1		0x714	//Equalizer Adaptive 3 Lane10 G1
    #define PCIEPHYCFG_FRP10_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV714_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV714_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE10_G1		0x716	//Equalizer Adaptive 4 Lane10 G1
    #define PCIEPHYCFG_FRP10_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV716_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV716_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE10		0x720	//EQTNBIST Lane10
    #define PCIEPHYCFG_RSV720_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP10_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE10		0x722	//Eye Monitor Lane10
    #define PCIEPHYCFG_RSV722_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP10_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP10_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP10_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP10_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP10_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP10_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE10_G2		0x724	//TX_DUTY TXSW TDNCIS TDPCIS Lane10 G2
    #define PCIEPHYCFG_FRP10_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP10_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP10_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP10_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE10_G2		0x726	//TDCIS TXPSR TXNSR Lane10 G2
    #define PCIEPHYCFG_RSV726_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE10_G2		0x728	//RCV Lane10 G2
    #define PCIEPHYCFG_RSV729_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP10_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP10_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP10_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP10_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE10_G2		0x72A	//CDR 0 Lane10 G2
    #define PCIEPHYCFG_RSV72A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP10_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency  
    #define PCIEPHYCFG_FRP10_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP10_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP10_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE10_G2		0x72C	//CDR 1 Lane10 G2
    #define PCIEPHYCFG_RSV72C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP10_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP10_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP10_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP10_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP10_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE10_G2		0x72E	//Equalizer Adaptive 0 Lane10 G2
    #define PCIEPHYCFG_FRP10_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE10_G2		0x730	//Equalizer Adaptive 1 Lane10 G2
    #define PCIEPHYCFG_FRP10_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP10_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP10_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP10_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE10_G2		0x732	//Equalizer Adaptive 2 Lane10 G2
    #define PCIEPHYCFG_FRP10_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV732_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV732_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP10_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE10_G2		0x734	//Equalizer Adaptive 3 Lane10 G2
    #define PCIEPHYCFG_FRP10_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV734_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV734_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE10_G2		0x736	//Equalizer Adaptive 4 Lane10 G2
    #define PCIEPHYCFG_FRP10_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV736_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV736_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_10		0x740	//RCV CDR EQ Control 1 Lane 10
    #define PCIEPHYCFG_RSV740_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP10_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP10_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH10_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z30		0x742	//Reserved
    #define PCIEPHYCFG_RSV742_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE10_G3		0x744	//TX_DUTY TXSW TDNCIS TDPCIS Lane10 G3
    #define PCIEPHYCFG_FRP10_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP10_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP10_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP10_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE10_G3		0x746	//TDCIS TXPSR TXNSR Lane10 G3
    #define PCIEPHYCFG_RSV746_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE10_G3		0x748	//RCV Lane10 G3
    #define PCIEPHYCFG_RSV748_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP10_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP10_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP10_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP10_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE10_G3		0x74A	//CDR 0 Lane10 G3
    #define PCIEPHYCFG_RSV74A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP10_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP10_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP10_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP10_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE10_G3		0x74C	//CDR 1 Lane10 G3
    #define PCIEPHYCFG_RSV74C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP10_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP10_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP10_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP10_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP10_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP10_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE10_G3		0x74E	//Equalizer Adaptive 0 Lane10 G3
    #define PCIEPHYCFG_FRP10_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE10_G3		0x750	//Equalizer Adaptive 1 Lane10 G3
    #define PCIEPHYCFG_FRP10_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after first Tuning Finished
    #define PCIEPHYCFG_FRP10_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP10_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP10_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP10_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE10_G3		0x752	//Equalizer Adaptive 2 Lane10 G3
    #define PCIEPHYCFG_FRP10_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV752_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV752_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP10_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE10_G3		0x754	//Equalizer Adaptive 3 Lane10 G3
    #define PCIEPHYCFG_FRP10_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV754_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV754_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE10_G3		0x756	//Equalizer Adaptive 4 Lane10 G3
    #define PCIEPHYCFG_FRP10_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV756_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP10_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV756_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP10_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE10		0x760	//EPHY Status 0 Lane10
    #define PCIEPHYCFG_RSV760_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV760_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP10_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP10_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE10		0x762	//EPHY Status 1 Lane10
    #define PCIEPHYCFG_RSV762_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV762_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE10		0x764	//EPHY Status 2 Lane10
    #define PCIEPHYCFG_RSV764_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV764_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE10		0x766	//BER Counter Result Lane10
    #define PCIEPHYCFG_RSV766_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP10_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE10		0x768	//Ideal PI Phase for Data Sampling Lane10
    #define PCIEPHYCFG_RSV768_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP10_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE11		0x780	//RCV CDR EQ Control Lane11
    #define PCIEPHYCFG_RSV780_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP11_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP11_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP11_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP11_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP11_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1 
    #define PCIEPHYCFG_FHP11_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP11_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP11_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP11_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE11		0x782	//Manual Set in Test Mode Lane11
    #define PCIEPHYCFG_FHP11_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP11_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP11_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP11_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP11_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP11_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP11_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP11_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP11_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP11_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP11_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP11_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP11_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE11_G1		0x784	//TX_DUTY TXSW TDNCIS TDPCIS Lane11 G1
    #define PCIEPHYCFG_FRP11_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP11_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP11_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP11_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE11_G1		0x786	//TDCIS TXPSR TXNSR Lane11 G1
    #define PCIEPHYCFG_RSV787_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE11_G1		0x788	//RCV Lane11 G1
    #define PCIEPHYCFG_RSV789_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP11_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP11_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP11_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP11_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE11_G1		0x78A	//CDR 0 Lane11 G1
    #define PCIEPHYCFG_RSV78B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP11_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP11_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP11_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP11_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE11_G1		0x78C	//CDR 1 Lane11 G1
    #define PCIEPHYCFG_RSV78D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP11_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP11_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP11_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP11_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP11_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE11_G1		0x78E	//Equalizer Adaptive 0 Lane11 G1
    #define PCIEPHYCFG_FRP11_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE11_G1		0x790	//Equalizer Adaptive 1 Lane11 G1
    #define PCIEPHYCFG_FRP11_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP11_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP11_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP11_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE11_G1		0x792	//Equalizer Adaptive 2 Lane11 G1
    #define PCIEPHYCFG_FRP11_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV792_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV792_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP11_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE11_G1		0x794	//Equalizer Adaptive 3 Lane11 G1
    #define PCIEPHYCFG_FRP11_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV794_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV794_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE11_G1		0x796	//Equalizer Adaptive 4 Lane11 G1
    #define PCIEPHYCFG_FRP11_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV796_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV796_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE11		0x7A0	//EQTNBIST Lane11
    #define PCIEPHYCFG_RSV7A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP11_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE11		0x7A2	//Eye Monitor Lane11
    #define PCIEPHYCFG_RSV7A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP11_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP11_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP11_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP11_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP11_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable 
    #define PCIEPHYCFG_FRP11_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE11_G2		0x7A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane11 G2
    #define PCIEPHYCFG_FRP11_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP11_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP11_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP11_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE11_G2		0x7A6	//TDCIS TXPSR TXNSR Lane11 G2
    #define PCIEPHYCFG_RSV7A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE11_G2		0x7A8	//RCV Lane11 G2
    #define PCIEPHYCFG_RSV7A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP11_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP11_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP11_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP11_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE11_G2		0x7AA	//CDR 0 Lane11 G2
    #define PCIEPHYCFG_RSV7AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP11_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP11_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP11_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP11_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE11_G2		0x7AC	//CDR 1 Lane11 G2
    #define PCIEPHYCFG_RSV7AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP11_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP11_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP11_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP11_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP11_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE11_G2		0x7AE	//Equalizer Adaptive 0 Lane11 G2
    #define PCIEPHYCFG_FRP11_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE11_G2		0x7B0	//Equalizer Adaptive 1 Lane11 G2
    #define PCIEPHYCFG_FRP11_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP11_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP11_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP11_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE11_G2		0x7B2	//Equalizer Adaptive 2 Lane11 G2
    #define PCIEPHYCFG_FRP11_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV7B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP11_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE11_G2		0x7B4	//Equalizer Adaptive 3 Lane11 G2
    #define PCIEPHYCFG_FRP11_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE11_G2		0x7B6	//Equalizer Adaptive 4 Lane11 G2
    #define PCIEPHYCFG_FRP11_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_11		0x7C0	//RCV CDR EQ Control 1 lane 11
    #define PCIEPHYCFG_RSV7C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP11_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP11_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH11_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z31		0x7C2	//Reserved
    #define PCIEPHYCFG_RSV7C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE11_G3		0x7C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane11 G3
    #define PCIEPHYCFG_FRP11_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP11_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP11_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP11_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE11_G3		0x7C6	//TDCIS TXPSR TXNSR Lane11 G3
    #define PCIEPHYCFG_RSV7C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE11_G3		0x7C8	//RCV Lane11 G3
    #define PCIEPHYCFG_RSV7C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP11_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP11_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP11_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP11_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE11_G3		0x7CA	//CDR 0 Lane11 G3
    #define PCIEPHYCFG_RSV7CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP11_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP11_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP11_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP11_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE11_G3		0x7CC	//CDR 1 Lane11 G3
    #define PCIEPHYCFG_RSV7CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP11_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP11_KTSEL_G3			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP11_NTSEL_G3			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP11_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP11_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP11_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE11_G3		0x7CE	//Equalizer Adaptive 0 Lane11 G3
    #define PCIEPHYCFG_FRP11_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE11_G3		0x7D0	//Equalizer Adaptive 1 Lane11 G3
    #define PCIEPHYCFG_FRP11_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP11_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP11_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP11_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP11_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE11_G3		0x7D2	//Equalizer Adaptive 2 Lane11 G3
    #define PCIEPHYCFG_FRP11_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV7D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP11_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE11_G3		0x7D4	//Equalizer Adaptive 3 Lane11 G3
    #define PCIEPHYCFG_FRP11_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE11_G3		0x7D6	//Equalizer Adaptive 4 Lane11 G3
    #define PCIEPHYCFG_FRP11_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP11_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV7D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP11_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE11		0x7E0	//EPHY Status 0 Lane11
    #define PCIEPHYCFG_RSV7E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV7E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP11_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP11_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag
#define PCIEPHYCFG_EPHY_STA_1_LANE11		0x7E2	//EPHY Status 1 Lane11
    #define PCIEPHYCFG_RSV7E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV7E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE11		0x7E4	//EPHY Status 2 Lane11
    #define PCIEPHYCFG_RSV7E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV7E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE11		0x7E6	//BER Counter Result Lane11
    #define PCIEPHYCFG_RSV7E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP11_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE11		0x7E8	//Ideal PI Phase for Data Sampling Lane11
    #define PCIEPHYCFG_RSV7E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP11_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE12		0x800	//RCV CDR EQ Control Lane12
    #define PCIEPHYCFG_RSV800_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP12_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP12_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP12_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP12_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP12_VCOPDSEL			BIT8	//0/x/x/x VCO Power off Method at P1
    #define PCIEPHYCFG_FHP12_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP12_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP12_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP12_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE12		0x802	//Manual Set in Test Mode Lane12
    #define PCIEPHYCFG_FHP12_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP12_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power down in Test Mode
    #define PCIEPHYCFG_FHP12_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP12_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP12_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power down Enable in Test Mode
    #define PCIEPHYCFG_FRP12_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP12_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP12_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP12_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP12_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP12_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP12_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP12_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE12_G1		0x804	//TX_DUTY TXSW TDNCIS TDPCIS Lane12 G1
    #define PCIEPHYCFG_FRP12_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP12_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP12_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP12_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE12_G1		0x806	//TDCIS TXPSR TXNSR Lane12 G1
    #define PCIEPHYCFG_RSV806_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE12_G1		0x808	//RCV Lane12 G1
    #define PCIEPHYCFG_RSV808_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP12_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP12_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP12_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP12_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE12_G1		0x80A	//CDR 0 Lane12 G1
    #define PCIEPHYCFG_RSV80A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP12_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP12_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP12_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP12_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE12_G1		0x80C	//CDR 1 Lane12 G1
    #define PCIEPHYCFG_RSV80C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP12_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP12_KTSEL_G1			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP12_NTSEL_G1			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP12_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP12_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE12_G1		0x80E	//Equalizer Adaptive 0 Lane12 G1
    #define PCIEPHYCFG_FRP12_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE12_G1		0x810	//Equalizer Adaptive 1 Lane12 G1
    #define PCIEPHYCFG_FRP12_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP12_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP12_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP12_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE12_G1		0x812	//Equalizer Adaptive 2 Lane12 G1
    #define PCIEPHYCFG_FRP12_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV812_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV812_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP12_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE12_G1		0x814	//Equalizer Adaptive 3 Lane12 G1
    #define PCIEPHYCFG_FRP12_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV814_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV814_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE12_G1		0x816	//Equalizer Adaptive 4 Lane12 G1
    #define PCIEPHYCFG_FRP12_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV816_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV816_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE12		0x820	//EQTNBIST Lane12
    #define PCIEPHYCFG_RSV820_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP12_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE12		0x822	//Eye Monitor Lane12
    #define PCIEPHYCFG_RSV822_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP12_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP12_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP12_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP12_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP12_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP12_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE12_G2		0x824	//TX_DUTY TXSW TDNCIS TDPCIS Lane12 G2
    #define PCIEPHYCFG_FRP12_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP12_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP12_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP12_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE12_G2		0x826	//TDCIS TXPSR TXNSR Lane12 G2
    #define PCIEPHYCFG_RSV826_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE12_G2		0x828	//RCV Lane12 G2
    #define PCIEPHYCFG_RSV828_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP12_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP12_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP12_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP12_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE12_G2		0x82A	//CDR 0 Lane12 G2
    #define PCIEPHYCFG_RSV82A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP12_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP12_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0
    #define PCIEPHYCFG_FRP12_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP12_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE12_G2		0x82C	//CDR 1 Lane12 G2
    #define PCIEPHYCFG_RSV82C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select during Tracking Mode
    #define PCIEPHYCFG_FRP12_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select during Training Mode
    #define PCIEPHYCFG_FRP12_KTSEL_G2			BIT9	//0/x/x/x Update Time during Tracking Mode
    #define PCIEPHYCFG_FRP12_NTSEL_G2			BIT8	//1b/x/x/x Update Time during Training Mode
    #define PCIEPHYCFG_FRP12_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 during Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 during Training Mode
    #define PCIEPHYCFG_FRP12_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 during Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 during Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE12_G2		0x82E	//Equalizer Adaptive 0 lane12 G2
    #define PCIEPHYCFG_FRP12_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE12_G2		0x830	//Equalizer Adaptive 1 Lane12 G2
    #define PCIEPHYCFG_FRP12_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP12_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP12_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP12_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE12_G2		0x832	//Equalizer Adaptive 2 Lane12 G2
    #define PCIEPHYCFG_FRP12_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV832_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV832_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP12_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE12_G2		0x834	//Equalizer Adaptive 3 Lane12 G2
    #define PCIEPHYCFG_FRP12_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV834_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV834_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE12_G2		0x836	//Equalizer Adaptive 4 Lane12 G2
    #define PCIEPHYCFG_FRP12_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV836_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV836_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_12		0x840	//RCV CDR EQ Control 1 Lane 12
    #define PCIEPHYCFG_RSV840_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP12_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP12_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH12_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z32		0x842	//Reserved
    #define PCIEPHYCFG_RSV842_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE12_G3		0x844	//TX_DUTY TXSW TDNCIS TDPCIS Lane12 G3
    #define PCIEPHYCFG_FRP12_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP12_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis set
    #define PCIEPHYCFG_FRP12_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP12_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE12_G3		0x846	//TDCIS TXPSR TXNSR Lane12 G3
    #define PCIEPHYCFG_RSV846_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE12_G3		0x848	//RCV Lane12 G3
    #define PCIEPHYCFG_RSV848_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP12_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP12_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP12_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP12_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE12_G3		0x84A	//CDR 0 Lane12 G3
    #define PCIEPHYCFG_RSV84A_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP12_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP12_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s to P0 
    #define PCIEPHYCFG_FRP12_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio during P2 to P0
    #define PCIEPHYCFG_FRP12_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE12_G3		0x84C	//CDR 1 Lane12 G3
    #define PCIEPHYCFG_RSV84C_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP12_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP12_KTSEL_G3			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP12_NTSEL_G3			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP12_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP12_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP12_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE12_G3		0x84E	//Equalizer Adaptive 0 Lane12 G3
    #define PCIEPHYCFG_FRP12_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE12_G3		0x850	//Equalizer Adaptive 1 Lane12 G3
    #define PCIEPHYCFG_FRP12_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable low Speed Mode After First Tuning Finished
    #define PCIEPHYCFG_FRP12_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP12_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP12_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP12_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE12_G3		0x852	//Equalizer Adaptive 2 Lane12 G3
    #define PCIEPHYCFG_FRP12_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV852_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV852_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP12_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE12_G3		0x854	//Equalizer Adaptive 3 Lane12 G3
    #define PCIEPHYCFG_FRP12_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV854_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV854_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE12_G3		0x856	//Equalizer Adaptive 4 Lane12 G3
    #define PCIEPHYCFG_FRP12_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV856_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP12_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV856_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP12_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE12		0x860	//EPHY Status 0 Lane12
    #define PCIEPHYCFG_RSV860_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV860_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP12_EIDLESQSDET			BIT1	//HwInit/x/x/x Electrical Idle Detection Flag
    #define PCIEPHYCFG_EP12_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag 
#define PCIEPHYCFG_EPHY_STA_1_LANE12		0x862	//EPHY Status 1 Lane12
    #define PCIEPHYCFG_RSV862_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV862_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE12		0x864	//EPHY Status 2 Lane12
    #define PCIEPHYCFG_RSV864_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV864_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE12		0x866	//BER Counter Result Lane12
    #define PCIEPHYCFG_RSV866_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP12_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE12		0x868	//Ideal PI Phase for Data Sampling Lane12
    #define PCIEPHYCFG_RSV868_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP12_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase For Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE13		0x880	//RCV CDR EQ Control Lane13
    #define PCIEPHYCFG_RSV880_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP13_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP13_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select 
    #define PCIEPHYCFG_FHP13_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP13_RCVPDSEL			BIT9	//1b/x/x/x RCV Power Off Method  
    #define PCIEPHYCFG_FHP13_VCOPDSEL			BIT8	//0/x/x/x VCO Power Off Method At P1 
    #define PCIEPHYCFG_FHP13_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP13_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP13_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP13_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select 
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE13		0x882	//Manual Set in Test Mode Lane13
    #define PCIEPHYCFG_FHP13_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP13_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power Down In Test Mode
    #define PCIEPHYCFG_FHP13_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable In Test Mode
    #define PCIEPHYCFG_FHP13_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable In Test Mode
    #define PCIEPHYCFG_FHP13_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power Down Enable In Test Mode
    #define PCIEPHYCFG_FRP13_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set In Test Mode
    #define PCIEPHYCFG_FRP13_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable In Test Mode
    #define PCIEPHYCFG_FRP13_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set In Test Mode
    #define PCIEPHYCFG_FRP13_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable In Test Mode
    #define PCIEPHYCFG_FRP13_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set In Test Mode
    #define PCIEPHYCFG_FRP13_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable In Test Mode
    #define PCIEPHYCFG_FRP13_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set In Test Mode
    #define PCIEPHYCFG_FRP13_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable In Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE13_G1		0x884	//TX_DUTY TXSW TDNCIS TDPCIS Lane13 G1
    #define PCIEPHYCFG_FRP13_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP13_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-Emphasis Set
    #define PCIEPHYCFG_FRP13_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP13_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE13_G1		0x886	//TDCIS TXPSR TXNSR Lane13 G1
    #define PCIEPHYCFG_RSV887_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE13_G1		0x888	//RCV Lane13 G1
    #define PCIEPHYCFG_RSV889_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP13_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP13_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP13_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option For VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP13_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-End TX Swing And De-Emphasis as Reference For RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE13_G1		0x88A	//CDR 0 Lane13 G1
    #define PCIEPHYCFG_RSV88B_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP13_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP13_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s To P0 
    #define PCIEPHYCFG_FRP13_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP13_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge Of RXCLK Select 
#define PCIEPHYCFG_CDR_1_LANE13_G1		0x88C	//CDR 1 Lane13 G1
    #define PCIEPHYCFG_RSV88D_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP13_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP13_KTSEL_G1			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP13_NTSEL_G1			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP13_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP13_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP13_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 During Tracking Mode 
    #define PCIEPHYCFG_FRP13_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE13_G1		0x88E	//Equalizer Adaptive 0 Lane13 G1
    #define PCIEPHYCFG_FRP13_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE13_G1		0x890	//Equalizer Adaptive 1 Lane13 G1
    #define PCIEPHYCFG_FRP13_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode After First Tuning Finished
    #define PCIEPHYCFG_FRP13_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP13_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP13_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE13_G1		0x892	//Equalizer Adaptive 2 Lane13 G1
    #define PCIEPHYCFG_FRP13_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV892_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial Or Set Value
    #define PCIEPHYCFG_RSV892_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE In Training Mode
    #define PCIEPHYCFG_FRP13_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE13_G1		0x894	//Equalizer Adaptive 3 Lane13 G1
    #define PCIEPHYCFG_FRP13_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV894_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial Or Set Value
    #define PCIEPHYCFG_FRP13_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV894_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial Or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE13_G1		0x896	//Equalizer Adaptive 4 Lane13 G1
    #define PCIEPHYCFG_FRP13_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV896_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial Or Set Value
    #define PCIEPHYCFG_FRP13_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV896_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial Or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE13		0x8A0	//EQTNBIST Lane13
    #define PCIEPHYCFG_RSV8A0_CFG17			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP13_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE13		0x8A2	//Eye Monitor Lane13
    #define PCIEPHYCFG_RSV8A3_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP13_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP13_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP13_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP13_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP13_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP13_PH_OS			0x7F	//0/x/x/x Actual PI Phase For Data Sampling When BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE13_G2		0x8A4	//TX_DUTY TXSW TDNCIS TDPCIS Lane13 G2
    #define PCIEPHYCFG_FRP13_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP13_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP13_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP13_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE13_G2		0x8A6	//TDCIS TXPSR TXNSR Lane13 G2
    #define PCIEPHYCFG_RSV8A7_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE13_G2		0x8A8	//RCV Lane13 G2
    #define PCIEPHYCFG_RSV8A9_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP13_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP13_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP13_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option or VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP13_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-End TX Swing and De-Emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE13_G2		0x8AA	//CDR 0 Lane13 G2
    #define PCIEPHYCFG_RSV8AB_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP13_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP13_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s o P0
    #define PCIEPHYCFG_FRP13_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 o P0
    #define PCIEPHYCFG_FRP13_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge f RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE13_G2		0x8AC	//CDR 1 Lane13 G2
    #define PCIEPHYCFG_RSV8AD_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP13_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP13_KTSEL_G2			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP13_NTSEL_G2			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP13_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP13_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP13_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP13_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE13_G2		0x8AE	//Equalizer Adaptive 0 Lane13 G2
    #define PCIEPHYCFG_FRP13_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select 
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE13_G2		0x8B0	//Equalizer Adaptive 1 Lane13 G2
    #define PCIEPHYCFG_FRP13_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode After First Tuning Finished 
    #define PCIEPHYCFG_FRP13_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP13_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP13_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE13_G2		0x8B2	//Equalizer Adaptive 2 Lane13 G2
    #define PCIEPHYCFG_FRP13_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8B3_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV8B3_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP13_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE13_G2		0x8B4	//Equalizer Adaptive 3 Lane13 G2
    #define PCIEPHYCFG_FRP13_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8B4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP13_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8B4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE13_G2		0x8B6	//Equalizer Adaptive 4 Lane13 G2
    #define PCIEPHYCFG_FRP13_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8B6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP13_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8B6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_13		0x8C0	//RCV CDR EQ Control 1 lane 13
    #define PCIEPHYCFG_RSV8C0_CFG17			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP13_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP13_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH13_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z33		0x8C2	//Reserved
    #define PCIEPHYCFG_RSV8C2_CFG17			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE13_G3		0x8C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane13 G3
    #define PCIEPHYCFG_FRP13_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP13_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP13_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP13_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE13_G3		0x8C6	//TDCIS TXPSR TXNSR Lane13 G3
    #define PCIEPHYCFG_RSV8C6_CFG17			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE13_G3		0x8C8	//RCV Lane13 G3
    #define PCIEPHYCFG_RSV8C8_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP13_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP13_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP13_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP13_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias By Customer
#define PCIEPHYCFG_CDR_0_LANE13_G3		0x8CA	//CDR 0 Lane13 G3
    #define PCIEPHYCFG_RSV8CA_CFG17			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP13_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP13_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s to P0
    #define PCIEPHYCFG_FRP13_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 to P0
    #define PCIEPHYCFG_FRP13_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE13_G3		0x8CC	//CDR 1 Lane13 G3
    #define PCIEPHYCFG_RSV8CC_CFG17			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP13_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP13_KTSEL_G3			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP13_NTSEL_G3			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP13_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP13_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP13_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP13_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE13_G3		0x8CE	//Equalizer Adaptive 0 Lane13 G3
    #define PCIEPHYCFG_FRP13_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE13_G3		0x8D0	//Equalizer Adaptive 1 Lane13 G3
    #define PCIEPHYCFG_FRP13_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode After First Tuning Finished 
    #define PCIEPHYCFG_FRP13_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP13_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP13_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP13_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE13_G3		0x8D2	//Equalizer Adaptive 2 Lane13 G3
    #define PCIEPHYCFG_FRP13_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8D2_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial Or Set Value
    #define PCIEPHYCFG_RSV8D2_7_CFG17			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP13_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE13_G3		0x8D4	//Equalizer Adaptive 3 Lane13 G3
    #define PCIEPHYCFG_FRP13_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8D4_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP13_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8D4_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE13_G3		0x8D6	//Equalizer Adaptive 4 Lane13 G3
    #define PCIEPHYCFG_FRP13_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8D6_13_CFG17			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP13_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV8D6_5_CFG17			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP13_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE13		0x8E0	//EPHY Status 0 Lane13
    #define PCIEPHYCFG_RSV8E0_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV8E0_2_CFG17			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP13_EIDLESQSDET			BIT1	//HwInit/x/x/x EIDLE/Squelch Detection Flag 
    #define PCIEPHYCFG_EP13_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag (1: Receiver Detected)
#define PCIEPHYCFG_EPHY_STA_1_LANE13		0x8E2	//EPHY Status 1 Lane13
    #define PCIEPHYCFG_RSV8E2_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV8E2_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE13		0x8E4	//EPHY Status 2 Lane13
    #define PCIEPHYCFG_RSV8E4_13_CFG17			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV8E4_5_CFG17			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE13		0x8E6	//BER Counter Result Lane13
    #define PCIEPHYCFG_RSV8E6_CFG17			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP13_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE13		0x8E8	//Ideal PI Phase for Data Sampling Lane13
    #define PCIEPHYCFG_RSV8E8_CFG17			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP13_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RESERVED_Z34		0x9AE	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9AE			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z35		0x9AF	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9AF			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_PEMCU_RESET_AND_INSTRUCTION_AUTO_FILL_ENABLE_AND_DONE		0x9B0	//PEMCU Reset and Instruction Auto Fill Enable and Done
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9A4_74			0xF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_PEMCU_CLK_CTL			BIT3	//0/x/x/x PEMCU Clock Control Register
    #define PCIEPHYCFG_MCU_RST			BIT2	//0/x/x/x MCU Software Reset Controlled By BIOS
    #define PCIEPHYCFG_INST_AUTOFILL_DONE			BIT1	//HwInit/x/x/x Instruction Auto Fill Done Flag
    #define PCIEPHYCFG_INST_AUTOFILL_EN			BIT0	//0/x/x/x Dummy MCU Auto Fill Instruction Cache Enable
#define PCIEPHYCFG_PEMCU_RESET_AND_INSTRUCTION_AUTO_FILL_ENABLE_AND_DONE_Z1		0x9B1	//PEMCU Reset and Instruction Auto Fill Enable and Done
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9B1			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PEMCU_SID_LOCKBIT			BIT0	//0/x/x/x Reserved 
#define PCIEPHYCFG_PEMCU_AUTO_FILL_START_ADR		0x9B2	//PEMCU Auto Fill Start Address
    #define PCIEPHYCFG_INST_AUTOFILL_SADDR			0xFFC0	//0/x/x/x Start Address of Auto Fill Instruction
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9A56_50			0x3F	//0/x/x/x Reserved
#define PCIEPHYCFG_PEMCU_AUTO_FILL_LEN		0x9B4	//PEMCU Auto Fill Length
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9A78_156			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_INST_AUTOFILL_LENGTH			0x3FFF	//0/x/x/x Length of PEMCU Auto Fill Instruction
#define PCIEPHYCFG_PEMCU_SID		0x9B6	//PEMCU SID
    #define PCIEPHYCFG_PEMCUSID			0xFFFF	//0007h/x/x/x PEMCU SID for PXP Request:
#define PCIEPHYCFG_BASE_ADR_OF_PEMCU_FW_FOR_INSTRUCTION		0x9B8	//Base Address of PEMCU Firmware for Instruction
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9AA9_2320			0xFF000000	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_INST_SYSMEM_BASE			0xFFFFFF	//0/x/x/x Base Address of PEMCU Firmware for Instruction. Bit 16 to Bit 39
#define PCIEPHYCFG_BASE_ADR_OF_PEMCU_FW_FOR_DATA_SPACE		0x9BC	//Base Address of PEMCU Firmware for Data Space
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9AFC_2320			0xFF000000	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DAT_SYSMEM_BASE			0xFFFFFF	//0/x/x/x Base Address of PEMCU Firmware for Data Space Bit 16 to Bit 39
#define PCIEPHYCFG_EQ_INT_TO_MCU		0x9C0	//EQ Int to MCU
    #define PCIEPHYCFG_RSV_9C0			0xF8	//0/x/x/x Reserved
    #define PCIEPHYCFG_SLEEP_REQ			BIT2	//0/x/x/x PEMCU Sleep Require 
    #define PCIEPHYCFG_PEMCU_CLK_EN			BIT1	//HwInit/x/x/x PEMCU Clock Enable
    #define PCIEPHYCFG_INT_REQ			BIT0	//HwInit/x/x/x PEMCU Interrupt Require Status
#define PCIEPHYCFG_RESERVED_Z36		0x9C1	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C1			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z37		0x9C2	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C2			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z38		0x9C3	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C3			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z1		0x9C4	//EQ Int to MCU
    #define PCIEPHYCFG_RSV_9C1			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PEMCU_CLOCK_GATING_CTL			BIT0	//1b/x/x/x PEMCU Clock Gating Control
#define PCIEPHYCFG_PEMCU_JTAG_CLK_ENABLE		0x9C5	//PEMCU JTAG Clock Enable
    #define PCIEPHYCFG_RSV_9C5			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_JTAGEN			BIT0	//0b/x/x/x PEMCU JTAG Clock Enable
#define PCIEPHYCFG_RESERVED_Z39		0x9C6	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C6			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z40		0x9C7	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C7			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z2		0x9C8	//EQ Int to MCU
    #define PCIEPHYCFG_RSV_9C8			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PEMCU2BIOS_DB			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z41		0x9C9	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9C9			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z42		0x9CA	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9CA			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z43		0x9CB	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9CB			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z3		0x9CC	//EQ Int to MCU
    #define PCIEPHYCFG_RSV_9CC			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_BIOS2PEMCU_DB			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z44		0x9CD	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9CD			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z45		0x9CE	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9CE			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z46		0x9CF	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_9CF			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z4		0x9D0	//EQ Int to MCU
    #define PCIEPHYCFG_PEMCU2BIOS_SCRATCH			0xFFFFFFFF	//0/x/x/x Scratch Register for PEMCU to BIOS 
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z5		0x9D4	//EQ Int to MCU
    #define PCIEPHYCFG_RSV_9D4			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_PE7			BIT7	//0/x/x/x Request EQ Service Interrupt Bit for Port7
    #define PCIEPHYCFG_PF_EQ_REQ_PE6			BIT6	//0/x/x/x Request EQ Service Interrupt Bit for Port6
    #define PCIEPHYCFG_PF_EQ_REQ_PE5			BIT5	//0/x/x/x Request EQ Service Interrupt Bit for Port5
    #define PCIEPHYCFG_PF_EQ_REQ_PE4			BIT4	//0/x/x/x Request EQ Service Interrupt Bit for Port4
    #define PCIEPHYCFG_PF_EQ_REQ_PE3			BIT3	//0/x/x/x Request EQ Service Interrupt Bit for Port3
    #define PCIEPHYCFG_PF_EQ_REQ_PE2			BIT2	//0/x/x/x Request EQ Service Interrupt Bit for Port2
    #define PCIEPHYCFG_PF_EQ_REQ_PE1			BIT1	//0/x/x/x Request EQ Service Interrupt Bit for Port1
    #define PCIEPHYCFG_PF_EQ_REQ_PE0			BIT0	//0/x/x/x Request EQ Service Interrupt Bit for Port0
#define PCIEPHYCFG_EP_EQ_REQ		0x9D6	//EP EQ_REQ
    #define PCIEPHYCFG_RSV_9D6			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP_EQ_REQ_PE7			BIT7	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port7
    #define PCIEPHYCFG_EP_EQ_REQ_PE6			BIT6	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port6
    #define PCIEPHYCFG_EP_EQ_REQ_PE5			BIT5	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port5
    #define PCIEPHYCFG_EP_EQ_REQ_PE4			BIT4	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port4
    #define PCIEPHYCFG_EP_EQ_REQ_PE3			BIT3	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port3
    #define PCIEPHYCFG_EP_EQ_REQ_PE2			BIT2	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port2
    #define PCIEPHYCFG_EP_EQ_REQ_PE1			BIT1	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port1
    #define PCIEPHYCFG_EP_EQ_REQ_PE0			BIT0	//0/x/x/x Endpoint Request EQ Service Interrupt Bit for Port0
#define PCIEPHYCFG_EQ_INT_TO_MCU_Z6		0x9D8	//EQ Int to MCU
    #define PCIEPHYCFG_BIOS2PEMCU_SCRATCH			0xFFFFFFFF	//0/x/x/x Scratch Register for BIOS to PEMCU
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_00		0xA00	//LEQ DC Output EPHY Lane 00
    #define PCIEPHYCFG_RSV_A00			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP00_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_00		0xA01	//LEQ HF Output EPHY Lane 00
    #define PCIEPHYCFG_RSV_A01			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP00_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_00		0xA02	//LEQ Offset Output EPHY Lane 00
    #define PCIEPHYCFG_RSV_A02			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP00_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_00		0xA03	//LEQ Weight1 Output EPHY Lane 00
    #define PCIEPHYCFG_RSV_A03			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP00_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane0 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_00		0xA04	//LEQ Weight2 Output EPHY Lane 00
    #define PCIEPHYCFG_RSV_A04			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP00_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane0 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z47		0xA05	//Reserved
    #define PCIEPHYCFG_RSV_A05			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z48		0xA06	//Reserved
    #define PCIEPHYCFG_RSV_A06			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z49		0xA07	//Reserved
    #define PCIEPHYCFG_RSV_A07			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE00		0xA08	//FAR-END Device Full Swing Value Lane00
    #define PCIEPHYCFG_RSV_A08			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_00			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE00		0xA09	//FAR-END Device Low Frequency Value Lane00
    #define PCIEPHYCFG_RSV_A09			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_00			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_00		0xA0A	//FAREND_TX_PRESET_00
    #define PCIEPHYCFG_RSV_A0A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_00_Z1			0xF	//HwInit/x/x/x Lane0 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_00		0xA0B	//FAREND_PRE_CURSOR_00
    #define PCIEPHYCFG_RSV_A0B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_00_Z1			0x3F	//HwInit/x/x/x Lane0 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_00		0xA0C	//FAREND_CURSOR_00
    #define PCIEPHYCFG_RSV_A0C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_00_Z1			0x3F	//HwInit/x/x/x Lane0 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_00		0xA0D	//FAREND_POST_CURSOR_00
    #define PCIEPHYCFG_RSV_A0D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_00_Z1			0x3F	//HwInit/x/x/x Lane0 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_00		0xA0E	//BIT_ERROR_RATE_00
    #define PCIEPHYCFG_BIT_ERROR_RATE_00			0xFF	//HwInit/x/x/x Lane0 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_00		0xA0F	//Farend Use TX Preset and RCV 00
    #define PCIEPHYCFG_RSV_A0F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_00			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_00			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_01		0xA10	//LEQ DC Output EPHY Lane 01
    #define PCIEPHYCFG_RSV_A10			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP01_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane1 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_01		0xA11	//LEQ HF Output EPHY Lane 01
    #define PCIEPHYCFG_RSV_A11			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP01_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane1 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_01		0xA12	//LEQ Offset Output EPHY Lane 01
    #define PCIEPHYCFG_RSV_A12			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP01_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane1 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_01		0xA13	//LEQ Weight1 Output EPHY Lane 01
    #define PCIEPHYCFG_RSV_A13			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP01_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane1 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_01		0xA14	//LEQ Weight2 Output EPHY Lane 01
    #define PCIEPHYCFG_RSV_A14			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP01_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane1 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z50		0xA15	//Reserved
    #define PCIEPHYCFG_RSV_A15			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z51		0xA16	//Reserved
    #define PCIEPHYCFG_RSV_A16			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z52		0xA17	//Reserved
    #define PCIEPHYCFG_RSV_A17			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE01		0xA18	//FAR-END Device Full Swing Value Lane01
    #define PCIEPHYCFG_RSV_A18			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_01			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE01		0xA19	//FAR-END Device Low Frequency Value Lane01
    #define PCIEPHYCFG_RSV_A19			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_01			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_01		0xA1A	//FAREND_TX_PRESET_01
    #define PCIEPHYCFG_RSV_A1A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_01_Z1			0xF	//HwInit/x/x/x Lane1 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_01		0xA1B	//FAREND_PRE_CURSOR_01
    #define PCIEPHYCFG_RSV_A1B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_01_Z1			0x3F	//HwInit/x/x/x Lane1 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_01		0xA1C	//FAREND_CURSOR_01
    #define PCIEPHYCFG_RSV_A1C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_01_Z1			0x3F	//HwInit/x/x/x Lane1 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_01		0xA1D	//FAREND_POST_CURSOR_01
    #define PCIEPHYCFG_RSV_A1D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_01_Z1			0x3F	//HwInit/x/x/x Lane1 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_01		0xA1E	//BIT_ERROR_RATE_01
    #define PCIEPHYCFG_BIT_ERROR_RATE_01			0xFF	//HwInit/x/x/x Lane1 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_01		0xA1F	//Farend Use TX Preset and RCV  01
    #define PCIEPHYCFG_RSV_A1F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_01			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_01			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_02		0xA20	//LEQ DC Output EPHY Lane 02
    #define PCIEPHYCFG_RSV_A20			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP02_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane2 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_02		0xA21	//LEQ HF Output EPHY Lane 02
    #define PCIEPHYCFG_RSV_A21			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP02_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane2 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_02		0xA22	//LEQ Offset Output EPHY Lane 02
    #define PCIEPHYCFG_RSV_A22			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP02_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane2 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_02		0xA23	//LEQ Weight1 Output EPHY Lane 02
    #define PCIEPHYCFG_RSV_A23			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP02_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane2 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_02		0xA24	//LEQ Weight2 Output EPHY Lane 02
    #define PCIEPHYCFG_RSV_A24			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP02_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane2 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z53		0xA25	//Reserved
    #define PCIEPHYCFG_RSV_A25			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z54		0xA26	//Reserved
    #define PCIEPHYCFG_RSV_A26			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z55		0xA27	//Reserved
    #define PCIEPHYCFG_RSV_A27			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE02		0xA28	//FAR-END Device Full Swing Value Lane02
    #define PCIEPHYCFG_RSV_A28			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_02			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE02		0xA29	//FAR-END Device Low Frequency Value Lane02
    #define PCIEPHYCFG_RSV_A29			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_02			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_02		0xA2A	//FAREND_TX_PRESET_02
    #define PCIEPHYCFG_RSV_A2A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_02_Z1			0xF	//HwInit/x/x/x Lane2 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_02		0xA2B	//FAREND_PRE_CURSOR_02
    #define PCIEPHYCFG_RSV_A2B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_02_Z1			0x3F	//HwInit/x/x/x Lane2 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_02		0xA2C	//FAREND_CURSOR_02
    #define PCIEPHYCFG_RSV_A2C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_02_Z1			0x3F	//HwInit/x/x/x Lane2 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_02		0xA2D	//FAREND_POST_CURSOR_02
    #define PCIEPHYCFG_RSV_A2D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_02_Z1			0x3F	//HwInit/x/x/x Lane2 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_02		0xA2E	//BIT_ERROR_RATE_02
    #define PCIEPHYCFG_BIT_ERROR_RATE_02			0xFF	//HwInit/x/x/x Lane2 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_02		0xA2F	//Farend Use TX Preset and RCV 02
    #define PCIEPHYCFG_RSV_A2F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_02			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_02			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_03		0xA30	//LEQ DC Output EPHY Lane 03
    #define PCIEPHYCFG_RSV_A30			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP03_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane3 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_03		0xA31	//LEQ HF Output EPHY Lane 03
    #define PCIEPHYCFG_RSV_A31			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP03_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane3 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_03		0xA32	//LEQ Offset Output EPHY Lane 03
    #define PCIEPHYCFG_RSV_A32			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP03_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane3 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_03		0xA33	//LEQ Weight1 Output EPHY Lane 03
    #define PCIEPHYCFG_RSV_A33			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP03_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane3 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_03		0xA34	//LEQ Weight2 Output EPHY Lane 03
    #define PCIEPHYCFG_RSV_A34			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP03_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane3 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z56		0xA35	//Reserved
    #define PCIEPHYCFG_RSV_A35			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z57		0xA36	//Reserved
    #define PCIEPHYCFG_RSV_A36			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z58		0xA37	//Reserved
    #define PCIEPHYCFG_RSV_A37			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE03		0xA38	//FAR-END Device Full Swing Value Lane03
    #define PCIEPHYCFG_RSV_A38			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_03			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE03		0xA39	//FAR-END Device Low Frequency Value Lane03
    #define PCIEPHYCFG_RSV_A39			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_03			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_03		0xA3A	//FAREND_TX_PRESET_03
    #define PCIEPHYCFG_RSV_A3A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_03_Z1			0xF	//HwInit/x/x/x Lane3 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_03		0xA3B	//FAREND_PRE_CURSOR_03
    #define PCIEPHYCFG_RSV_A3B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_03_Z1			0x3F	//HwInit/x/x/x Lane3 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_03		0xA3C	//FAREND_CURSOR_03
    #define PCIEPHYCFG_RSV_A3C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_03_Z1			0x3F	//HwInit/x/x/x Lane3 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_03		0xA3D	//FAREND_POST_CURSOR_03
    #define PCIEPHYCFG_RSV_A3D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_03_Z1			0x3F	//HwInit/x/x/x Lane3 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_03		0xA3E	//BIT_ERROR_RATE_03
    #define PCIEPHYCFG_BIT_ERROR_RATE_03			0xFF	//HwInit/x/x/x Lane3 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_03		0xA3F	//Farend Use TX Preset and RCV 03
    #define PCIEPHYCFG_RSV_A3F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_03			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_03			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_04		0xA40	//LEQ DC Output EPHY Lane 04
    #define PCIEPHYCFG_RSV_A40			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP04_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane4 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_04		0xA41	//LEQ HF Output EPHY Lane 04
    #define PCIEPHYCFG_RSV_A41			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP04_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane4 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_04		0xA42	//LEQ Offset Output EPHY Lane 04
    #define PCIEPHYCFG_RSV_A42			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP04_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane4 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_04		0xA43	//LEQ Weight1 Output EPHY Lane 04
    #define PCIEPHYCFG_RSV_A43			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP04_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane4 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_04		0xA44	//LEQ Weight2 Output EPHY Lane 04
    #define PCIEPHYCFG_RSV_A44			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP04_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane4 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z59		0xA45	//Reserved
    #define PCIEPHYCFG_RSV_A45			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z60		0xA46	//Reserved
    #define PCIEPHYCFG_RSV_A46			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z61		0xA47	//Reserved
    #define PCIEPHYCFG_RSV_A47			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE04		0xA48	//FAR-END Device Full Swing Value Lane04
    #define PCIEPHYCFG_RSV_A48			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_04			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE04		0xA49	//FAR-END Device Low Frequency Value Lane04
    #define PCIEPHYCFG_RSV_A49			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_04			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_04		0xA4A	//FAREND_TX_PRESET_04
    #define PCIEPHYCFG_RSV_A4A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_04_Z1			0xF	//HwInit/x/x/x Lane4 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_04		0xA4B	//FAREND_PRE_CURSOR_04
    #define PCIEPHYCFG_RSV_A4B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_04_Z1			0x3F	//HwInit/x/x/x Lane4 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_04		0xA4C	//FAREND_CURSOR_04
    #define PCIEPHYCFG_RSV_A4C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_04_Z1			0x3F	//HwInit/x/x/x Lane4 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_04		0xA4D	//FAREND_POST_CURSOR_04
    #define PCIEPHYCFG_RSV_A4D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_04_Z1			0x3F	//HwInit/x/x/x Lane4 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_04		0xA4E	//BIT_ERROR_RATE_04
    #define PCIEPHYCFG_BIT_ERROR_RATE_04			0xFF	//HwInit/x/x/x Lane4 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_04		0xA4F	//Farend Use TX Preset and RCV 04
    #define PCIEPHYCFG_RSV_A4F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_04			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_04			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_05		0xA50	//LEQ DC Output EPHY Lane 05
    #define PCIEPHYCFG_RSV_A50			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP05_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane5 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_05		0xA51	//LEQ HF Output EPHY Lane 05
    #define PCIEPHYCFG_RSV_A51			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP05_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane5 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_05		0xA52	//LEQ Offset Output EPHY Lane 05
    #define PCIEPHYCFG_RSV_A52			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP05_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane5 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_05		0xA53	//LEQ Weight1 Output EPHY Lane 05
    #define PCIEPHYCFG_RSV_A53			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP05_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane5 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_05		0xA54	//LEQ Weight2 Output EPHY Lane 05
    #define PCIEPHYCFG_RSV_A54			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP05_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane5 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z62		0xA55	//Reserved
    #define PCIEPHYCFG_RSV_A55			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z63		0xA56	//Reserved
    #define PCIEPHYCFG_RSV_A56			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z64		0xA57	//Reserved
    #define PCIEPHYCFG_RSV_A57			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE05		0xA58	//FAR-END Device Full Swing Value Lane05
    #define PCIEPHYCFG_RSV_A58			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_05			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE05		0xA59	//FAR-END Device Low Frequency Value Lane05
    #define PCIEPHYCFG_RSV_A59			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_05			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_05		0xA5A	//FAREND_TX_PRESET_05
    #define PCIEPHYCFG_RSV_A5A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_05_Z1			0xF	//HwInit/x/x/x Lane5 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_05		0xA5B	//FAREND_PRE_CURSOR_05
    #define PCIEPHYCFG_RSV_A5B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_05_Z1			0x3F	//HwInit/x/x/x Lane5 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_05		0xA5C	//FAREND_CURSOR_05
    #define PCIEPHYCFG_RSV_A5C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_05_Z1			0x3F	//HwInit/x/x/x Lane5 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_05		0xA5D	//FAREND_POST_CURSOR_05
    #define PCIEPHYCFG_RSV_A5D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_05_Z1			0x3F	//HwInit/x/x/x Lane5 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_05		0xA5E	//BIT_ERROR_RATE_05
    #define PCIEPHYCFG_BIT_ERROR_RATE_05			0xFF	//HwInit/x/x/x Lane5 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_05		0xA5F	//Farend Use TX Preset and RCV 05
    #define PCIEPHYCFG_RSV_A5F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_05			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_05			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_06		0xA60	//LEQ DC Output EPHY Lane 06
    #define PCIEPHYCFG_RSV_A60			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP06_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane6 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_06		0xA61	//LEQ HF Output EPHY Lane 06
    #define PCIEPHYCFG_RSV_A61			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP06_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane6 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_06		0xA62	//LEQ Offset Output EPHY Lane 06
    #define PCIEPHYCFG_RSV_A62			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP06_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane6 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_06		0xA63	//LEQ Weight1 Output EPHY Lane 06
    #define PCIEPHYCFG_RSV_A63			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP06_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane6 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_06		0xA64	//LEQ Weight2 Output EPHY Lane 06
    #define PCIEPHYCFG_RSV_A64			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP06_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane6 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z65		0xA65	//Reserved
    #define PCIEPHYCFG_RSV_A65			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z66		0xA66	//Reserved
    #define PCIEPHYCFG_RSV_A66			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z67		0xA67	//Reserved
    #define PCIEPHYCFG_RSV_A67			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE06		0xA68	//FAR-END Device Full Swing Value Lane06
    #define PCIEPHYCFG_RSV_A68			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_06			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE06		0xA69	//FAR-END Device Low Frequency Value Lane06
    #define PCIEPHYCFG_RSV_A69			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_06			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_06		0xA6A	//FAREND_TX_PRESET_06
    #define PCIEPHYCFG_RSV_A6A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_06_Z1			0xF	//HwInit/x/x/x Lane6 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_06		0xA6B	//FAREND_PRE_CURSOR_06
    #define PCIEPHYCFG_RSV_A6B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_06_Z1			0x3F	//HwInit/x/x/x Lane6 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_06		0xA6C	//FAREND_CURSOR_06
    #define PCIEPHYCFG_RSV_A6C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_06_Z1			0x3F	//HwInit/x/x/x Lane6 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_06		0xA6D	//FAREND_POST_CURSOR_06
    #define PCIEPHYCFG_RSV_A6D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_06_Z1			0x3F	//HwInit/x/x/x Lane6 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_06		0xA6E	//BIT_ERROR_RATE_06
    #define PCIEPHYCFG_BIT_ERROR_RATE_06			0xFF	//HwInit/x/x/x Lane6 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_06		0xA6F	//Farend Use TX Preset and RCV 06
    #define PCIEPHYCFG_RSV_A6F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_06			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_06			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHY_LANE_07		0xA70	//LEQ DC Output EPHY Lane 07
    #define PCIEPHYCFG_RSV_A70			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP07_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane7 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHY_LANE_07		0xA71	//LEQ HF Output EPHY Lane 07
    #define PCIEPHYCFG_RSV_A71			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP07_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane7 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHY_LANE_07		0xA72	//LEQ Offset Output EPHY Lane 07
    #define PCIEPHYCFG_RSV_A72			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP07_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane7 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHY_LANE_07		0xA73	//LEQ Weight1 Output EPHY Lane 07
    #define PCIEPHYCFG_RSV_A73			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP07_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane7 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHY_LANE_07		0xA74	//LEQ Weight2 Output EPHY Lane 07
    #define PCIEPHYCFG_RSV_A74			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP07_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane7 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z68		0xA75	//Reserved
    #define PCIEPHYCFG_RSV_A75			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z69		0xA76	//Reserved
    #define PCIEPHYCFG_RSV_A76			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z70		0xA77	//Reserved
    #define PCIEPHYCFG_RSV_A77			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE07		0xA78	//FAR-END Device Full Swing Value Lane07
    #define PCIEPHYCFG_RSV_A78			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_07			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE07		0xA79	//FAR-END Device Low Frequency Value Lane07
    #define PCIEPHYCFG_RSV_A79			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_07			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_07		0xA7A	//FAREND_TX_PRESET_07
    #define PCIEPHYCFG_RSV_A7A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_07_Z1			0xF	//HwInit/x/x/x Lane7 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_07		0xA7B	//FAREND_PRE_CURSOR_07
    #define PCIEPHYCFG_RSV_A7B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_07_Z1			0x3F	//HwInit/x/x/x Lane7 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_07		0xA7C	//FAREND_CURSOR_07
    #define PCIEPHYCFG_RSV_A7C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_07_Z1			0x3F	//HwInit/x/x/x Lane7 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_07		0xA7D	//FAREND_POST_CURSOR_07
    #define PCIEPHYCFG_RSV_A7D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_07_Z1			0x3F	//HwInit/x/x/x Lane7 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_07		0xA7E	//BIT_ERROR_RATE_07
    #define PCIEPHYCFG_BIT_ERROR_RATE_07			0xFF	//HwInit/x/x/x Lane7 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_07		0xA7F	//Farend Use TX Preset and RCV  07
    #define PCIEPHYCFG_RSV_A7F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_07			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_07			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_08		0xA80	//LEQ DC Output EPHYLane 08
    #define PCIEPHYCFG_RSV_A80			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP08_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_08		0xA81	//LEQ HF Output EPHYLane 08
    #define PCIEPHYCFG_RSV_A81			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP08_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_08		0xA82	//LEQ Offset Output EPHYLane 08
    #define PCIEPHYCFG_RSV_A82			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP08_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane0 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_08		0xA83	//LEQ Weight1 Output EPHYLane 08
    #define PCIEPHYCFG_RSV_A83			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP08_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane0 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_08		0xA84	//LEQ Weight2 Output EPHYLane 08
    #define PCIEPHYCFG_RSV_A84			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP08_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane0 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z71		0xA85	//Reserved
    #define PCIEPHYCFG_RSV_A85			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z72		0xA86	//Reserved
    #define PCIEPHYCFG_RSV_A86			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z73		0xA87	//Reserved
    #define PCIEPHYCFG_RSV_A87			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE08		0xA88	//FAR-END Device Full Swing Value Lane08
    #define PCIEPHYCFG_RSV_A88			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_08			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE08		0xA89	//FAR-END Device Low Frequency Value Lane08
    #define PCIEPHYCFG_RSV_A89			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_08			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_08		0xA8A	//FAREND_TX_PRESET_08
    #define PCIEPHYCFG_RSV_A8A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_08_Z1			0xF	//HwInit/x/x/x Lane0 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_08		0xA8B	//FAREND_PRE_CURSOR_08
    #define PCIEPHYCFG_RSV_A8B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_08_Z1			0x3F	//HwInit/x/x/x Lane0 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_08		0xA8C	//FAREND_CURSOR_08
    #define PCIEPHYCFG_RSV_A8C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_08_Z1			0x3F	//HwInit/x/x/x Lane0 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_08		0xA8D	//FAREND_POST_CURSOR_08
    #define PCIEPHYCFG_RSV_A8D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_08_Z1			0x3F	//HwInit/x/x/x Lane0 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_08		0xA8E	//BIT_ERROR_RATE_08
    #define PCIEPHYCFG_BIT_ERROR_RATE_08			0xFF	//HwInit/x/x/x Lane0 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE08		0xA8F	//Farend Use TX Preset and RCV LANE08
    #define PCIEPHYCFG_RSV_A8F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_08			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_08			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_09		0xA90	//LEQ DC Output EPHYLane 09
    #define PCIEPHYCFG_RSV_A90			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP09_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane09 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_09		0xA91	//LEQ HF Output EPHYLane 09
    #define PCIEPHYCFG_RSV_A91			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP09_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane09 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_09		0xA92	//LEQ Offset Output EPHYLane 09
    #define PCIEPHYCFG_RSV_A92			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP09_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane09 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_09		0xA93	//LEQ Weight1 Output EPHYLane 09
    #define PCIEPHYCFG_RSV_A93			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP09_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane09 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_09		0xA94	//LEQ Weight2 Output EPHYLane 09
    #define PCIEPHYCFG_RSV_A94			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP09_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane09 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z74		0xA95	//Reserved
    #define PCIEPHYCFG_RSV_A95			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z75		0xA96	//Reserved
    #define PCIEPHYCFG_RSV_A96			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z76		0xA97	//Reserved
    #define PCIEPHYCFG_RSV_A97			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE09		0xA98	//FAR-END Device Full Swing Value Lane09
    #define PCIEPHYCFG_RSV_A98			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_09			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE09		0xA99	//FAR-END Device Low Frequency Value Lane09
    #define PCIEPHYCFG_RSV_A99			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_09			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_09		0xA9A	//FAREND_TX_PRESET_09
    #define PCIEPHYCFG_RSV_A9A			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_09_Z1			0xF	//HwInit/x/x/x Lane09 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_09		0xA9B	//FAREND_PRE_CURSOR_09
    #define PCIEPHYCFG_RSV_A9B			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_09_Z1			0x3F	//HwInit/x/x/x Lane09 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_09		0xA9C	//FAREND_CURSOR_09
    #define PCIEPHYCFG_RSV_A9C			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_09_Z1			0x3F	//HwInit/x/x/x Lane09 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_09		0xA9D	//FAREND_POST_CURSOR_09
    #define PCIEPHYCFG_RSV_A9D			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_09_Z1			0x3F	//HwInit/x/x/x Lane09 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_09		0xA9E	//BIT_ERROR_RATE_09
    #define PCIEPHYCFG_BIT_ERROR_RATE_09			0xFF	//HwInit/x/x/x Lane09 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE09		0xA9F	//Farend Use TX Preset and RCV LANE09
    #define PCIEPHYCFG_RSV_A9F			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_09			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_09			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_10		0xAA0	//LEQ DC Output EPHYLane 10
    #define PCIEPHYCFG_RSV_AA0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP10_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 10 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_10		0xAA1	//LEQ HF Output EPHYLane 10
    #define PCIEPHYCFG_RSV_AA1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP10_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 10 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_10		0xAA2	//LEQ Offset Output EPHYLane 10
    #define PCIEPHYCFG_RSV_AA2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP10_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 10 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_10		0xAA3	//LEQ Weight1 Output EPHYLane 10
    #define PCIEPHYCFG_RSV_AA3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP10_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 10 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_10		0xAA4	//LEQ Weight2 Output EPHYLane 10
    #define PCIEPHYCFG_RSV_AA4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP10_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 10 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z77		0xAA5	//Reserved
    #define PCIEPHYCFG_RSV_AA5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z78		0xAA6	//Reserved
    #define PCIEPHYCFG_RSV_AA6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z79		0xAA7	//Reserved
    #define PCIEPHYCFG_RSV_AA7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE10		0xAA8	//FAR-END Device Full Swing Value Lane10
    #define PCIEPHYCFG_RSV_AA8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_10			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE10		0xAA9	//FAR-END Device Low Frequency Value Lane10
    #define PCIEPHYCFG_RSV_AA9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_10			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_10		0xAAA	//FAREND_TX_PRESET_10
    #define PCIEPHYCFG_RSV_AAA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_10_Z1			0xF	//HwInit/x/x/x Lane 10 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_10		0xAAB	//FAREND_PRE_CURSOR_10
    #define PCIEPHYCFG_RSV_AAB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_10_Z1			0x3F	//HwInit/x/x/x Lane 10 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_10		0xAAC	//FAREND_CURSOR_10
    #define PCIEPHYCFG_RSV_AAC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_10_Z1			0x3F	//HwInit/x/x/x Lane 10 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_10		0xAAD	//FAREND_POST_CURSOR_10
    #define PCIEPHYCFG_RSV_AAD			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_10_Z1			0x3F	//HwInit/x/x/x Lane 10 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_10		0xAAE	//BIT_ERROR_RATE_10
    #define PCIEPHYCFG_BIT_ERROR_RATE_10			0xFF	//HwInit/x/x/x Lane 10 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE10		0xAAF	//Farend Use TX Preset and RCV LANE10
    #define PCIEPHYCFG_RSV_AAF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_10			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_10			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_11		0xAB0	//LEQ DC Output EPHYLane 11
    #define PCIEPHYCFG_RSV_AB0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP11_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 11 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_11		0xAB1	//LEQ HF Output EPHYLane 11
    #define PCIEPHYCFG_RSV_AB1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP11_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 11 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_11		0xAB2	//LEQ Offset Output EPHYLane 11
    #define PCIEPHYCFG_RSV_AB2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP11_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 11 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_11		0xAB3	//LEQ Weight1 Output EPHYLane 11
    #define PCIEPHYCFG_RSV_AB3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP11_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 11 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_11		0xAB4	//LEQ Weight2 Output EPHYLane 11
    #define PCIEPHYCFG_RSV_AB4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP11_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 11 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z80		0xAB5	//Reserved
    #define PCIEPHYCFG_RSV_AB5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z81		0xAB6	//Reserved
    #define PCIEPHYCFG_RSV_AB6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z82		0xAB7	//Reserved
    #define PCIEPHYCFG_RSV_AB7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE11		0xAB8	//FAR-END Device Full Swing Value Lane11
    #define PCIEPHYCFG_RSV_AB8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_11			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE11		0xAB9	//FAR-END Device Low Frequency Value Lane11
    #define PCIEPHYCFG_RSV_AB9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_11			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_11		0xABA	//FAREND_TX_PRESET_11
    #define PCIEPHYCFG_RSV_ABA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_11_Z1			0xF	//HwInit/x/x/x Lane 11 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_11		0xABB	//FAREND_PRE_CURSOR_11
    #define PCIEPHYCFG_RSV_ABB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_11_Z1			0x3F	//HwInit/x/x/x Lane 11 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_11		0xABC	//FAREND_CURSOR_11
    #define PCIEPHYCFG_RSV_ABC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_11_Z1			0x3F	//HwInit/x/x/x Lane 11 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_11		0xABD	//FAREND_POST_CURSOR_11
    #define PCIEPHYCFG_RSV_ABD			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_11_Z1			0x3F	//HwInit/x/x/x Lane 11 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_11		0xABE	//BIT_ERROR_RATE_11
    #define PCIEPHYCFG_BIT_ERROR_RATE_11			0xFF	//HwInit/x/x/x Lane 11 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE11		0xABF	//Farend Use TX Preset and RCV LANE11
    #define PCIEPHYCFG_RSV_ABF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_11			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_11			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_12		0xAC0	//LEQ DC Output EPHYLane 12
    #define PCIEPHYCFG_RSV_AC0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP12_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 12 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_12		0xAC1	//LEQ HF Output EPHYLane 12
    #define PCIEPHYCFG_RSV_AC1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP12_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 12 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_12		0xAC2	//LEQ Offset Output EPHYLane 12
    #define PCIEPHYCFG_RSV_AC2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP12_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 12 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_12		0xAC3	//LEQ Weight1 Output EPHYLane 12
    #define PCIEPHYCFG_RSV_AC3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP12_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 12 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_12		0xAC4	//LEQ Weight2 Output EPHYLane 12
    #define PCIEPHYCFG_RSV_AC4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP12_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 12 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z83		0xAC5	//Reserved
    #define PCIEPHYCFG_RSV_AC5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z84		0xAC6	//Reserved
    #define PCIEPHYCFG_RSV_AC6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z85		0xAC7	//Reserved
    #define PCIEPHYCFG_RSV_AC7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE12		0xAC8	//FAR-END Device Full Swing Value Lane12
    #define PCIEPHYCFG_RSV_AC8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_12			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE12		0xAC9	//FAR-END Device Low Frequency Value Lane12
    #define PCIEPHYCFG_RSV_AC9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_12			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_12		0xACA	//FAREND_TX_PRESET_12
    #define PCIEPHYCFG_RSV_ACA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_12_Z1			0xF	//HwInit/x/x/x Lane 12 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_12		0xACB	//FAREND_PRE_CURSOR_12
    #define PCIEPHYCFG_RSV_ACB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_12_Z1			0x3F	//HwInit/x/x/x Lane 12 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_12		0xACC	//FAREND_CURSOR_12
    #define PCIEPHYCFG_RSV_ACC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_12_Z1			0x3F	//HwInit/x/x/x Lane 12 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_12		0xACD	//FAREND_POST_CURSOR_12
    #define PCIEPHYCFG_RSV_ACD			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_12_Z1			0x3F	//HwInit/x/x/x Lane 12 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_12		0xACE	//BIT_ERROR_RATE_12
    #define PCIEPHYCFG_BIT_ERROR_RATE_12			0xFF	//HwInit/x/x/x Lane 12 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE12		0xACF	//Farend Use TX Preset and RCV LANE12
    #define PCIEPHYCFG_RSV_ACF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_12			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_12			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_13		0xAD0	//LEQ DC Output EPHYLane 13
    #define PCIEPHYCFG_RSV_AD0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP13_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 13 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_13		0xAD1	//LEQ HF Output EPHYLane 13
    #define PCIEPHYCFG_RSV_AD1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP13_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 13 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_13		0xAD2	//LEQ Offset Output EPHYLane 13
    #define PCIEPHYCFG_RSV_AD2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP13_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 13 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_13		0xAD3	//LEQ Weight1 Output EPHYLane 13
    #define PCIEPHYCFG_RSV_AD3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP13_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 13 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_13		0xAD4	//LEQ Weight2 Output EPHYLane 13
    #define PCIEPHYCFG_RSV_AD4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP13_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 13 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z86		0xAD5	//Reserved
    #define PCIEPHYCFG_RSV_AD5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z87		0xAD6	//Reserved
    #define PCIEPHYCFG_RSV_AD6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z88		0xAD7	//Reserved
    #define PCIEPHYCFG_RSV_AD7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE13		0xAD8	//FAR-END Device Full Swing Value Lane13
    #define PCIEPHYCFG_RSV_AD8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_13			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE13		0xAD9	//FAR-END Device Low Frequency Value Lane13
    #define PCIEPHYCFG_RSV_AD9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_13			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_13		0xADA	//FAREND_TX_PRESET_13
    #define PCIEPHYCFG_RSV_ADA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_13_Z1			0xF	//HwInit/x/x/x Lane 13 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_13		0xADB	//FAREND_PRE_CURSOR_13
    #define PCIEPHYCFG_RSV_ADB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_13_Z1			0x3F	//HwInit/x/x/x Lane 13 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_13		0xADC	//FAREND_CURSOR_13
    #define PCIEPHYCFG_RSV_ADC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_13_Z1			0x3F	//HwInit/x/x/x Lane 13 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_13		0xADD	//FAREND_POST_CURSOR_13
    #define PCIEPHYCFG_RSV_ADD			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_13_Z1			0x3F	//HwInit/x/x/x Lane 13 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_13		0xADE	//BIT_ERROR_RATE_13
    #define PCIEPHYCFG_BIT_ERROR_RATE_13			0xFF	//HwInit/x/x/x Lane 13 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE13		0xADF	//Farend Use TX Preset and RCV LANE13
    #define PCIEPHYCFG_RSV_ADF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_13			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_13			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_14		0xAE0	//LEQ DC Output EPHYLane 14
    #define PCIEPHYCFG_RSV_AE0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP14_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 14 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_14		0xAE1	//LEQ HF Output EPHYLane 14
    #define PCIEPHYCFG_RSV_AE1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP14_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 14 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_14		0xAE2	//LEQ Offset Output EPHYLane 14
    #define PCIEPHYCFG_RSV_AE2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP14_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 14 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_14		0xAE3	//LEQ Weight1 Output EPHYLane 14
    #define PCIEPHYCFG_RSV_AE3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP14_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 14 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_14		0xAE4	//LEQ Weight2 Output EPHYLane 14
    #define PCIEPHYCFG_RSV_AE4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP14_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 14 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z89		0xAE5	//Reserved
    #define PCIEPHYCFG_RSV_AE5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z90		0xAE6	//Reserved
    #define PCIEPHYCFG_RSV_AE6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z91		0xAE7	//Reserved
    #define PCIEPHYCFG_RSV_AE7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE14		0xAE8	//FAR-END Device Full Swing Value Lane14
    #define PCIEPHYCFG_RSV_AE8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_14			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE14		0xAE9	//FAR-END Device Low Frequency Value Lane14
    #define PCIEPHYCFG_RSV_AE9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_14			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_14		0xAEA	//FAREND_TX_PRESET_14
    #define PCIEPHYCFG_RSV_AEA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_14_Z1			0xF	//HwInit/x/x/x Lane 14 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_14		0xAEB	//FAREND_PRE_CURSOR_14
    #define PCIEPHYCFG_RSV_AEB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_14_Z1			0x3F	//HwInit/x/x/x Lane 14 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_14		0xAEC	//FAREND_CURSOR_14
    #define PCIEPHYCFG_RSV_AEC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_14_Z1			0x3F	//HwInit/x/x/x Lane 14 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_14		0xAED	//FAREND_POST_CURSOR_14
    #define PCIEPHYCFG_RSV_AED			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_14_Z1			0x3F	//HwInit/x/x/x Lane 14 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_14		0xAEE	//BIT_ERROR_RATE_14
    #define PCIEPHYCFG_BIT_ERROR_RATE_14			0xFF	//HwInit/x/x/x Lane 14 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE14		0xAEF	//Farend Use TX Preset and RCV LANE14
    #define PCIEPHYCFG_RSV_AEF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_14			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_14			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_LEQ_DC_OUTPUT_EPHYLANE_15		0xAF0	//LEQ DC Output EPHYLane 15
    #define PCIEPHYCFG_RSV_AF0			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP15_DCOUT			0x1F	//HwInit/x/x/x EPHY Lane 15 LEQ DC Gain Output
#define PCIEPHYCFG_LEQ_HF_OUTPUT_EPHYLANE_15		0xAF1	//LEQ HF Output EPHYLane 15
    #define PCIEPHYCFG_RSV_AF1			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP15_HFOUT			0x1F	//HwInit/x/x/x EPHY Lane 15 LEQ HF Gain Output
#define PCIEPHYCFG_LEQ_OFFSET_OUTPUT_EPHYLANE_15		0xAF2	//LEQ Offset Output EPHYLane 15
    #define PCIEPHYCFG_RSV_AF2			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP15_OSOUT			0x1F	//HwInit/x/x/x EPHY Lane 15 LEQ OS Gain Output
#define PCIEPHYCFG_LEQ_WEIGHT1_OUTPUT_EPHYLANE_15		0xAF3	//LEQ Weight1 Output EPHYLane 15
    #define PCIEPHYCFG_RSV_AF3			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP15_W1OUT			0x1F	//HwInit/x/x/x EPHY Lane 15 DFE Weight1 Output
#define PCIEPHYCFG_LEQ_WEIGHT2_OUTPUT_EPHYLANE_15		0xAF4	//LEQ Weight2 Output EPHYLane 15
    #define PCIEPHYCFG_RSV_AF4			(BIT5 + BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_EP15_W2OUT			0x1F	//HwInit/x/x/x EPHY Lane 15 DFE Weight2 Output
#define PCIEPHYCFG_RESERVED_Z92		0xAF5	//Reserved
    #define PCIEPHYCFG_RSV_AF5			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z93		0xAF6	//Reserved
    #define PCIEPHYCFG_RSV_AF6			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z94		0xAF7	//Reserved
    #define PCIEPHYCFG_RSV_AF7			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_FAR_END_DEV_FULL_SWING_VALUE_LANE15		0xAF8	//FAR-END Device Full Swing Value Lane15
    #define PCIEPHYCFG_RSV_AF8			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_FS_15			0x3F	//HwInit/x/x/x FAR-END Device Full Swing Value
#define PCIEPHYCFG_FAR_END_DEV_LOW_FREQUENCY_VALUE_LANE15		0xAF9	//FAR-END Device Low Frequency Value Lane15
    #define PCIEPHYCFG_RSV_AF9			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_LF_15			0x3F	//HwInit/x/x/x FAR-END Device Low Frequency Value
#define PCIEPHYCFG_FAREND_TX_PRESET_15		0xAFA	//FAREND_TX_PRESET_15
    #define PCIEPHYCFG_RSV_AFA			0xF0	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_TX_PRESET_15_Z1			0xF	//HwInit/x/x/x Lane 15 Farend TX_PRESET
#define PCIEPHYCFG_FAREND_PRE_CURSOR_15		0xAFB	//FAREND_PRE_CURSOR_15
    #define PCIEPHYCFG_RSV_AFB			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_PRE_CURSOR_15_Z1			0x3F	//HwInit/x/x/x Lane 15 Farend PRE_CURSOR
#define PCIEPHYCFG_FAREND_CURSOR_15		0xAFC	//FAREND_CURSOR_15
    #define PCIEPHYCFG_RSV_AFC			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_CURSOR_15_Z1			0x3F	//HwInit/x/x/x Lane 15 Farend Cursor
#define PCIEPHYCFG_FAREND_POST_CURSOR_15		0xAFD	//FAREND_POST_CURSOR_15
    #define PCIEPHYCFG_RSV_AFD			(BIT6 + BIT7)	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_POST_CURSOR_15_Z1			0x3F	//HwInit/x/x/x Lane 15 Farend POST_CURSOR
#define PCIEPHYCFG_BIT_ERR_RATE_15		0xAFE	//BIT_ERROR_RATE_15
    #define PCIEPHYCFG_BIT_ERROR_RATE_15			0xFF	//HwInit/x/x/x Lane 15 Bit Error Rate
#define PCIEPHYCFG_FAREND_USE_TX_PRESET_AND_RCV_LANE15		0xAFF	//Farend Use TX Preset and RCV LANE15
    #define PCIEPHYCFG_RSV_AFF			0xFC	//0/R/x/x Reserved
    #define PCIEPHYCFG_FAREND_USE_TX_PRESET_15			BIT1	//HwInit/x/x/x Farend Use TX Preset
    #define PCIEPHYCFG_FAREND_RCV_15			BIT0	//HwInit/x/x/x Farend RCV
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE0		0xC00	//EQ INT to MCU PE0
    #define PCIEPHYCFG_RSV_C00			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE0		0xC01	//MCU Change EQ Setting PE0
    #define PCIEPHYCFG_RSV_C01			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE0			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE0		0xC02	//MCU Reset EQ Tuning PE0
    #define PCIEPHYCFG_RSV_C02			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE0			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE0			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE0		0xC03	//MCU Set EQ Tuning PE0
    #define PCIEPHYCFG_RSV_C03			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE0			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE0		0xC04	//MCU Work Finish PE0
    #define PCIEPHYCFG_RSV_C07			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE0			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C04			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE0			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE0		0xC08	//MCU INT_EQ Enable PE0
    #define PCIEPHYCFG_RSV_C08			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE0			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE0		0xC09	//R_EQPH1_BER_PE0
    #define PCIEPHYCFG_RSV_C09			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE0_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE0		0xC0A	//PHYLS State PE0
    #define PCIEPHYCFG_PHYLS_STATE_PE0_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE0		0xC0B	//Link and EP EQ REQ PE0
    #define PCIEPHYCFG_RSV_C0B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE0			BIT1	//0/x/x/x Link EQ REQ 
    #define PCIEPHYCFG_RSV_C0B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE1		0xC10	//EQ INT to MCU PE1
    #define PCIEPHYCFG_RSV_C10			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE1		0xC11	//MCU Change EQ Setting PE1
    #define PCIEPHYCFG_RSV_C11			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE1			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE1		0xC12	//MCU Reset EQ Tuning PE1
    #define PCIEPHYCFG_RSV_C12			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE1			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE1			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE1		0xC13	//MCU Set EQ Tuning PE1
    #define PCIEPHYCFG_RSV_C13			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE1			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE1		0xC14	//MCU Work Finish PE1
    #define PCIEPHYCFG_RSV_C17			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE1			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C14			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE1			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE1		0xC18	//MCU INT_EQ Enable PE1
    #define PCIEPHYCFG_RSV_C18			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE1			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE1		0xC19	//R_EQPH1_BER_PE1
    #define PCIEPHYCFG_RSV_C19			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE1_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE1		0xC1A	//PHYLS State PE1
    #define PCIEPHYCFG_PHYLS_STATE_PE1_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE1		0xC1B	//Link and EP EQ REQ PE1
    #define PCIEPHYCFG_RSV_C1B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE1			BIT1	//0/x/x/x Link EQ REQ 
    #define PCIEPHYCFG_RSV_C1B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE2		0xC20	//EQ INT to MCU PE2
    #define PCIEPHYCFG_RSV_C20			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE2		0xC21	//MCU Change EQ Setting PE2
    #define PCIEPHYCFG_RSV_C21			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE2			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE2		0xC22	//MCU Reset EQ Tuning PE2
    #define PCIEPHYCFG_RSV_C22			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE2			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE2			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE2		0xC23	//MCU Set EQ Tuning PE2
    #define PCIEPHYCFG_RSV_C23			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE2			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE2		0xC24	//MCU Work Finish PE2
    #define PCIEPHYCFG_RSV_C27			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE2			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C24			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE2			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE2		0xC28	//MCU INT_EQ Enable PE2
    #define PCIEPHYCFG_RSV_C28			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE2			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE2		0xC29	//R_EQPH1_BER_PE2
    #define PCIEPHYCFG_RSV_C29			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE2_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE2		0xC2A	//PHYLS State PE2
    #define PCIEPHYCFG_PHYLS_STATE_PE2_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE2		0xC2B	//Link and EP EQ REQ PE2
    #define PCIEPHYCFG_RSV_C2B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE2			BIT1	//0/x/x/x Link EQ REQ 
    #define PCIEPHYCFG_RSV_C2B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE3		0xC30	//EQ INT to MCU PE3
    #define PCIEPHYCFG_RSV_C30			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE3		0xC31	//MCU Change EQ Setting PE3
    #define PCIEPHYCFG_RSV_C31			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE3			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE3		0xC32	//MCU Reset EQ Tuning PE3
    #define PCIEPHYCFG_RSV_C32			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE3			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE3			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE3		0xC33	//MCU Set EQ Tuning PE3
    #define PCIEPHYCFG_RSV_C33			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE3			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE3		0xC34	//MCU Work Finish PE3
    #define PCIEPHYCFG_RSV_C37			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE3			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C34			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE3			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE3		0xC38	//MCU INT_EQ Enable PE3
    #define PCIEPHYCFG_RSV_C38			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE3			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE3		0xC39	//R_EQPH1_BER_PE3
    #define PCIEPHYCFG_RSV_C39			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE3_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE3		0xC3A	//PHYLS State PE3
    #define PCIEPHYCFG_PHYLS_STATE_PE3_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE3		0xC3B	//Link and EP EQ REQ PE3
    #define PCIEPHYCFG_RSV_C3B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE3			BIT1	//0/x/x/x Link EQ REQ
    #define PCIEPHYCFG_RSV_C3B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE4		0xC40	//EQ INT to MCU PE4
    #define PCIEPHYCFG_RSV_C40			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE4		0xC41	//MCU Change EQ Setting PE4
    #define PCIEPHYCFG_RSV_C41			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE4			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE4		0xC42	//MCU Reset EQ Tuning PE4
    #define PCIEPHYCFG_RSV_C42			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE4			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE4			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE4		0xC43	//MCU Set EQ Tuning PE4
    #define PCIEPHYCFG_RSV_C43			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE4			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE4		0xC44	//MCU Work Finish PE4
    #define PCIEPHYCFG_RSV_C47			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE4			BIT8	//HwInit/x/x/x EQ Result Is Ready for MCU
    #define PCIEPHYCFG_RSV_C44			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE4			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE4		0xC48	//MCU INT_EQ Enable PE4
    #define PCIEPHYCFG_RSV_C48			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE4			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE4		0xC49	//R_EQPH1_BER_PE4
    #define PCIEPHYCFG_RSV_C49			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE4_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE4		0xC4A	//PHYLS State PE4
    #define PCIEPHYCFG_PHYLS_STATE_PE4_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE4		0xC4B	//Link and EP EQ REQ PE4
    #define PCIEPHYCFG_RSV_C4B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE4			BIT1	//0/x/x/x Link EQ REQ 
    #define PCIEPHYCFG_RSV_C4B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE5		0xC50	//EQ INT to MCU PE5
    #define PCIEPHYCFG_RSV_C50			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE5		0xC51	//MCU Change EQ Setting PE5
    #define PCIEPHYCFG_RSV_C51			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE5			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE5		0xC52	//MCU Reset EQ Tuning PE5
    #define PCIEPHYCFG_RSV_C52			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE5			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE5			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE5		0xC53	//MCU Set EQ Tuning PE5
    #define PCIEPHYCFG_RSV_C53			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE5			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE5		0xC54	//MCU Work Finish PE5
    #define PCIEPHYCFG_RSV_C57			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE5			BIT8	//HwInit/x/x/x EQ Result Is Ready for MCU
    #define PCIEPHYCFG_RSV_C54			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE5			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE5		0xC58	//MCU INT_EQ Enable PE5
    #define PCIEPHYCFG_RSV_C58			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE5			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_R_EQPH1_BER_PE5		0xC59	//R_EQPH1_BER_PE5
    #define PCIEPHYCFG_RSV_C59			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE5_Z1			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE5		0xC5A	//PHYLS State PE5
    #define PCIEPHYCFG_PHYLS_STATE_PE5_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE5		0xC5B	//Link and EP EQ REQ PE5
    #define PCIEPHYCFG_RSV_C5B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE5			BIT1	//0/x/x/x Link EQ REQ
    #define PCIEPHYCFG_RSV_C5B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE6		0xC60	//EQ INT to MCU PE6
    #define PCIEPHYCFG_RSV_C60			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE6		0xC61	//MCU Change EQ Setting PE6
    #define PCIEPHYCFG_RSV_C61			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE6			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE6		0xC62	//MCU Reset EQ Tuning PE6
    #define PCIEPHYCFG_RSV_C62			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE6			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE6			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE6		0xC63	//MCU Set EQ Tuning PE6
    #define PCIEPHYCFG_RSV_C63			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE6			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE6		0xC64	//MCU Work Finish PE6
    #define PCIEPHYCFG_RSV_C67			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE6			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C64			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE6			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE6		0xC68	//MCU INT_EQ Enable PE6
    #define PCIEPHYCFG_RSV_C68			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE6			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_CHECK_MORE_DATA_IN_EQ_PHASE_1		0xC69	//Check More Data in EQ Phase 1
    #define PCIEPHYCFG_RSV_C69			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE6			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE6		0xC6A	//PHYLS State PE6
    #define PCIEPHYCFG_PHYLS_STATE_PE6_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE6		0xC6B	//Link and EP EQ REQ PE6
    #define PCIEPHYCFG_RSV_C6B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE6			BIT1	//0/x/x/x Link EQ REQ
    #define PCIEPHYCFG_RSV_C6B_0			BIT0	//0/x/x/x Reserved
#define PCIEPHYCFG_EQ_INT_TO_MCU_PE7		0xC70	//EQ INT to MCU PE7
    #define PCIEPHYCFG_RSV_C70			0xFF	//0/R/x/x Reserved
#define PCIEPHYCFG_MCU_CHANGE_EQ_SETTING_PE7		0xC71	//MCU Change EQ Setting PE7
    #define PCIEPHYCFG_RSV_C71			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CHANGE_EQ_PE7			BIT0	//0/X/x/x MCU Change Preset or Cursor
#define PCIEPHYCFG_MCU_RESET_EQ_TUNING_PE7		0xC72	//MCU Reset EQ Tuning PE7
    #define PCIEPHYCFG_RSV_C72			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNEN_PE7			BIT1	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_P1_OR_EQTNRSTB_PE7			BIT0	//1b/x/x/x MCU Sets RXPWR into P1 or Controls EQTNRSTB to Reset EQ Tuning.
#define PCIEPHYCFG_MCU_SET_EQ_TUNING_PE7		0xC73	//MCU Set EQ Tuning PE7
    #define PCIEPHYCFG_RSV_C73			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQCTL_SEL_PE7			BIT0	//0/x/x/x EQ Active Method Select
#define PCIEPHYCFG_MCU_WORK_FINISH_PE7		0xC74	//MCU Work Finish PE7
    #define PCIEPHYCFG_RSV_C77			0xFFFFFE00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EQ_RESULT_DONE_PE7			BIT8	//HwInit/x/x/x EQ Result is Ready for MCU
    #define PCIEPHYCFG_RSV_C74			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_DONE_PE7			BIT0	//0/x/x/x MCU set to 1 after EQ Job Finish
#define PCIEPHYCFG_MCU_INT_EQ_ENABLE_PE7		0xC78	//MCU INT_EQ Enable PE7
    #define PCIEPHYCFG_RSV_C78			0xFE	//0/x/x/x Reserved
    #define PCIEPHYCFG_PF_EQ_REQ_EN_PE7			BIT0	//1b/x/x/x MCU INT_EQ Enable 
#define PCIEPHYCFG_CHECK_MORE_DATA_IN_EQ_PHASE_1_Z1		0xC79	//Check More Data in EQ Phase 1
    #define PCIEPHYCFG_RSV_C79			0xFE	//0/R/x/x Reserved
    #define PCIEPHYCFG_R_EQPH1_BER_PE7			BIT0	//1b/x/x/x Check More Data in EQ Phase 1, so MCU can Get Real Bit Error Rate in Phase 1
#define PCIEPHYCFG_PHYLS_STATE_PE7		0xC7A	//PHYLS State PE7
    #define PCIEPHYCFG_PHYLS_STATE_PE7_Z1			0xFF	//HwInit/x/x/x PHYLS State
#define PCIEPHYCFG_LINK_AND_EP_EQ_REQ_PE7		0xC7B	//Link and EP EQ REQ PE7
    #define PCIEPHYCFG_RSV_C7B			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_LINK_EQ_REQ_PE7			BIT1	//0/x/x/x Link EQ REQ
    #define PCIEPHYCFG_RSV_C7B_0			BIT0	//0/x/x/x Reserved
//PCIEEPHYCFG
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX00		0x0D00	//TX Swing Table Lane00 - Index00
    #define PCIEEPHYCFG_RSV00_0D00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX01		0x0D04	//TX Swing Table Lane00 - Index01
    #define PCIEEPHYCFG_RSV00_0D04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX02		0x0D08	//TX Swing Table Lane00 - Index02
    #define PCIEEPHYCFG_RSV00_0D08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX03		0x0D0C	//TX Swing Table Lane00 - Index03
    #define PCIEEPHYCFG_RSV00_0D0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX04		0x0D10	//TX Swing Table Lane00 - Index04
    #define PCIEEPHYCFG_RSV00_0D10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX05		0x0D14	//TX Swing Table Lane00 - Index05
    #define PCIEEPHYCFG_RSV00_0D14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX06		0x0D18	//TX Swing Table Lane00 - Index06
    #define PCIEEPHYCFG_RSV00_0D18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX07		0x0D1C	//TX Swing Table Lane00 - Index07
    #define PCIEEPHYCFG_RSV00_0D1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX08		0x0D20	//TX Swing Table Lane00 - Index08
    #define PCIEEPHYCFG_RSV00_0D20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX09		0x0D24	//TX Swing Table Lane00 - Index09
    #define PCIEEPHYCFG_RSV00_0D24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX10		0x0D28	//TX Swing Table Lane00 - Index10
    #define PCIEEPHYCFG_RSV00_0D28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX11		0x0D2C	//TX Swing Table Lane00 - Index11
    #define PCIEEPHYCFG_RSV00_0D2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX12		0x0D30	//TX Swing Table Lane00 - Index12
    #define PCIEEPHYCFG_RSV00_0D30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX13		0x0D34	//TX Swing Table Lane00 - Index13
    #define PCIEEPHYCFG_RSV00_0D34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX14		0x0D38	//TX Swing Table Lane00 - Index14
    #define PCIEEPHYCFG_RSV00_0D38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX15		0x0D3C	//TX Swing Table Lane00 - Index15
    #define PCIEEPHYCFG_RSV00_0D3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX16		0x0D40	//TX Swing Table Lane00 - Index16
    #define PCIEEPHYCFG_RSV00_0D40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX17		0x0D44	//TX Swing Table Lane00 - Index17
    #define PCIEEPHYCFG_RSV00_0D44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX18		0x0D48	//TX Swing Table Lane00 - Index18
    #define PCIEEPHYCFG_RSV00_0D48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX19		0x0D4C	//TX Swing Table Lane00 - Index19
    #define PCIEEPHYCFG_RSV00_0D4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX20		0x0D50	//TX Swing Table Lane00 - Index20
    #define PCIEEPHYCFG_RSV00_0D50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX21		0x0D54	//TX Swing Table Lane00 - Index21
    #define PCIEEPHYCFG_RSV00_0D54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX22		0x0D58	//TX Swing Table Lane00 - Index22
    #define PCIEEPHYCFG_RSV00_0D58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX23		0x0D5C	//TX Swing Table Lane00 - Index23
    #define PCIEEPHYCFG_RSV00_0D5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX24		0x0D60	//TX Swing Table Lane00 - Index24
    #define PCIEEPHYCFG_RSV00_0D60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX25		0x0D64	//TX Swing Table Lane00 - Index25
    #define PCIEEPHYCFG_RSV00_0D64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX26		0x0D68	//TX Swing Table Lane00 - Index26
    #define PCIEEPHYCFG_RSV00_0D68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX27		0x0D6C	//TX Swing Table Lane00 - Index27
    #define PCIEEPHYCFG_RSV00_0D6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX28		0x0D70	//TX Swing Table Lane00 - Index28
    #define PCIEEPHYCFG_RSV00_0D70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX29		0x0D74	//TX Swing Table Lane00 - Index29
    #define PCIEEPHYCFG_RSV00_0D74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX30		0x0D78	//TX Swing Table Lane00 - Index30
    #define PCIEEPHYCFG_RSV00_0D78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX31		0x0D7C	//TX Swing Table Lane00 - Index31
    #define PCIEEPHYCFG_RSV00_0D7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX32		0x0D80	//TX Swing Table Lane00 - Index32
    #define PCIEEPHYCFG_RSV00_0D80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX33		0x0D84	//TX Swing Table Lane00 - Index33
    #define PCIEEPHYCFG_RSV00_0D84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE00_INDEX34		0x0D88	//TX Swing Table Lane00 - Index34
    #define PCIEEPHYCFG_RSV00_0D88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0D88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0D88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0D88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX00		0x0E00	//TX Swing Table Lane01 - Index00
    #define PCIEEPHYCFG_RSV00_0E00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX01		0x0E04	//TX Swing Table Lane01 - Index01
    #define PCIEEPHYCFG_RSV00_0E04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX02		0x0E08	//TX Swing Table Lane01 - Index02
    #define PCIEEPHYCFG_RSV00_0E08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX03		0x0E0C	//TX Swing Table Lane01 - Index03
    #define PCIEEPHYCFG_RSV00_0E0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX04		0x0E10	//TX Swing Table Lane01 - Index04
    #define PCIEEPHYCFG_RSV00_0E10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX05		0x0E14	//TX Swing Table Lane01 - Index05
    #define PCIEEPHYCFG_RSV00_0E14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX06		0x0E18	//TX Swing Table Lane01 - Index06
    #define PCIEEPHYCFG_RSV00_0E18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX07		0x0E1C	//TX Swing Table Lane01 - Index07
    #define PCIEEPHYCFG_RSV00_0E1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX08		0x0E20	//TX Swing Table Lane01 - Index08
    #define PCIEEPHYCFG_RSV00_0E20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX09		0x0E24	//TX Swing Table Lane01 - Index09
    #define PCIEEPHYCFG_RSV00_0E24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX10		0x0E28	//TX Swing Table Lane01 - Index10
    #define PCIEEPHYCFG_RSV00_0E28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX11		0x0E2C	//TX Swing Table Lane01 - Index11
    #define PCIEEPHYCFG_RSV00_0E2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX12		0x0E30	//TX Swing Table Lane01 - Index12
    #define PCIEEPHYCFG_RSV00_0E30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX13		0x0E34	//TX Swing Table Lane01 - Index13
    #define PCIEEPHYCFG_RSV00_0E34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX14		0x0E38	//TX Swing Table Lane01 - Index14
    #define PCIEEPHYCFG_RSV00_0E38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX15		0x0E3C	//TX Swing Table Lane01 - Index15
    #define PCIEEPHYCFG_RSV00_0E3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX16		0x0E40	//TX Swing Table Lane01 - Index16
    #define PCIEEPHYCFG_RSV00_0E40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX17		0x0E44	//TX Swing Table Lane01 - Index17
    #define PCIEEPHYCFG_RSV00_0E44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX18		0x0E48	//TX Swing Table Lane01 - Index18
    #define PCIEEPHYCFG_RSV00_0E48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX19		0x0E4C	//TX Swing Table Lane01 - Index19
    #define PCIEEPHYCFG_RSV00_0E4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX20		0x0E50	//TX Swing Table Lane01 - Index20
    #define PCIEEPHYCFG_RSV00_0E50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX21		0x0E54	//TX Swing Table Lane01 - Index21
    #define PCIEEPHYCFG_RSV00_0E54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX22		0x0E58	//TX Swing Table Lane01 - Index22
    #define PCIEEPHYCFG_RSV00_0E58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX23		0x0E5C	//TX Swing Table Lane01 - Index23
    #define PCIEEPHYCFG_RSV00_0E5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX24		0x0E60	//TX Swing Table Lane01 - Index24
    #define PCIEEPHYCFG_RSV00_0E60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX25		0x0E64	//TX Swing Table Lane01 - Index25
    #define PCIEEPHYCFG_RSV00_0E64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX26		0x0E68	//TX Swing Table Lane01 - Index26
    #define PCIEEPHYCFG_RSV00_0E68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX27		0x0E6C	//TX Swing Table Lane01 - Index27
    #define PCIEEPHYCFG_RSV00_0E6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX28		0x0E70	//TX Swing Table Lane01 - Index28
    #define PCIEEPHYCFG_RSV00_0E70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX29		0x0E74	//TX Swing Table Lane01 - Index29
    #define PCIEEPHYCFG_RSV00_0E74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX30		0x0E78	//TX Swing Table Lane01 - Index30
    #define PCIEEPHYCFG_RSV00_0E78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX31		0x0E7C	//TX Swing Table Lane01 - Index31
    #define PCIEEPHYCFG_RSV00_0E7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX32		0x0E80	//TX Swing Table Lane01 - Index32
    #define PCIEEPHYCFG_RSV00_0E80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX33		0x0E84	//TX Swing Table Lane01 - Index33
    #define PCIEEPHYCFG_RSV00_0E84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE01_INDEX34		0x0E88	//TX Swing Table Lane01 - Index34
    #define PCIEEPHYCFG_RSV00_0E88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0E88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0E88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0E88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX00		0x0F00	//TX Swing Table Lane02 - Index00
    #define PCIEEPHYCFG_RSV00_0F00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX01		0x0F04	//TX Swing Table Lane02 - Index01
    #define PCIEEPHYCFG_RSV00_0F04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX02		0x0F08	//TX Swing Table Lane02 - Index02
    #define PCIEEPHYCFG_RSV00_0F08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX03		0x0F0C	//TX Swing Table Lane02 - Index03
    #define PCIEEPHYCFG_RSV00_0F0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX04		0x0F10	//TX Swing Table Lane02 - Index04
    #define PCIEEPHYCFG_RSV00_0F10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX05		0x0F14	//TX Swing Table Lane02 - Index05
    #define PCIEEPHYCFG_RSV00_0F14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX06		0x0F18	//TX Swing Table Lane02 - Index06
    #define PCIEEPHYCFG_RSV00_0F18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX07		0x0F1C	//TX Swing Table Lane02 - Index07
    #define PCIEEPHYCFG_RSV00_0F1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX08		0x0F20	//TX Swing Table Lane02 - Index08
    #define PCIEEPHYCFG_RSV00_0F20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX09		0x0F24	//TX Swing Table Lane02 - Index09
    #define PCIEEPHYCFG_RSV00_0F24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX10		0x0F28	//TX Swing Table Lane02 - Index10
    #define PCIEEPHYCFG_RSV00_0F28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX11		0x0F2C	//TX Swing Table Lane02 - Index11
    #define PCIEEPHYCFG_RSV00_0F2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX12		0x0F30	//TX Swing Table Lane02 - Index12
    #define PCIEEPHYCFG_RSV00_0F30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX13		0x0F34	//TX Swing Table Lane02 - Index13
    #define PCIEEPHYCFG_RSV00_0F34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX14		0x0F38	//TX Swing Table Lane02 - Index14
    #define PCIEEPHYCFG_RSV00_0F38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX15		0x0F3C	//TX Swing Table Lane02 - Index15
    #define PCIEEPHYCFG_RSV00_0F3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX16		0x0F40	//TX Swing Table Lane02 - Index16
    #define PCIEEPHYCFG_RSV00_0F40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX17		0x0F44	//TX Swing Table Lane02 - Index17
    #define PCIEEPHYCFG_RSV00_0F44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX18		0x0F48	//TX Swing Table Lane02 - Index18
    #define PCIEEPHYCFG_RSV00_0F48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX19		0x0F4C	//TX Swing Table Lane02 - Index19
    #define PCIEEPHYCFG_RSV00_0F4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX20		0x0F50	//TX Swing Table Lane02 - Index20
    #define PCIEEPHYCFG_RSV00_0F50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX21		0x0F54	//TX Swing Table Lane02 - Index21
    #define PCIEEPHYCFG_RSV00_0F54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX22		0x0F58	//TX Swing Table Lane02 - Index22
    #define PCIEEPHYCFG_RSV00_0F58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX23		0x0F5C	//TX Swing Table Lane02 - Index23
    #define PCIEEPHYCFG_RSV00_0F5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX24		0x0F60	//TX Swing Table Lane02 - Index24
    #define PCIEEPHYCFG_RSV00_0F60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX25		0x0F64	//TX Swing Table Lane02 - Index25
    #define PCIEEPHYCFG_RSV00_0F64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX26		0x0F68	//TX Swing Table Lane02 - Index26
    #define PCIEEPHYCFG_RSV00_0F68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX27		0x0F6C	//TX Swing Table Lane02 - Index27
    #define PCIEEPHYCFG_RSV00_0F6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX28		0x0F70	//TX Swing Table Lane02 - Index28
    #define PCIEEPHYCFG_RSV00_0F70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX29		0x0F74	//TX Swing Table Lane02 - Index29
    #define PCIEEPHYCFG_RSV00_0F74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX30		0x0F78	//TX Swing Table Lane02 - Index30
    #define PCIEEPHYCFG_RSV00_0F78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX31		0x0F7C	//TX Swing Table Lane02 - Index31
    #define PCIEEPHYCFG_RSV00_0F7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX32		0x0F80	//TX Swing Table Lane02 - Index32
    #define PCIEEPHYCFG_RSV00_0F80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX33		0x0F84	//TX Swing Table Lane02 - Index33
    #define PCIEEPHYCFG_RSV00_0F84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE02_INDEX34		0x0F88	//TX Swing Table Lane02 - Index34
    #define PCIEEPHYCFG_RSV00_0F88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_0F88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_0F88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_0F88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX00		0x1000	//TX Swing Table Lane03 - Index00
    #define PCIEEPHYCFG_RSV00_1000_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1000_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1000_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1000_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX01		0x1004	//TX Swing Table Lane03 - Index01
    #define PCIEEPHYCFG_RSV00_1004_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1004_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1004_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1004_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX02		0x1008	//TX Swing Table Lane03 - Index02
    #define PCIEEPHYCFG_RSV00_1008_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1008_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1008_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1008_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX03		0x100C	//TX Swing Table Lane03 - Index03
    #define PCIEEPHYCFG_RSV00_100C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_100C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_100C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_100C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX04		0x1010	//TX Swing Table Lane03 - Index04
    #define PCIEEPHYCFG_RSV00_1010_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1010_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1010_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1010_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX05		0x1014	//TX Swing Table Lane03 - Index05
    #define PCIEEPHYCFG_RSV00_1014_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1014_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1014_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1014_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX06		0x1018	//TX Swing Table Lane03 - Index06
    #define PCIEEPHYCFG_RSV00_1018_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1018_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1018_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1018_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX07		0x101C	//TX Swing Table Lane03 - Index07
    #define PCIEEPHYCFG_RSV00_101C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_101C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_101C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_101C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX08		0x1020	//TX Swing Table Lane03 - Index08
    #define PCIEEPHYCFG_RSV00_1020_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1020_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1020_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1020_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX09		0x1024	//TX Swing Table Lane03 - Index09
    #define PCIEEPHYCFG_RSV00_1024_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1024_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1024_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1024_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX10		0x1028	//TX Swing Table Lane03 - Index10
    #define PCIEEPHYCFG_RSV00_1028_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1028_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1028_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1028_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX11		0x102C	//TX Swing Table Lane03 - Index11
    #define PCIEEPHYCFG_RSV00_102C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_102C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_102C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_102C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX12		0x1030	//TX Swing Table Lane03 - Index12
    #define PCIEEPHYCFG_RSV00_1030_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1030_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1030_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1030_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX13		0x1034	//TX Swing Table Lane03 - Index13
    #define PCIEEPHYCFG_RSV00_1034_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1034_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1034_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1034_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX14		0x1038	//TX Swing Table Lane03 - Index14
    #define PCIEEPHYCFG_RSV00_1038_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1038_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1038_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1038_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX15		0x103C	//TX Swing Table Lane03 - Index15
    #define PCIEEPHYCFG_RSV00_103C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_103C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_103C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_103C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX16		0x1040	//TX Swing Table Lane03 - Index16
    #define PCIEEPHYCFG_RSV00_1040_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1040_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1040_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1040_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX17		0x1044	//TX Swing Table Lane03 - Index17
    #define PCIEEPHYCFG_RSV00_1044_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1044_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1044_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1044_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX18		0x1048	//TX Swing Table Lane03 - Index18
    #define PCIEEPHYCFG_RSV00_1048_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1048_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1048_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1048_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX19		0x104C	//TX Swing Table Lane03 - Index19
    #define PCIEEPHYCFG_RSV00_104C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_104C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_104C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_104C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX20		0x1050	//TX Swing Table Lane03 - Index20
    #define PCIEEPHYCFG_RSV00_1050_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1050_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1050_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1050_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX21		0x1054	//TX Swing Table Lane03 - Index21
    #define PCIEEPHYCFG_RSV00_1054_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1054_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1054_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1054_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX22		0x1058	//TX Swing Table Lane03 - Index22
    #define PCIEEPHYCFG_RSV00_1058_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1058_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1058_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1058_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX23		0x105C	//TX Swing Table Lane03 - Index23
    #define PCIEEPHYCFG_RSV00_105C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_105C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_105C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_105C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX24		0x1060	//TX Swing Table Lane03 - Index24
    #define PCIEEPHYCFG_RSV00_1060_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1060_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1060_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1060_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX25		0x1064	//TX Swing Table Lane03 - Index25
    #define PCIEEPHYCFG_RSV00_1064_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1064_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1064_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1064_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX26		0x1068	//TX Swing Table Lane03 - Index26
    #define PCIEEPHYCFG_RSV00_1068_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1068_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1068_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1068_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX27		0x106C	//TX Swing Table Lane03 - Index27
    #define PCIEEPHYCFG_RSV00_106C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_106C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_106C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_106C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX28		0x1070	//TX Swing Table Lane03 - Index28
    #define PCIEEPHYCFG_RSV00_1070_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1070_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1070_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1070_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX29		0x1074	//TX Swing Table Lane03 - Index29
    #define PCIEEPHYCFG_RSV00_1074_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1074_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1074_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1074_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX30		0x1078	//TX Swing Table Lane03 - Index30
    #define PCIEEPHYCFG_RSV00_1078_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1078_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1078_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1078_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX31		0x107C	//TX Swing Table Lane03 - Index31
    #define PCIEEPHYCFG_RSV00_107C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_107C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_107C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_107C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX32		0x1080	//TX Swing Table Lane03 - Index32
    #define PCIEEPHYCFG_RSV00_1080_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1080_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1080_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1080_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX33		0x1084	//TX Swing Table Lane03 - Index33
    #define PCIEEPHYCFG_RSV00_1084_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1084_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1084_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1084_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE03_INDEX34		0x1088	//TX Swing Table Lane03 - Index34
    #define PCIEEPHYCFG_RSV00_1088_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1088_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1088_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1088_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX00		0x1100	//TX Swing Table Lane04 - Index00
    #define PCIEEPHYCFG_RSV00_1100_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1100_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1100_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1100_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX01		0x1104	//TX Swing Table Lane04 - Index01
    #define PCIEEPHYCFG_RSV00_1104_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1104_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1104_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1104_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX02		0x1108	//TX Swing Table Lane04 - Index02
    #define PCIEEPHYCFG_RSV00_1108_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1108_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1108_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1108_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX03		0x110C	//TX Swing Table Lane04 - Index03
    #define PCIEEPHYCFG_RSV00_110C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_110C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_110C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_110C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX04		0x1110	//TX Swing Table Lane04 - Index04
    #define PCIEEPHYCFG_RSV00_1110_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1110_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1110_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1110_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX05		0x1114	//TX Swing Table Lane04 - Index05
    #define PCIEEPHYCFG_RSV00_1114_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1114_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1114_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1114_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX06		0x1118	//TX Swing Table Lane04 - Index06
    #define PCIEEPHYCFG_RSV00_1118_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1118_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1118_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1118_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX07		0x111C	//TX Swing Table Lane04 - Index07
    #define PCIEEPHYCFG_RSV00_111C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_111C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_111C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_111C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX08		0x1120	//TX Swing Table Lane04 - Index08
    #define PCIEEPHYCFG_RSV00_1120_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1120_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1120_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1120_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX09		0x1124	//TX Swing Table Lane04 - Index09
    #define PCIEEPHYCFG_RSV00_1124_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1124_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1124_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1124_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX10		0x1128	//TX Swing Table Lane04 - Index10
    #define PCIEEPHYCFG_RSV00_1128_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1128_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1128_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1128_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX11		0x112C	//TX Swing Table Lane04 - Index11
    #define PCIEEPHYCFG_RSV00_112C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_112C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_112C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_112C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX12		0x1130	//TX Swing Table Lane04 - Index12
    #define PCIEEPHYCFG_RSV00_1130_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1130_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1130_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1130_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX13		0x1134	//TX Swing Table Lane04 - Index13
    #define PCIEEPHYCFG_RSV00_1134_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1134_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1134_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1134_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX14		0x1138	//TX Swing Table Lane04 - Index14
    #define PCIEEPHYCFG_RSV00_1138_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1138_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1138_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1138_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX15		0x113C	//TX Swing Table Lane04 - Index15
    #define PCIEEPHYCFG_RSV00_113C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_113C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_113C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_113C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX16		0x1140	//TX Swing Table Lane04 - Index16
    #define PCIEEPHYCFG_RSV00_1140_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1140_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1140_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1140_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX17		0x1144	//TX Swing Table Lane04 - Index17
    #define PCIEEPHYCFG_RSV00_1144_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1144_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1144_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1144_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX18		0x1148	//TX Swing Table Lane04 - Index18
    #define PCIEEPHYCFG_RSV00_1148_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1148_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1148_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1148_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX19		0x114C	//TX Swing Table Lane04 - Index19
    #define PCIEEPHYCFG_RSV00_114C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_114C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_114C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_114C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX20		0x1150	//TX Swing Table Lane04 - Index20
    #define PCIEEPHYCFG_RSV00_1150_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1150_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1150_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1150_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX21		0x1154	//TX Swing Table Lane04 - Index21
    #define PCIEEPHYCFG_RSV00_1154_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1154_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1154_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1154_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX22		0x1158	//TX Swing Table Lane04 - Index22
    #define PCIEEPHYCFG_RSV00_1158_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1158_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1158_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1158_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX23		0x115C	//TX Swing Table Lane04 - Index23
    #define PCIEEPHYCFG_RSV00_115C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_115C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_115C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_115C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX24		0x1160	//TX Swing Table Lane04 - Index24
    #define PCIEEPHYCFG_RSV00_1160_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1160_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1160_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1160_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX25		0x1164	//TX Swing Table Lane04 - Index25
    #define PCIEEPHYCFG_RSV00_1164_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1164_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1164_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1164_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX26		0x1168	//TX Swing Table Lane04 - Index26
    #define PCIEEPHYCFG_RSV00_1168_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1168_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1168_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1168_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX27		0x116C	//TX Swing Table Lane04 - Index27
    #define PCIEEPHYCFG_RSV00_116C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_116C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_116C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_116C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX28		0x1170	//TX Swing Table Lane04 - Index28
    #define PCIEEPHYCFG_RSV00_1170_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1170_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1170_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1170_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX29		0x1174	//TX Swing Table Lane04 - Index29
    #define PCIEEPHYCFG_RSV00_1174_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1174_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1174_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1174_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX30		0x1178	//TX Swing Table Lane04 - Index30
    #define PCIEEPHYCFG_RSV00_1178_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1178_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1178_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1178_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX31		0x117C	//TX Swing Table Lane04 - Index31
    #define PCIEEPHYCFG_RSV00_117C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_117C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_117C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_117C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX32		0x1180	//TX Swing Table Lane04 - Index32
    #define PCIEEPHYCFG_RSV00_1180_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1180_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1180_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1180_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX33		0x1184	//TX Swing Table Lane04 - Index33
    #define PCIEEPHYCFG_RSV00_1184_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1184_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1184_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1184_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE04_INDEX34		0x1188	//TX Swing Table Lane04 - Index34
    #define PCIEEPHYCFG_RSV00_1188_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1188_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1188_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1188_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX00		0x1200	//TX Swing Table Lane05 - Index00
    #define PCIEEPHYCFG_RSV00_1200_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1200_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1200_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1200_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX01		0x1204	//TX Swing Table Lane05 - Index01
    #define PCIEEPHYCFG_RSV00_1204_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1204_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1204_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1204_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX02		0x1208	//TX Swing Table Lane05 - Index02
    #define PCIEEPHYCFG_RSV00_1208_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1208_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1208_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1208_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX03		0x120C	//TX Swing Table Lane05 - Index03
    #define PCIEEPHYCFG_RSV00_120C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_120C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_120C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_120C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX04		0x1210	//TX Swing Table Lane05 - Index04
    #define PCIEEPHYCFG_RSV00_1210_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1210_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1210_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1210_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX05		0x1214	//TX Swing Table Lane05 - Index05
    #define PCIEEPHYCFG_RSV00_1214_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1214_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1214_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1214_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX06		0x1218	//TX Swing Table Lane05 - Index06
    #define PCIEEPHYCFG_RSV00_1218_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1218_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1218_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1218_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX07		0x121C	//TX Swing Table Lane05 - Index07
    #define PCIEEPHYCFG_RSV00_121C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_121C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_121C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_121C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX08		0x1220	//TX Swing Table Lane05 - Index08
    #define PCIEEPHYCFG_RSV00_1220_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1220_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1220_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1220_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX09		0x1224	//TX Swing Table Lane05 - Index09
    #define PCIEEPHYCFG_RSV00_1224_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1224_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1224_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1224_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX10		0x1228	//TX Swing Table Lane05 - Index10
    #define PCIEEPHYCFG_RSV00_1228_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1228_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1228_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1228_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX11		0x122C	//TX Swing Table Lane05 - Index11
    #define PCIEEPHYCFG_RSV00_122C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_122C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_122C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_122C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX12		0x1230	//TX Swing Table Lane05 - Index12
    #define PCIEEPHYCFG_RSV00_1230_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1230_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1230_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1230_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX13		0x1234	//TX Swing Table Lane05 - Index13
    #define PCIEEPHYCFG_RSV00_1234_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1234_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1234_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1234_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX14		0x1238	//TX Swing Table Lane05 - Index14
    #define PCIEEPHYCFG_RSV00_1238_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1238_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1238_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1238_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX15		0x123C	//TX Swing Table Lane05 - Index15
    #define PCIEEPHYCFG_RSV00_123C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_123C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_123C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_123C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX16		0x1240	//TX Swing Table Lane05 - Index16
    #define PCIEEPHYCFG_RSV00_1240_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1240_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1240_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1240_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX17		0x1244	//TX Swing Table Lane05 - Index17
    #define PCIEEPHYCFG_RSV00_1244_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1244_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1244_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1244_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX18		0x1248	//TX Swing Table Lane05 - Index18
    #define PCIEEPHYCFG_RSV00_1248_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1248_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1248_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1248_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX19		0x124C	//TX Swing Table Lane05 - Index19
    #define PCIEEPHYCFG_RSV00_124C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_124C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_124C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_124C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX20		0x1250	//TX Swing Table Lane05 - Index20
    #define PCIEEPHYCFG_RSV00_1250_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1250_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1250_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1250_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX21		0x1254	//TX Swing Table Lane05 - Index21
    #define PCIEEPHYCFG_RSV00_1254_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1254_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1254_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1254_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX22		0x1258	//TX Swing Table Lane05 - Index22
    #define PCIEEPHYCFG_RSV00_1258_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1258_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1258_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1258_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX23		0x125C	//TX Swing Table Lane05 - Index23
    #define PCIEEPHYCFG_RSV00_125C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_125C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_125C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_125C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX24		0x1260	//TX Swing Table Lane05 - Index24
    #define PCIEEPHYCFG_RSV00_1260_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1260_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1260_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1260_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX25		0x1264	//TX Swing Table Lane05 - Index25
    #define PCIEEPHYCFG_RSV00_1264_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1264_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1264_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1264_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX26		0x1268	//TX Swing Table Lane05 - Index26
    #define PCIEEPHYCFG_RSV00_1268_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1268_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1268_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1268_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX27		0x126C	//TX Swing Table Lane05 - Index27
    #define PCIEEPHYCFG_RSV00_126C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_126C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_126C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_126C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX28		0x1270	//TX Swing Table Lane05 - Index28
    #define PCIEEPHYCFG_RSV00_1270_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1270_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1270_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1270_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX29		0x1274	//TX Swing Table Lane05 - Index29
    #define PCIEEPHYCFG_RSV00_1274_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1274_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1274_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1274_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX30		0x1278	//TX Swing Table Lane05 - Index30
    #define PCIEEPHYCFG_RSV00_1278_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1278_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1278_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1278_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX31		0x127C	//TX Swing Table Lane05 - Index31
    #define PCIEEPHYCFG_RSV00_127C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_127C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_127C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_127C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX32		0x1280	//TX Swing Table Lane05 - Index32
    #define PCIEEPHYCFG_RSV00_1280_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1280_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1280_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1280_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX33		0x1284	//TX Swing Table Lane05 - Index33
    #define PCIEEPHYCFG_RSV00_1284_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1284_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1284_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1284_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE05_INDEX34		0x1288	//TX Swing Table Lane05 - Index34
    #define PCIEEPHYCFG_RSV00_1288_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1288_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1288_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1288_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX00		0x1300	//TX Swing Table Lane06 - Index00
    #define PCIEEPHYCFG_RSV00_1300_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1300_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1300_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1300_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX01		0x1304	//TX Swing Table Lane06 - Index01
    #define PCIEEPHYCFG_RSV00_1304_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1304_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1304_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1304_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX02		0x1308	//TX Swing Table Lane06 - Index02
    #define PCIEEPHYCFG_RSV00_1308_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1308_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1308_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1308_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX03		0x130C	//TX Swing Table Lane06 - Index03
    #define PCIEEPHYCFG_RSV00_130C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_130C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_130C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_130C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX04		0x1310	//TX Swing Table Lane06 - Index04
    #define PCIEEPHYCFG_RSV00_1310_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1310_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1310_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1310_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX05		0x1314	//TX Swing Table Lane06 - Index05
    #define PCIEEPHYCFG_RSV00_1314_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1314_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1314_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1314_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX06		0x1318	//TX Swing Table Lane06 - Index06
    #define PCIEEPHYCFG_RSV00_1318_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1318_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1318_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1318_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX07		0x131C	//TX Swing Table Lane06 - Index07
    #define PCIEEPHYCFG_RSV00_131C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_131C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_131C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_131C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX08		0x1320	//TX Swing Table Lane06 - Index08
    #define PCIEEPHYCFG_RSV00_1320_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1320_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1320_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1320_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX09		0x1324	//TX Swing Table Lane06 - Index09
    #define PCIEEPHYCFG_RSV00_1324_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1324_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1324_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1324_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX10		0x1328	//TX Swing Table Lane06 - Index10
    #define PCIEEPHYCFG_RSV00_1328_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1328_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1328_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1328_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX11		0x132C	//TX Swing Table Lane06 - Index11
    #define PCIEEPHYCFG_RSV00_132C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_132C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_132C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_132C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX12		0x1330	//TX Swing Table Lane06 - Index12
    #define PCIEEPHYCFG_RSV00_1330_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1330_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1330_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1330_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX13		0x1334	//TX Swing Table Lane06 - Index13
    #define PCIEEPHYCFG_RSV00_1334_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1334_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1334_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1334_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX14		0x1338	//TX Swing Table Lane06 - Index14
    #define PCIEEPHYCFG_RSV00_1338_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1338_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1338_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1338_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX15		0x133C	//TX Swing Table Lane06 - Index15
    #define PCIEEPHYCFG_RSV00_133C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_133C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_133C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_133C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX16		0x1340	//TX Swing Table Lane06 - Index16
    #define PCIEEPHYCFG_RSV00_1340_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1340_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1340_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1340_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX17		0x1344	//TX Swing Table Lane06 - Index17
    #define PCIEEPHYCFG_RSV00_1344_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1344_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1344_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1344_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX18		0x1348	//TX Swing Table Lane06 - Index18
    #define PCIEEPHYCFG_RSV00_1348_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1348_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1348_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1348_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX19		0x134C	//TX Swing Table Lane06 - Index19
    #define PCIEEPHYCFG_RSV00_134C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_134C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_134C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_134C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX20		0x1350	//TX Swing Table Lane06 - Index20
    #define PCIEEPHYCFG_RSV00_1350_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1350_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1350_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1350_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX21		0x1354	//TX Swing Table Lane06 - Index21
    #define PCIEEPHYCFG_RSV00_1354_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1354_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1354_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1354_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX22		0x1358	//TX Swing Table Lane06 - Index22
    #define PCIEEPHYCFG_RSV00_1358_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1358_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1358_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1358_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX23		0x135C	//TX Swing Table Lane06 - Index23
    #define PCIEEPHYCFG_RSV00_135C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_135C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_135C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_135C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX24		0x1360	//TX Swing Table Lane06 - Index24
    #define PCIEEPHYCFG_RSV00_1360_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1360_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1360_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1360_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX25		0x1364	//TX Swing Table Lane06 - Index25
    #define PCIEEPHYCFG_RSV00_1364_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1364_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1364_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1364_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX26		0x1368	//TX Swing Table Lane06 - Index26
    #define PCIEEPHYCFG_RSV00_1368_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1368_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1368_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1368_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX27		0x136C	//TX Swing Table Lane06 - Index27
    #define PCIEEPHYCFG_RSV00_136C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_136C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_136C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_136C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX28		0x1370	//TX Swing Table Lane06 - Index28
    #define PCIEEPHYCFG_RSV00_1370_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1370_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1370_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1370_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX29		0x1374	//TX Swing Table Lane06 - Index29
    #define PCIEEPHYCFG_RSV00_1374_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1374_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1374_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1374_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX30		0x1378	//TX Swing Table Lane06 - Index30
    #define PCIEEPHYCFG_RSV00_1378_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1378_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1378_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1378_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX31		0x137C	//TX Swing Table Lane06 - Index31
    #define PCIEEPHYCFG_RSV00_137C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_137C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_137C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_137C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX32		0x1380	//TX Swing Table Lane06 - Index32
    #define PCIEEPHYCFG_RSV00_1380_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1380_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1380_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1380_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX33		0x1384	//TX Swing Table Lane06 - Index33
    #define PCIEEPHYCFG_RSV00_1384_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1384_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1384_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1384_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE06_INDEX34		0x1388	//TX Swing Table Lane06 - Index34
    #define PCIEEPHYCFG_RSV00_1388_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1388_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1388_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1388_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX00		0x1400	//TX Swing Table Lane07 - Index00
    #define PCIEEPHYCFG_RSV00_1400_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1400_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1400_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1400_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX01		0x1404	//TX Swing Table Lane07 - Index01
    #define PCIEEPHYCFG_RSV00_1404_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1404_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1404_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1404_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX02		0x1408	//TX Swing Table Lane07 - Index02
    #define PCIEEPHYCFG_RSV00_1408_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1408_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1408_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1408_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX03		0x140C	//TX Swing Table Lane07 - Index03
    #define PCIEEPHYCFG_RSV00_140C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_140C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_140C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_140C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX04		0x1410	//TX Swing Table Lane07 - Index04
    #define PCIEEPHYCFG_RSV00_1410_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1410_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1410_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1410_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX05		0x1414	//TX Swing Table Lane07 - Index05
    #define PCIEEPHYCFG_RSV00_1414_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1414_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1414_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1414_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX06		0x1418	//TX Swing Table Lane07 - Index06
    #define PCIEEPHYCFG_RSV00_1418_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1418_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1418_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1418_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX07		0x141C	//TX Swing Table Lane07 - Index07
    #define PCIEEPHYCFG_RSV00_141C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_141C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_141C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_141C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX08		0x1420	//TX Swing Table Lane07 - Index08
    #define PCIEEPHYCFG_RSV00_1420_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1420_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1420_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1420_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX09		0x1424	//TX Swing Table Lane07 - Index09
    #define PCIEEPHYCFG_RSV00_1424_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1424_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1424_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1424_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX10		0x1428	//TX Swing Table Lane07 - Index10
    #define PCIEEPHYCFG_RSV00_1428_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1428_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1428_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1428_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX11		0x142C	//TX Swing Table Lane07 - Index11
    #define PCIEEPHYCFG_RSV00_142C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_142C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_142C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_142C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX12		0x1430	//TX Swing Table Lane07 - Index12
    #define PCIEEPHYCFG_RSV00_1430_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1430_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1430_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1430_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX13		0x1434	//TX Swing Table Lane07 - Index13
    #define PCIEEPHYCFG_RSV00_1434_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1434_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1434_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1434_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX14		0x1438	//TX Swing Table Lane07 - Index14
    #define PCIEEPHYCFG_RSV00_1438_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1438_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1438_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1438_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX15		0x143C	//TX Swing Table Lane07 - Index15
    #define PCIEEPHYCFG_RSV00_143C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_143C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_143C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_143C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX16		0x1440	//TX Swing Table Lane07 - Index16
    #define PCIEEPHYCFG_RSV00_1440_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1440_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1440_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1440_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX17		0x1444	//TX Swing Table Lane07 - Index17
    #define PCIEEPHYCFG_RSV00_1444_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1444_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1444_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1444_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX18		0x1448	//TX Swing Table Lane07 - Index18
    #define PCIEEPHYCFG_RSV00_1448_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1448_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1448_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1448_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX19		0x144C	//TX Swing Table Lane07 - Index19
    #define PCIEEPHYCFG_RSV00_144C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_144C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_144C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_144C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX20		0x1450	//TX Swing Table Lane07 - Index20
    #define PCIEEPHYCFG_RSV00_1450_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1450_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1450_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1450_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX21		0x1454	//TX Swing Table Lane07 - Index21
    #define PCIEEPHYCFG_RSV00_1454_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1454_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1454_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1454_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX22		0x1458	//TX Swing Table Lane07 - Index22
    #define PCIEEPHYCFG_RSV00_1458_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1458_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1458_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1458_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX23		0x145C	//TX Swing Table Lane07 - Index23
    #define PCIEEPHYCFG_RSV00_145C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_145C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_145C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_145C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX24		0x1460	//TX Swing Table Lane07 - Index24
    #define PCIEEPHYCFG_RSV00_1460_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1460_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1460_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1460_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX25		0x1464	//TX Swing Table Lane07 - Index25
    #define PCIEEPHYCFG_RSV00_1464_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1464_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1464_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1464_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX26		0x1468	//TX Swing Table Lane07 - Index26
    #define PCIEEPHYCFG_RSV00_1468_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1468_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1468_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1468_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX27		0x146C	//TX Swing Table Lane07 - Index27
    #define PCIEEPHYCFG_RSV00_146C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_146C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_146C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_146C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX28		0x1470	//TX Swing Table Lane07 - Index28
    #define PCIEEPHYCFG_RSV00_1470_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1470_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1470_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1470_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX29		0x1474	//TX Swing Table Lane07 - Index29
    #define PCIEEPHYCFG_RSV00_1474_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1474_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1474_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1474_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX30		0x1478	//TX Swing Table Lane07 - Index30
    #define PCIEEPHYCFG_RSV00_1478_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1478_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1478_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1478_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX31		0x147C	//TX Swing Table Lane07 - Index31
    #define PCIEEPHYCFG_RSV00_147C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_147C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_147C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_147C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX32		0x1480	//TX Swing Table Lane07 - Index32
    #define PCIEEPHYCFG_RSV00_1480_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1480_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1480_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1480_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX33		0x1484	//TX Swing Table Lane07 - Index33
    #define PCIEEPHYCFG_RSV00_1484_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1484_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1484_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1484_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE07_INDEX34		0x1488	//TX Swing Table Lane07 - Index34
    #define PCIEEPHYCFG_RSV00_1488_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1488_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1488_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1488_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX00		0x1500	//TX Swing Table Lane08 - Index00
    #define PCIEEPHYCFG_RSV00_1500_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1500_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1500_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1500_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX01		0x1504	//TX Swing Table Lane08 - Index01
    #define PCIEEPHYCFG_RSV00_1504_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1504_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1504_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1504_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX02		0x1508	//TX Swing Table Lane08 - Index02
    #define PCIEEPHYCFG_RSV00_1508_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1508_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1508_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1508_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX03		0x150C	//TX Swing Table Lane08 - Index03
    #define PCIEEPHYCFG_RSV00_150C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_150C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_150C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_150C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX04		0x1510	//TX Swing Table Lane08 - Index04
    #define PCIEEPHYCFG_RSV00_1510_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1510_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1510_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1510_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX05		0x1514	//TX Swing Table Lane08 - Index05
    #define PCIEEPHYCFG_RSV00_1514_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1514_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1514_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1514_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX06		0x1518	//TX Swing Table Lane08 - Index06
    #define PCIEEPHYCFG_RSV00_1518_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1518_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1518_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1518_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX07		0x151C	//TX Swing Table Lane08 - Index07
    #define PCIEEPHYCFG_RSV00_151C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_151C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_151C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_151C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX08		0x1520	//TX Swing Table Lane08 - Index08
    #define PCIEEPHYCFG_RSV00_1520_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1520_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1520_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1520_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX09		0x1524	//TX Swing Table Lane08 - Index09
    #define PCIEEPHYCFG_RSV00_1524_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1524_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1524_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1524_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX10		0x1528	//TX Swing Table Lane08 - Index10
    #define PCIEEPHYCFG_RSV00_1528_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1528_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1528_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1528_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX11		0x152C	//TX Swing Table Lane08 - Index11
    #define PCIEEPHYCFG_RSV00_152C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_152C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_152C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_152C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX12		0x1530	//TX Swing Table Lane08 - Index12
    #define PCIEEPHYCFG_RSV00_1530_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1530_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1530_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1530_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX13		0x1534	//TX Swing Table Lane08 - Index13
    #define PCIEEPHYCFG_RSV00_1534_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1534_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1534_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1534_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX14		0x1538	//TX Swing Table Lane08 - Index14
    #define PCIEEPHYCFG_RSV00_1538_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1538_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1538_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1538_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX15		0x153C	//TX Swing Table Lane08 - Index15
    #define PCIEEPHYCFG_RSV00_153C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_153C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_153C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_153C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX16		0x1540	//TX Swing Table Lane08 - Index16
    #define PCIEEPHYCFG_RSV00_1540_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1540_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1540_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1540_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX17		0x1544	//TX Swing Table Lane08 - Index17
    #define PCIEEPHYCFG_RSV00_1544_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1544_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1544_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1544_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX18		0x1548	//TX Swing Table Lane08 - Index18
    #define PCIEEPHYCFG_RSV00_1548_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1548_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1548_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1548_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX19		0x154C	//TX Swing Table Lane08 - Index19
    #define PCIEEPHYCFG_RSV00_154C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_154C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_154C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_154C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX20		0x1550	//TX Swing Table Lane08 - Index20
    #define PCIEEPHYCFG_RSV00_1550_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1550_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1550_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1550_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX21		0x1554	//TX Swing Table Lane08 - Index21
    #define PCIEEPHYCFG_RSV00_1554_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1554_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1554_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1554_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX22		0x1558	//TX Swing Table Lane08 - Index22
    #define PCIEEPHYCFG_RSV00_1558_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1558_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1558_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1558_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX23		0x155C	//TX Swing Table Lane08 - Index23
    #define PCIEEPHYCFG_RSV00_155C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_155C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_155C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_155C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX24		0x1560	//TX Swing Table Lane08 - Index24
    #define PCIEEPHYCFG_RSV00_1560_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1560_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1560_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1560_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX25		0x1564	//TX Swing Table Lane08 - Index25
    #define PCIEEPHYCFG_RSV00_1564_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1564_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1564_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1564_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX26		0x1568	//TX Swing Table Lane08 - Index26
    #define PCIEEPHYCFG_RSV00_1568_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1568_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1568_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1568_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX27		0x156C	//TX Swing Table Lane08 - Index27
    #define PCIEEPHYCFG_RSV00_156C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_156C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_156C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_156C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX28		0x1570	//TX Swing Table Lane08 - Index28
    #define PCIEEPHYCFG_RSV00_1570_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1570_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1570_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1570_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX29		0x1574	//TX Swing Table Lane08 - Index29
    #define PCIEEPHYCFG_RSV00_1574_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1574_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1574_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1574_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX30		0x1578	//TX Swing Table Lane08 - Index30
    #define PCIEEPHYCFG_RSV00_1578_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1578_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1578_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1578_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX31		0x157C	//TX Swing Table Lane08 - Index31
    #define PCIEEPHYCFG_RSV00_157C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_157C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_157C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_157C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX32		0x1580	//TX Swing Table Lane08 - Index32
    #define PCIEEPHYCFG_RSV00_1580_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1580_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1580_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1580_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX33		0x1584	//TX Swing Table Lane08 - Index33
    #define PCIEEPHYCFG_RSV00_1584_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1584_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1584_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1584_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE08_INDEX34		0x1588	//TX Swing Table Lane08 - Index34
    #define PCIEEPHYCFG_RSV00_1588_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1588_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1588_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1588_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX00		0x1600	//TX Swing Table Lane09 - Index00
    #define PCIEEPHYCFG_RSV00_1600_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1600_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1600_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1600_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX01		0x1604	//TX Swing Table Lane09 - Index01
    #define PCIEEPHYCFG_RSV00_1604_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1604_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1604_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1604_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX02		0x1608	//TX Swing Table Lane09 - Index02
    #define PCIEEPHYCFG_RSV00_1608_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1608_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1608_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1608_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX03		0x160C	//TX Swing Table Lane09 - Index03
    #define PCIEEPHYCFG_RSV00_160C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_160C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_160C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_160C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX04		0x1610	//TX Swing Table Lane09 - Index04
    #define PCIEEPHYCFG_RSV00_1610_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1610_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1610_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1610_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX05		0x1614	//TX Swing Table Lane09 - Index05
    #define PCIEEPHYCFG_RSV00_1614_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1614_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1614_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1614_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX06		0x1618	//TX Swing Table Lane09 - Index06
    #define PCIEEPHYCFG_RSV00_1618_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1618_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1618_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1618_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX07		0x161C	//TX Swing Table Lane09 - Index07
    #define PCIEEPHYCFG_RSV00_161C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_161C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_161C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_161C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX08		0x1620	//TX Swing Table Lane09 - Index08
    #define PCIEEPHYCFG_RSV00_1620_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1620_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1620_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1620_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX09		0x1624	//TX Swing Table Lane09 - Index09
    #define PCIEEPHYCFG_RSV00_1624_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1624_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1624_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1624_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX10		0x1628	//TX Swing Table Lane09 - Index10
    #define PCIEEPHYCFG_RSV00_1628_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1628_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1628_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1628_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX11		0x162C	//TX Swing Table Lane09 - Index11
    #define PCIEEPHYCFG_RSV00_162C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_162C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_162C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_162C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX12		0x1630	//TX Swing Table Lane09 - Index12
    #define PCIEEPHYCFG_RSV00_1630_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1630_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1630_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1630_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX13		0x1634	//TX Swing Table Lane09 - Index13
    #define PCIEEPHYCFG_RSV00_1634_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1634_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1634_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1634_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX14		0x1638	//TX Swing Table Lane09 - Index14
    #define PCIEEPHYCFG_RSV00_1638_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1638_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1638_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1638_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX15		0x163C	//TX Swing Table Lane09 - Index15
    #define PCIEEPHYCFG_RSV00_163C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_163C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_163C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_163C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX16		0x1640	//TX Swing Table Lane09 - Index16
    #define PCIEEPHYCFG_RSV00_1640_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1640_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1640_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1640_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX17		0x1644	//TX Swing Table Lane09 - Index17
    #define PCIEEPHYCFG_RSV00_1644_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1644_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1644_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1644_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX18		0x1648	//TX Swing Table Lane09 - Index18
    #define PCIEEPHYCFG_RSV00_1648_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1648_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1648_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1648_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX19		0x164C	//TX Swing Table Lane09 - Index19
    #define PCIEEPHYCFG_RSV00_164C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_164C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_164C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_164C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX20		0x1650	//TX Swing Table Lane09 - Index20
    #define PCIEEPHYCFG_RSV00_1650_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1650_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1650_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1650_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX21		0x1654	//TX Swing Table Lane09 - Index21
    #define PCIEEPHYCFG_RSV00_1654_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1654_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1654_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1654_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX22		0x1658	//TX Swing Table Lane09 - Index22
    #define PCIEEPHYCFG_RSV00_1658_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1658_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1658_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1658_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX23		0x165C	//TX Swing Table Lane09 - Index23
    #define PCIEEPHYCFG_RSV00_165C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_165C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_165C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_165C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX24		0x1660	//TX Swing Table Lane09 - Index24
    #define PCIEEPHYCFG_RSV00_1660_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1660_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1660_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1660_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX25		0x1664	//TX Swing Table Lane09 - Index25
    #define PCIEEPHYCFG_RSV00_1664_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1664_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1664_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1664_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX26		0x1668	//TX Swing Table Lane09 - Index26
    #define PCIEEPHYCFG_RSV00_1668_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1668_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1668_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1668_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX27		0x166C	//TX Swing Table Lane09 - Index27
    #define PCIEEPHYCFG_RSV00_166C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_166C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_166C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_166C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX28		0x1670	//TX Swing Table Lane09 - Index28
    #define PCIEEPHYCFG_RSV00_1670_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1670_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1670_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1670_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX29		0x1674	//TX Swing Table Lane09 - Index29
    #define PCIEEPHYCFG_RSV00_1674_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1674_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1674_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1674_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX30		0x1678	//TX Swing Table Lane09 - Index30
    #define PCIEEPHYCFG_RSV00_1678_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1678_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1678_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1678_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX31		0x167C	//TX Swing Table Lane09 - Index31
    #define PCIEEPHYCFG_RSV00_167C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_167C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_167C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_167C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX32		0x1680	//TX Swing Table Lane09 - Index32
    #define PCIEEPHYCFG_RSV00_1680_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1680_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1680_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1680_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX33		0x1684	//TX Swing Table Lane09 - Index33
    #define PCIEEPHYCFG_RSV00_1684_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1684_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1684_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1684_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE09_INDEX34		0x1688	//TX Swing Table Lane09 - Index34
    #define PCIEEPHYCFG_RSV00_1688_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1688_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1688_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1688_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX00		0x1700	//TX Swing Table Lane10 - Index00
    #define PCIEEPHYCFG_RSV00_1700_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1700_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1700_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1700_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX01		0x1704	//TX Swing Table Lane10 - Index01
    #define PCIEEPHYCFG_RSV00_1704_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1704_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1704_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1704_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX02		0x1708	//TX Swing Table Lane10 - Index02
    #define PCIEEPHYCFG_RSV00_1708_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1708_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1708_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1708_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX03		0x170C	//TX Swing Table Lane10 - Index03
    #define PCIEEPHYCFG_RSV00_170C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_170C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_170C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_170C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX04		0x1710	//TX Swing Table Lane10 - Index04
    #define PCIEEPHYCFG_RSV00_1710_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1710_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1710_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1710_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX05		0x1714	//TX Swing Table Lane10 - Index05
    #define PCIEEPHYCFG_RSV00_1714_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1714_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1714_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1714_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX06		0x1718	//TX Swing Table Lane10 - Index06
    #define PCIEEPHYCFG_RSV00_1718_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1718_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1718_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1718_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX07		0x171C	//TX Swing Table Lane10 - Index07
    #define PCIEEPHYCFG_RSV00_171C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_171C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_171C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_171C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX08		0x1720	//TX Swing Table Lane10 - Index08
    #define PCIEEPHYCFG_RSV00_1720_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1720_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1720_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1720_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX09		0x1724	//TX Swing Table Lane10 - Index09
    #define PCIEEPHYCFG_RSV00_1724_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1724_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1724_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1724_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX10		0x1728	//TX Swing Table Lane10 - Index10
    #define PCIEEPHYCFG_RSV00_1728_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1728_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1728_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1728_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX11		0x172C	//TX Swing Table Lane10 - Index11
    #define PCIEEPHYCFG_RSV00_172C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_172C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_172C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_172C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX12		0x1730	//TX Swing Table Lane10 - Index12
    #define PCIEEPHYCFG_RSV00_1730_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1730_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1730_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1730_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX13		0x1734	//TX Swing Table Lane10 - Index13
    #define PCIEEPHYCFG_RSV00_1734_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1734_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1734_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1734_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX14		0x1738	//TX Swing Table Lane10 - Index14
    #define PCIEEPHYCFG_RSV00_1738_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1738_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1738_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1738_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX15		0x173C	//TX Swing Table Lane10 - Index15
    #define PCIEEPHYCFG_RSV00_173C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_173C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_173C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_173C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX16		0x1740	//TX Swing Table Lane10 - Index16
    #define PCIEEPHYCFG_RSV00_1740_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1740_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1740_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1740_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX17		0x1744	//TX Swing Table Lane10 - Index17
    #define PCIEEPHYCFG_RSV00_1744_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1744_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1744_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1744_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX18		0x1748	//TX Swing Table Lane10 - Index18
    #define PCIEEPHYCFG_RSV00_1748_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1748_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1748_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1748_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX19		0x174C	//TX Swing Table Lane10 - Index19
    #define PCIEEPHYCFG_RSV00_174C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_174C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_174C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_174C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX20		0x1750	//TX Swing Table Lane10 - Index20
    #define PCIEEPHYCFG_RSV00_1750_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1750_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1750_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1750_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX21		0x1754	//TX Swing Table Lane10 - Index21
    #define PCIEEPHYCFG_RSV00_1754_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1754_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1754_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1754_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX22		0x1758	//TX Swing Table Lane10 - Index22
    #define PCIEEPHYCFG_RSV00_1758_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1758_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1758_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1758_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX23		0x175C	//TX Swing Table Lane10 - Index23
    #define PCIEEPHYCFG_RSV00_175C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_175C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_175C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_175C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX24		0x1760	//TX Swing Table Lane10 - Index24
    #define PCIEEPHYCFG_RSV00_1760_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1760_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1760_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1760_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX25		0x1764	//TX Swing Table Lane10 - Index25
    #define PCIEEPHYCFG_RSV00_1764_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1764_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1764_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1764_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX26		0x1768	//TX Swing Table Lane10 - Index26
    #define PCIEEPHYCFG_RSV00_1768_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1768_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1768_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1768_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX27		0x176C	//TX Swing Table Lane10 - Index27
    #define PCIEEPHYCFG_RSV00_176C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_176C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_176C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_176C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX28		0x1770	//TX Swing Table Lane10 - Index28
    #define PCIEEPHYCFG_RSV00_1770_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1770_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1770_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1770_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX29		0x1774	//TX Swing Table Lane10 - Index29
    #define PCIEEPHYCFG_RSV00_1774_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1774_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1774_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1774_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX30		0x1778	//TX Swing Table Lane10 - Index30
    #define PCIEEPHYCFG_RSV00_1778_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1778_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1778_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1778_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX31		0x177C	//TX Swing Table Lane10 - Index31
    #define PCIEEPHYCFG_RSV00_177C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_177C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_177C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_177C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX32		0x1780	//TX Swing Table Lane10 - Index32
    #define PCIEEPHYCFG_RSV00_1780_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1780_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1780_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1780_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX33		0x1784	//TX Swing Table Lane10 - Index33
    #define PCIEEPHYCFG_RSV00_1784_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1784_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1784_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1784_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE10_INDEX34		0x1788	//TX Swing Table Lane10 - Index34
    #define PCIEEPHYCFG_RSV00_1788_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1788_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1788_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1788_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX00		0x1800	//TX Swing Table Lane11 - Index00
    #define PCIEEPHYCFG_RSV00_1800_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1800_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1800_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1800_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX01		0x1804	//TX Swing Table Lane11 - Index01
    #define PCIEEPHYCFG_RSV00_1804_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1804_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1804_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1804_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX02		0x1808	//TX Swing Table Lane11 - Index02
    #define PCIEEPHYCFG_RSV00_1808_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1808_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1808_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1808_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX03		0x180C	//TX Swing Table Lane11 - Index03
    #define PCIEEPHYCFG_RSV00_180C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_180C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_180C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_180C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX04		0x1810	//TX Swing Table Lane11 - Index04
    #define PCIEEPHYCFG_RSV00_1810_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1810_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1810_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1810_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX05		0x1814	//TX Swing Table Lane11 - Index05
    #define PCIEEPHYCFG_RSV00_1814_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1814_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1814_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1814_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX06		0x1818	//TX Swing Table Lane11 - Index06
    #define PCIEEPHYCFG_RSV00_1818_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1818_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1818_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1818_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX07		0x181C	//TX Swing Table Lane11 - Index07
    #define PCIEEPHYCFG_RSV00_181C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_181C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_181C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_181C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX08		0x1820	//TX Swing Table Lane11 - Index08
    #define PCIEEPHYCFG_RSV00_1820_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1820_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1820_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1820_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX09		0x1824	//TX Swing Table Lane11 - Index09
    #define PCIEEPHYCFG_RSV00_1824_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1824_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1824_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1824_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX10		0x1828	//TX Swing Table Lane11 - Index10
    #define PCIEEPHYCFG_RSV00_1828_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1828_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1828_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1828_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX11		0x182C	//TX Swing Table Lane11 - Index11
    #define PCIEEPHYCFG_RSV00_182C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_182C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_182C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_182C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX12		0x1830	//TX Swing Table Lane11 - Index12
    #define PCIEEPHYCFG_RSV00_1830_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1830_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1830_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1830_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX13		0x1834	//TX Swing Table Lane11 - Index13
    #define PCIEEPHYCFG_RSV00_1834_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1834_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1834_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1834_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX14		0x1838	//TX Swing Table Lane11 - Index14
    #define PCIEEPHYCFG_RSV00_1838_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1838_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1838_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1838_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX15		0x183C	//TX Swing Table Lane11 - Index15
    #define PCIEEPHYCFG_RSV00_183C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_183C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_183C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_183C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX16		0x1840	//TX Swing Table Lane11 - Index16
    #define PCIEEPHYCFG_RSV00_1840_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1840_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1840_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1840_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX17		0x1844	//TX Swing Table Lane11 - Index17
    #define PCIEEPHYCFG_RSV00_1844_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1844_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1844_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1844_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX18		0x1848	//TX Swing Table Lane11 - Index18
    #define PCIEEPHYCFG_RSV00_1848_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1848_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1848_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1848_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX19		0x184C	//TX Swing Table Lane11 - Index19
    #define PCIEEPHYCFG_RSV00_184C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_184C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_184C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_184C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX20		0x1850	//TX Swing Table Lane11 - Index20
    #define PCIEEPHYCFG_RSV00_1850_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1850_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1850_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1850_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX21		0x1854	//TX Swing Table Lane11 - Index21
    #define PCIEEPHYCFG_RSV00_1854_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1854_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1854_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1854_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX22		0x1858	//TX Swing Table Lane11 - Index22
    #define PCIEEPHYCFG_RSV00_1858_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1858_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1858_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1858_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX23		0x185C	//TX Swing Table Lane11 - Index23
    #define PCIEEPHYCFG_RSV00_185C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_185C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_185C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_185C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX24		0x1860	//TX Swing Table Lane11 - Index24
    #define PCIEEPHYCFG_RSV00_1860_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1860_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1860_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1860_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX25		0x1864	//TX Swing Table Lane11 - Index25
    #define PCIEEPHYCFG_RSV00_1864_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1864_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1864_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1864_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX26		0x1868	//TX Swing Table Lane11 - Index26
    #define PCIEEPHYCFG_RSV00_1868_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1868_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1868_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1868_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX27		0x186C	//TX Swing Table Lane11 - Index27
    #define PCIEEPHYCFG_RSV00_186C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_186C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_186C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_186C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX28		0x1870	//TX Swing Table Lane11 - Index28
    #define PCIEEPHYCFG_RSV00_1870_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1870_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1870_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1870_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX29		0x1874	//TX Swing Table Lane11 - Index29
    #define PCIEEPHYCFG_RSV00_1874_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1874_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1874_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1874_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX30		0x1878	//TX Swing Table Lane11 - Index30
    #define PCIEEPHYCFG_RSV00_1878_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1878_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1878_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1878_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX31		0x187C	//TX Swing Table Lane11 - Index31
    #define PCIEEPHYCFG_RSV00_187C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_187C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_187C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_187C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX32		0x1880	//TX Swing Table Lane11 - Index32
    #define PCIEEPHYCFG_RSV00_1880_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1880_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1880_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1880_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX33		0x1884	//TX Swing Table Lane11 - Index33
    #define PCIEEPHYCFG_RSV00_1884_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1884_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1884_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1884_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE11_INDEX34		0x1888	//TX Swing Table Lane11 - Index34
    #define PCIEEPHYCFG_RSV00_1888_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1888_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1888_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1888_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX00		0x1900	//TX Swing Table Lane12 - Index00
    #define PCIEEPHYCFG_RSV00_1900_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1900_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1900_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1900_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX01		0x1904	//TX Swing Table Lane12 - Index01
    #define PCIEEPHYCFG_RSV00_1904_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1904_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1904_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1904_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX02		0x1908	//TX Swing Table Lane12 - Index02
    #define PCIEEPHYCFG_RSV00_1908_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1908_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1908_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1908_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX03		0x190C	//TX Swing Table Lane12 - Index03
    #define PCIEEPHYCFG_RSV00_190C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_190C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_190C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_190C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX04		0x1910	//TX Swing Table Lane12 - Index04
    #define PCIEEPHYCFG_RSV00_1910_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1910_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1910_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1910_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX05		0x1914	//TX Swing Table Lane12 - Index05
    #define PCIEEPHYCFG_RSV00_1914_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1914_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1914_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1914_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX06		0x1918	//TX Swing Table Lane12 - Index06
    #define PCIEEPHYCFG_RSV00_1918_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1918_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1918_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1918_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX07		0x191C	//TX Swing Table Lane12 - Index07
    #define PCIEEPHYCFG_RSV00_191C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_191C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_191C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_191C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX08		0x1920	//TX Swing Table Lane12 - Index08
    #define PCIEEPHYCFG_RSV00_1920_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1920_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1920_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1920_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX09		0x1924	//TX Swing Table Lane12 - Index09
    #define PCIEEPHYCFG_RSV00_1924_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1924_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1924_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1924_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX10		0x1928	//TX Swing Table Lane12 - Index10
    #define PCIEEPHYCFG_RSV00_1928_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1928_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1928_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1928_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX11		0x192C	//TX Swing Table Lane12 - Index11
    #define PCIEEPHYCFG_RSV00_192C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_192C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_192C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_192C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX12		0x1930	//TX Swing Table Lane12 - Index12
    #define PCIEEPHYCFG_RSV00_1930_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1930_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1930_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1930_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX13		0x1934	//TX Swing Table Lane12 - Index13
    #define PCIEEPHYCFG_RSV00_1934_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1934_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1934_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1934_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX14		0x1938	//TX Swing Table Lane12 - Index14
    #define PCIEEPHYCFG_RSV00_1938_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1938_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1938_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1938_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX15		0x193C	//TX Swing Table Lane12 - Index15
    #define PCIEEPHYCFG_RSV00_193C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_193C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_193C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_193C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX16		0x1940	//TX Swing Table Lane12 - Index16
    #define PCIEEPHYCFG_RSV00_1940_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1940_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1940_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1940_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX17		0x1944	//TX Swing Table Lane12 - Index17
    #define PCIEEPHYCFG_RSV00_1944_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1944_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1944_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1944_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX18		0x1948	//TX Swing Table Lane12 - Index18
    #define PCIEEPHYCFG_RSV00_1948_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1948_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1948_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1948_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX19		0x194C	//TX Swing Table Lane12 - Index19
    #define PCIEEPHYCFG_RSV00_194C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_194C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_194C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_194C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX20		0x1950	//TX Swing Table Lane12 - Index20
    #define PCIEEPHYCFG_RSV00_1950_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1950_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1950_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1950_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX21		0x1954	//TX Swing Table Lane12 - Index21
    #define PCIEEPHYCFG_RSV00_1954_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1954_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1954_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1954_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX22		0x1958	//TX Swing Table Lane12 - Index22
    #define PCIEEPHYCFG_RSV00_1958_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1958_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1958_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1958_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX23		0x195C	//TX Swing Table Lane12 - Index23
    #define PCIEEPHYCFG_RSV00_195C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_195C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_195C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_195C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX24		0x1960	//TX Swing Table Lane12 - Index24
    #define PCIEEPHYCFG_RSV00_1960_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1960_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1960_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1960_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX25		0x1964	//TX Swing Table Lane12 - Index25
    #define PCIEEPHYCFG_RSV00_1964_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1964_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1964_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1964_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX26		0x1968	//TX Swing Table Lane12 - Index26
    #define PCIEEPHYCFG_RSV00_1968_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1968_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1968_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1968_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX27		0x196C	//TX Swing Table Lane12 - Index27
    #define PCIEEPHYCFG_RSV00_196C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_196C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_196C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_196C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX28		0x1970	//TX Swing Table Lane12 - Index28
    #define PCIEEPHYCFG_RSV00_1970_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1970_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1970_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1970_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX29		0x1974	//TX Swing Table Lane12 - Index29
    #define PCIEEPHYCFG_RSV00_1974_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1974_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1974_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1974_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX30		0x1978	//TX Swing Table Lane12 - Index30
    #define PCIEEPHYCFG_RSV00_1978_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1978_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1978_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1978_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX31		0x197C	//TX Swing Table Lane12 - Index31
    #define PCIEEPHYCFG_RSV00_197C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_197C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_197C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_197C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX32		0x1980	//TX Swing Table Lane12 - Index32
    #define PCIEEPHYCFG_RSV00_1980_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1980_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1980_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1980_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX33		0x1984	//TX Swing Table Lane12 - Index33
    #define PCIEEPHYCFG_RSV00_1984_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1984_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1984_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1984_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE12_INDEX34		0x1988	//TX Swing Table Lane12 - Index34
    #define PCIEEPHYCFG_RSV00_1988_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1988_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1988_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1988_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX00		0x1A00	//TX Swing Table Lane13 - Index00
    #define PCIEEPHYCFG_RSV00_1A00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX01		0x1A04	//TX Swing Table Lane13 - Index01
    #define PCIEEPHYCFG_RSV00_1A04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX02		0x1A08	//TX Swing Table Lane13 - Index02
    #define PCIEEPHYCFG_RSV00_1A08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX03		0x1A0C	//TX Swing Table Lane13 - Index03
    #define PCIEEPHYCFG_RSV00_1A0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX04		0x1A10	//TX Swing Table Lane13 - Index04
    #define PCIEEPHYCFG_RSV00_1A10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX05		0x1A14	//TX Swing Table Lane13 - Index05
    #define PCIEEPHYCFG_RSV00_1A14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX06		0x1A18	//TX Swing Table Lane13 - Index06
    #define PCIEEPHYCFG_RSV00_1A18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX07		0x1A1C	//TX Swing Table Lane13 - Index07
    #define PCIEEPHYCFG_RSV00_1A1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX08		0x1A20	//TX Swing Table Lane13 - Index08
    #define PCIEEPHYCFG_RSV00_1A20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX09		0x1A24	//TX Swing Table Lane13 - Index09
    #define PCIEEPHYCFG_RSV00_1A24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX10		0x1A28	//TX Swing Table Lane13 - Index10
    #define PCIEEPHYCFG_RSV00_1A28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX11		0x1A2C	//TX Swing Table Lane13 - Index11
    #define PCIEEPHYCFG_RSV00_1A2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX12		0x1A30	//TX Swing Table Lane13 - Index12
    #define PCIEEPHYCFG_RSV00_1A30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX13		0x1A34	//TX Swing Table Lane13 - Index13
    #define PCIEEPHYCFG_RSV00_1A34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX14		0x1A38	//TX Swing Table Lane13 - Index14
    #define PCIEEPHYCFG_RSV00_1A38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX15		0x1A3C	//TX Swing Table Lane13 - Index15
    #define PCIEEPHYCFG_RSV00_1A3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX16		0x1A40	//TX Swing Table Lane13 - Index16
    #define PCIEEPHYCFG_RSV00_1A40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX17		0x1A44	//TX Swing Table Lane13 - Index17
    #define PCIEEPHYCFG_RSV00_1A44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX18		0x1A48	//TX Swing Table Lane13 - Index18
    #define PCIEEPHYCFG_RSV00_1A48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX19		0x1A4C	//TX Swing Table Lane13 - Index19
    #define PCIEEPHYCFG_RSV00_1A4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX20		0x1A50	//TX Swing Table Lane13 - Index20
    #define PCIEEPHYCFG_RSV00_1A50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX21		0x1A54	//TX Swing Table Lane13 - Index21
    #define PCIEEPHYCFG_RSV00_1A54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX22		0x1A58	//TX Swing Table Lane13 - Index22
    #define PCIEEPHYCFG_RSV00_1A58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX23		0x1A5C	//TX Swing Table Lane13 - Index23
    #define PCIEEPHYCFG_RSV00_1A5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX24		0x1A60	//TX Swing Table Lane13 - Index24
    #define PCIEEPHYCFG_RSV00_1A60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX25		0x1A64	//TX Swing Table Lane13 - Index25
    #define PCIEEPHYCFG_RSV00_1A64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX26		0x1A68	//TX Swing Table Lane13 - Index26
    #define PCIEEPHYCFG_RSV00_1A68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX27		0x1A6C	//TX Swing Table Lane13 - Index27
    #define PCIEEPHYCFG_RSV00_1A6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX28		0x1A70	//TX Swing Table Lane13 - Index28
    #define PCIEEPHYCFG_RSV00_1A70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX29		0x1A74	//TX Swing Table Lane13 - Index29
    #define PCIEEPHYCFG_RSV00_1A74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX30		0x1A78	//TX Swing Table Lane13 - Index30
    #define PCIEEPHYCFG_RSV00_1A78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX31		0x1A7C	//TX Swing Table Lane13 - Index31
    #define PCIEEPHYCFG_RSV00_1A7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX32		0x1A80	//TX Swing Table Lane13 - Index32
    #define PCIEEPHYCFG_RSV00_1A80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX33		0x1A84	//TX Swing Table Lane13 - Index33
    #define PCIEEPHYCFG_RSV00_1A84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE13_INDEX34		0x1A88	//TX Swing Table Lane13 - Index34
    #define PCIEEPHYCFG_RSV00_1A88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1A88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1A88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1A88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX00		0x1B00	//TX Swing Table Lane14 - Index00
    #define PCIEEPHYCFG_RSV00_1B00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX01		0x1B04	//TX Swing Table Lane14 - Index01
    #define PCIEEPHYCFG_RSV00_1B04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX02		0x1B08	//TX Swing Table Lane14 - Index02
    #define PCIEEPHYCFG_RSV00_1B08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX03		0x1B0C	//TX Swing Table Lane14 - Index03
    #define PCIEEPHYCFG_RSV00_1B0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX04		0x1B10	//TX Swing Table Lane14 - Index04
    #define PCIEEPHYCFG_RSV00_1B10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX05		0x1B14	//TX Swing Table Lane14 - Index05
    #define PCIEEPHYCFG_RSV00_1B14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX06		0x1B18	//TX Swing Table Lane14 - Index06
    #define PCIEEPHYCFG_RSV00_1B18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX07		0x1B1C	//TX Swing Table Lane14 - Index07
    #define PCIEEPHYCFG_RSV00_1B1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX08		0x1B20	//TX Swing Table Lane14 - Index08
    #define PCIEEPHYCFG_RSV00_1B20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX09		0x1B24	//TX Swing Table Lane14 - Index09
    #define PCIEEPHYCFG_RSV00_1B24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX10		0x1B28	//TX Swing Table Lane14 - Index10
    #define PCIEEPHYCFG_RSV00_1B28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX11		0x1B2C	//TX Swing Table Lane14 - Index11
    #define PCIEEPHYCFG_RSV00_1B2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX12		0x1B30	//TX Swing Table Lane14 - Index12
    #define PCIEEPHYCFG_RSV00_1B30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX13		0x1B34	//TX Swing Table Lane14 - Index13
    #define PCIEEPHYCFG_RSV00_1B34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX14		0x1B38	//TX Swing Table Lane14 - Index14
    #define PCIEEPHYCFG_RSV00_1B38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX15		0x1B3C	//TX Swing Table Lane14 - Index15
    #define PCIEEPHYCFG_RSV00_1B3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX16		0x1B40	//TX Swing Table Lane14 - Index16
    #define PCIEEPHYCFG_RSV00_1B40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX17		0x1B44	//TX Swing Table Lane14 - Index17
    #define PCIEEPHYCFG_RSV00_1B44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX18		0x1B48	//TX Swing Table Lane14 - Index18
    #define PCIEEPHYCFG_RSV00_1B48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX19		0x1B4C	//TX Swing Table Lane14 - Index19
    #define PCIEEPHYCFG_RSV00_1B4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX20		0x1B50	//TX Swing Table Lane14 - Index20
    #define PCIEEPHYCFG_RSV00_1B50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX21		0x1B54	//TX Swing Table Lane14 - Index21
    #define PCIEEPHYCFG_RSV00_1B54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX22		0x1B58	//TX Swing Table Lane14 - Index22
    #define PCIEEPHYCFG_RSV00_1B58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX23		0x1B5C	//TX Swing Table Lane14 - Index23
    #define PCIEEPHYCFG_RSV00_1B5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX24		0x1B60	//TX Swing Table Lane14 - Index24
    #define PCIEEPHYCFG_RSV00_1B60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX25		0x1B64	//TX Swing Table Lane14 - Index25
    #define PCIEEPHYCFG_RSV00_1B64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX26		0x1B68	//TX Swing Table Lane14 - Index26
    #define PCIEEPHYCFG_RSV00_1B68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX27		0x1B6C	//TX Swing Table Lane14 - Index27
    #define PCIEEPHYCFG_RSV00_1B6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX28		0x1B70	//TX Swing Table Lane14 - Index28
    #define PCIEEPHYCFG_RSV00_1B70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX29		0x1B74	//TX Swing Table Lane14 - Index29
    #define PCIEEPHYCFG_RSV00_1B74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX30		0x1B78	//TX Swing Table Lane14 - Index30
    #define PCIEEPHYCFG_RSV00_1B78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX31		0x1B7C	//TX Swing Table Lane14 - Index31
    #define PCIEEPHYCFG_RSV00_1B7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX32		0x1B80	//TX Swing Table Lane14 - Index32
    #define PCIEEPHYCFG_RSV00_1B80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX33		0x1B84	//TX Swing Table Lane14 - Index33
    #define PCIEEPHYCFG_RSV00_1B84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE14_INDEX34		0x1B88	//TX Swing Table Lane14 - Index34
    #define PCIEEPHYCFG_RSV00_1B88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1B88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1B88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1B88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX00		0x1C00	//TX Swing Table Lane15 - Index00
    #define PCIEEPHYCFG_RSV00_1C00_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C00_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C00_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C00_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX01		0x1C04	//TX Swing Table Lane15 - Index01
    #define PCIEEPHYCFG_RSV00_1C04_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C04_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C04_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C04_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX02		0x1C08	//TX Swing Table Lane15 - Index02
    #define PCIEEPHYCFG_RSV00_1C08_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_02_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C08_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_02_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C08_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_02_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C08_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_02_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX03		0x1C0C	//TX Swing Table Lane15 - Index03
    #define PCIEEPHYCFG_RSV00_1C0C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_03_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C0C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_03_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C0C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_03_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C0C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_03_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX04		0x1C10	//TX Swing Table Lane15 - Index04
    #define PCIEEPHYCFG_RSV00_1C10_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_04_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C10_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_04_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C10_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_04_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C10_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_04_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX05		0x1C14	//TX Swing Table Lane15 - Index05
    #define PCIEEPHYCFG_RSV00_1C14_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_05_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C14_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_05_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C14_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_05_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C14_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_05_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX06		0x1C18	//TX Swing Table Lane15 - Index06
    #define PCIEEPHYCFG_RSV00_1C18_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_06_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C18_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_06_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C18_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_06_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C18_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_06_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX07		0x1C1C	//TX Swing Table Lane15 - Index07
    #define PCIEEPHYCFG_RSV00_1C1C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_07_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C1C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_07_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C1C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_07_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C1C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_07_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX08		0x1C20	//TX Swing Table Lane15 - Index08
    #define PCIEEPHYCFG_RSV00_1C20_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_08_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C20_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_08_TDNCIS			0xF0000	//1101b/1101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C20_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_08_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C20_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_08_TDPCIS			(BIT0 + BIT1 + BIT2)	//000b/000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX09		0x1C24	//TX Swing Table Lane15 - Index09
    #define PCIEEPHYCFG_RSV00_1C24_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_09_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C24_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_09_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C24_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_09_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C24_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_09_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX10		0x1C28	//TX Swing Table Lane15 - Index10
    #define PCIEEPHYCFG_RSV00_1C28_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_10_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C28_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_10_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C28_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_10_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C28_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_10_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX11		0x1C2C	//TX Swing Table Lane15 - Index11
    #define PCIEEPHYCFG_RSV00_1C2C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_11_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C2C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_11_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C2C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_11_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C2C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_11_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX12		0x1C30	//TX Swing Table Lane15 - Index12
    #define PCIEEPHYCFG_RSV00_1C30_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_12_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C30_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_12_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C30_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_12_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C30_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_12_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX13		0x1C34	//TX Swing Table Lane15 - Index13
    #define PCIEEPHYCFG_RSV00_1C34_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_13_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C34_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_13_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C34_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_13_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C34_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_13_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX14		0x1C38	//TX Swing Table Lane15 - Index14
    #define PCIEEPHYCFG_RSV00_1C38_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_14_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C38_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_14_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C38_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_14_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C38_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_14_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX15		0x1C3C	//TX Swing Table Lane15 - Index15
    #define PCIEEPHYCFG_RSV00_1C3C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_15_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C3C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_15_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C3C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_15_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C3C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_15_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX16		0x1C40	//TX Swing Table Lane15 - Index16
    #define PCIEEPHYCFG_RSV00_1C40_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_16_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C40_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_16_TDNCIS			0xF0000	//1100b/1100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C40_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_16_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C40_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_16_TDPCIS			(BIT0 + BIT1 + BIT2)	//010b/010b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX17		0x1C44	//TX Swing Table Lane15 - Index17
    #define PCIEEPHYCFG_RSV00_1C44_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_17_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C44_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_17_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C44_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_17_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C44_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_17_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX18		0x1C48	//TX Swing Table Lane15 - Index18
    #define PCIEEPHYCFG_RSV00_1C48_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_18_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C48_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_18_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C48_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_18_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C48_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_18_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX19		0x1C4C	//TX Swing Table Lane15 - Index19
    #define PCIEEPHYCFG_RSV00_1C4C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_19_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C4C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_19_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C4C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_19_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C4C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_19_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX20		0x1C50	//TX Swing Table Lane15 - Index20
    #define PCIEEPHYCFG_RSV00_1C50_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_20_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C50_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_20_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C50_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_20_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C50_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_20_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX21		0x1C54	//TX Swing Table Lane15 - Index21
    #define PCIEEPHYCFG_RSV00_1C54_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_21_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C54_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_21_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C54_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_21_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C54_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_21_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX22		0x1C58	//TX Swing Table Lane15 - Index22
    #define PCIEEPHYCFG_RSV00_1C58_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_22_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C58_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_22_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C58_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_22_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C58_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_22_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX23		0x1C5C	//TX Swing Table Lane15 - Index23
    #define PCIEEPHYCFG_RSV00_1C5C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_23_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C5C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_23_TDNCIS			0xF0000	//1010b/1010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C5C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_23_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C5C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_23_TDPCIS			(BIT0 + BIT1 + BIT2)	//011b/011b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX24		0x1C60	//TX Swing Table Lane15 - Index24
    #define PCIEEPHYCFG_RSV00_1C60_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_24_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C60_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_24_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C60_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_24_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C60_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_24_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX25		0x1C64	//TX Swing Table Lane15 - Index25
    #define PCIEEPHYCFG_RSV00_1C64_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_25_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C64_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_25_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C64_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_25_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C64_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_25_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX26		0x1C68	//TX Swing Table Lane15 - Index26
    #define PCIEEPHYCFG_RSV00_1C68_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_26_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C68_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_26_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C68_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_26_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C68_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_26_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX27		0x1C6C	//TX Swing Table Lane15 - Index27
    #define PCIEEPHYCFG_RSV00_1C6C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_27_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C6C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_27_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C6C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_27_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C6C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_27_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX28		0x1C70	//TX Swing Table Lane15 - Index28
    #define PCIEEPHYCFG_RSV00_1C70_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_28_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C70_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_28_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C70_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_28_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C70_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_28_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX29		0x1C74	//TX Swing Table Lane15 - Index29
    #define PCIEEPHYCFG_RSV00_1C74_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_29_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C74_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_29_TDNCIS			0xF0000	//1000b/1000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C74_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_29_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C74_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_29_TDPCIS			(BIT0 + BIT1 + BIT2)	//101b/101b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX30		0x1C78	//TX Swing Table Lane15 - Index30
    #define PCIEEPHYCFG_RSV00_1C78_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_30_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C78_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_30_TDNCIS			0xF0000	//0000b/0000b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C78_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_30_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C78_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_30_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX31		0x1C7C	//TX Swing Table Lane15 - Index31
    #define PCIEEPHYCFG_RSV00_1C7C_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_31_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C7C_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_31_TDNCIS			0xF0000	//0010b/0010b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C7C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_31_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C7C_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_31_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX32		0x1C80	//TX Swing Table Lane15 - Index32
    #define PCIEEPHYCFG_RSV00_1C80_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_32_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C80_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_32_TDNCIS			0xF0000	//0011b/0011b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C80_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_32_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C80_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_32_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX33		0x1C84	//TX Swing Table Lane15 - Index33
    #define PCIEEPHYCFG_RSV00_1C84_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_33_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C84_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_33_TDNCIS			0xF0000	//0101b/0101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C84_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_33_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C84_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_33_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_LANE15_INDEX34		0x1C88	//TX Swing Table Lane15 - Index34
    #define PCIEEPHYCFG_RSV00_1C88_26			0xFC000000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_34_TX_DUTY			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_1C88_22			0xF00000	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_34_TDNCIS			0xF0000	//0111b/0111b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_1C88_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_34_TXSW			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_1C88_6			0xF8	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_34_TDPCIS			(BIT0 + BIT1 + BIT2)	//111b/111b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE00_INDEX00		0x2500	//TX Swing Table G1 Lane00 - Index00
    #define PCIEEPHYCFG_FRP00_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX  Set
    #define PCIEEPHYCFG_FRP00_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2500_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2500_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2500_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE01_INDEX00		0x2504	//TX Swing Table G1 Lane01 - Index00
    #define PCIEEPHYCFG_FRP01_V0_00_TDCIS_G1			0xFC000000	//000000b/0000b/x/x TX Set
    #define PCIEEPHYCFG_FRP01_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2504_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2504_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2504_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDPCIS_G1			0x3F	//000000b/0000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE02_INDEX00		0x2508	//TX Swing Table G1 Lane02 - Index00
    #define PCIEEPHYCFG_FRP02_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP02_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2508_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2508_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2508_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE03_INDEX00		0x250C	//TX Swing Table G1 Lane03 - Index00
    #define PCIEEPHYCFG_FRP03_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP03_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_250C_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_250C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_250C_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE04_INDEX00		0x2510	//TX Swing Table G1 Lane04 - Index00
    #define PCIEEPHYCFG_FRP04_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP04_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2510_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2510_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2510_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE05_INDEX00		0x2514	//TX Swing Table G1 Lane05 - Index00
    #define PCIEEPHYCFG_FRP05_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP05_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2514_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2514_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2514_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE06_INDEX00		0x2518	//TX Swing Table G1 Lane06 - Index00
    #define PCIEEPHYCFG_FRP06_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP06_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2518_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2518_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2518_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE07_INDEX00		0x251C	//TX Swing Table G1 Lane07 - Index00
    #define PCIEEPHYCFG_FRP07_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP07_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_251C_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_251C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_251C_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE08_INDEX00		0x2520	//TX Swing Table G1 Lane08 - Index00
    #define PCIEEPHYCFG_FRP08_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX  Set
    #define PCIEEPHYCFG_FRP08_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2520_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2520_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2520_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE09_INDEX00		0x2524	//TX Swing Table G1 Lane09 - Index00
    #define PCIEEPHYCFG_FRP09_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP09_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2524_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2524_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2524_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE10_INDEX00		0x2528	//TX Swing Table G1 Lane10 - Index00
    #define PCIEEPHYCFG_FRP10_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP10_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2528_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2528_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2528_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE11_INDEX00		0x252C	//TX Swing Table G1 Lane11 - Index00
    #define PCIEEPHYCFG_FRP11_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP11_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_252C_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_252C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_252C_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE12_INDEX00		0x2530	//TX Swing Table G1 Lane12- Index00
    #define PCIEEPHYCFG_FRP12_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX  Set
    #define PCIEEPHYCFG_FRP12_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2530_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2530_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2530_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE13_INDEX00		0x2534	//TX Swing Table G1 Lane13 - Index00
    #define PCIEEPHYCFG_FRP13_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP13_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2534_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2534_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2534_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE14_INDEX00		0x2538	//TX Swing Table G1 Lane14 - Index00
    #define PCIEEPHYCFG_FRP14_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP14_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2538_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2538_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2538_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G1_LANE15_INDEX00		0x253C	//TX Swing Table G1 Lane15 - Index00
    #define PCIEEPHYCFG_FRP15_V0_00_TDCIS_G1			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP15_V0_00_TX_DUTY_G1			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_253C_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDNCIS_G1			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_253C_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TXSW_G1			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_253C_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDPCIS_G1			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE00_INDEX00		0x2600	//TX Swing Table G2 Lane00 - Index00
    #define PCIEEPHYCFG_FRP00_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP00_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2600_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2600_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2600_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE00_INDEX01		0x2604	//TX Swing Table G2 Lane00 - Index01
    #define PCIEEPHYCFG_FRP00_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP00_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2604_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2604_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2604_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP00_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE01_INDEX00		0x2610	//TX Swing Table G2 Lane01 - Index00
    #define PCIEEPHYCFG_FRP01_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP01_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2610_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2610_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2610_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE01_INDEX01		0x2614	//TX Swing Table G2 Lane01 - Index01
    #define PCIEEPHYCFG_FRP01_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP01_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2614_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2614_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2614_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP01_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE02_INDEX00		0x2620	//TX Swing Table G2 Lane02 - Index00
    #define PCIEEPHYCFG_FRP02_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP02_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2620_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2620_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2620_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE01_INDEX02		0x2624	//TX Swing Table G2 Lane01 - Index02
    #define PCIEEPHYCFG_FRP02_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP02_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2624_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2624_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2624_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP02_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE03_INDEX00		0x2630	//TX Swing Table G2 Lane03 - Index00
    #define PCIEEPHYCFG_FRP03_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP03_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2630_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2630_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2630_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE03_INDEX01		0x2634	//TX Swing Table G2 Lane03 - Index01
    #define PCIEEPHYCFG_FRP03_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX   Set
    #define PCIEEPHYCFG_FRP03_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2634_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2634_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2634_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP03_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE04_INDEX00		0x2640	//TX Swing Table G2 Lane04 - Index00
    #define PCIEEPHYCFG_FRP04_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX  Set
    #define PCIEEPHYCFG_FRP04_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2640_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2640_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2640_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE04_INDEX01		0x2644	//TX Swing Table G2 Lane04 - Index01
    #define PCIEEPHYCFG_FRP04_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP04_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2644_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2644_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2644_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP04_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE05_INDEX00		0x2650	//TX Swing Table G2 Lane05 - Index00
    #define PCIEEPHYCFG_FRP05_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP05_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2650_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2650_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2650_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE05_INDEX01		0x2654	//TX Swing Table G2 Lane05 - Index01
    #define PCIEEPHYCFG_FRP05_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP05_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2654_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2654_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2654_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP05_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE06_INDEX00		0x2660	//TX Swing Table G2 Lane06 - Index00
    #define PCIEEPHYCFG_FRP06_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP06_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2660_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2660_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2660_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE06_INDEX01		0x2664	//TX Swing Table G2 Lane06 - Index01
    #define PCIEEPHYCFG_FRP06_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP06_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2664_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2664_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2664_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP06_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE07_INDEX00		0x2670	//TX Swing Table G2 Lane07 - Index00
    #define PCIEEPHYCFG_FRP07_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP07_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2670_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2670_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2670_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE07_INDEX01		0x2674	//TX Swing Table G2 Lane07 - Index01
    #define PCIEEPHYCFG_FRP07_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP07_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2674_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2674_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2674_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP07_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE08_INDEX00		0x2680	//TX Swing Table G2 Lane08 - Index00
    #define PCIEEPHYCFG_FRP08_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP08_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2680_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2680_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2680_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE08_INDEX01		0x2684	//TX Swing Table G2 Lane08 - Index01
    #define PCIEEPHYCFG_FRP08_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP08_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2684_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2684_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2684_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP08_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE09_INDEX00		0x2690	//TX Swing Table G2 Lane09 - Index00
    #define PCIEEPHYCFG_FRP09_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP09_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2690_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDNCIS_G2			0x3F0000	//001101b/01101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2690_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2690_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE09_INDEX01		0x2694	//TX Swing Table G2 Lane09 - Index01
    #define PCIEEPHYCFG_FRP09_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP09_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_2694_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_2694_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_2694_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP09_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE10_INDEX00		0x26A0	//TX Swing Table G2 Lane10 - Index00
    #define PCIEEPHYCFG_FRP10_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP10_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26A0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26A0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26A0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE10_INDEX01		0x26A4	//TX Swing Table G2 Lane10 - Index01
    #define PCIEEPHYCFG_FRP10_V0_01_TDPIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP10_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26A4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26A4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26A4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP10_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE11_INDEX00		0x26B0	//TX Swing Table G2 Lane11 - Index00
    #define PCIEEPHYCFG_FRP11_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP11_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26B0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26B0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26B0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE11_INDEX01		0x26B4	//TX Swing Table G2 Lane11 - Index01
    #define PCIEEPHYCFG_FRP11_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP11_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26B4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26B4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26B4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP11_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE12_INDEX00		0x26C0	//TX Swing Table G2 Lane12 - Index00
    #define PCIEEPHYCFG_FRP12_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP12_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26C0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26C0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26C0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE12_INDEX01		0x26C4	//TX Swing Table G2 Lane12 - Index01
    #define PCIEEPHYCFG_FRP12_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP12_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26C4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26C4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26C4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP12_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE13_INDEX00		0x26D0	//TX Swing Table G2 Lane13 - Index00
    #define PCIEEPHYCFG_FRP13_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP13_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26D0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26D0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26D0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE13_INDEX01		0x26D4	//TX Swing Table G2 Lane13 - Index01
    #define PCIEEPHYCFG_FRP13_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP13_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26D4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26D4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26D4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP13_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE14_INDEX00		0x26E0	//TX Swing Table G2 Lane14 - Index00
    #define PCIEEPHYCFG_FRP14_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP14_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26E0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26E0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26E0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE14_INDEX01		0x26E4	//TX Swing Table G2 Lane14 - Index01
    #define PCIEEPHYCFG_FRP14_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP14_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26E4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26E4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26E4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP14_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE15_INDEX00		0x26F0	//TX Swing Table G2 Lane15 - Index00
    #define PCIEEPHYCFG_FRP15_V0_00_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP15_V0_00_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26F0_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDNCIS_G2			0x3F0000	//001101b/001101b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26F0_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26F0_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_00_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
#define PCIEEPHYCFG_TX_SWING_TABLE_G2_LANE15_INDEX01		0x26F4	//TX Swing Table G2 Lane15 - Index01
    #define PCIEEPHYCFG_FRP15_V0_01_TDCIS_G2			0xFC000000	//000000b/000000b/x/x TX Set
    #define PCIEEPHYCFG_FRP15_V0_01_TX_DUTY_G2			(BIT24 + BIT25)	//00b/00b/x/x TX Clock Duty Control
    #define PCIEEPHYCFG_RSV00_26F4_22			(BIT22 + BIT23)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TDNCIS_G2			0x3F0000	//010100b/010100b/x/x TX De-emphasis Set
    #define PCIEEPHYCFG_RSV00_26F4_13			0xFC00	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TXSW_G2			(BIT8 + BIT9)	//11b/11b/x/x TX Output Swing Control
    #define PCIEEPHYCFG_RSV00_26F4_6			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEEPHYCFG_FRP15_V0_01_TDPCIS_G2			0x3F	//000000b/000000b/x/x TX Preshoot Set
//PCIEPHYCFG
#define PCIEPHYCFG_EYE_MONITOR		0x2900	//Eye Monitor
    #define PCIEPHYCFG_MCU_EYESCANTM_PENN			0xFF	//0/x/x/x BERCNTEN Control Timer
#define PCIEPHYCFG_EYE_MONITOR_2		0x2901	//Eye Monitor 2
    #define PCIEPHYCFG_REYECLKEN			BIT15	//0/x/x/x EYE Monitor Clock Gate Enable Signal
    #define PCIEPHYCFG_EYESCAN_DONE_PENN			BIT14	//0/x/x/x EYE SCAN Done
    #define PCIEPHYCFG_MCU_EYESCANEN_PENN			BIT13	//0/x/x/x Eye Scan Enable 
    #define PCIEPHYCFG_EQ_PORT_NAME			0x1FF0	//0/x/x/x The Port Doing EQ And EYE SCAN
    #define PCIEPHYCFG_LANE_SEL			(BIT1 + BIT2 + BIT3)	//0/x/x/x LANE SELECT
    #define PCIEPHYCFG_ALL_PORT			BIT0	//0/x/x/x EQ Port Need Care All Port
#define PCIEPHYCFG_EYE_MONITOR_3		0x2903	//Eye Monitor 3
    #define PCIEPHYCFG_RSV_2903			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PH_OS			0x7F	//0/x/x/x X Value
#define PCIEPHYCFG_EYE_MONITOR_4		0x2904	//Eye Monitor 4
    #define PCIEPHYCFG_RSV_29004			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNVTH			0x3F	//0/x/x/x Y Value
#define PCIEPHYCFG_EYE_MONITOR_5		0x2905	//Eye Monitor 5
    #define PCIEPHYCFG_RSV_29005			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PH_OS_2			0x7F	//0/x/x/x X Value
#define PCIEPHYCFG_EYE_MONITOR_6		0x2906	//Eye Monitor 6
    #define PCIEPHYCFG_RSV_29006			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_EQTNVTH_2			0x3F	//0/x/x/x Y Value
#define PCIEPHYCFG_EYE_MONITOR_7		0x2907	//Eye Monitor 7
    #define PCIEPHYCFG_RSV_2907			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_R_EYE_MANU_MUX			BIT4	//1b/x/x/x Manual Set and Eyemoniter Scan Mux
    #define PCIEPHYCFG_RBER_THRESHHOLD			0xF	//0/x/x/x EYE ERROR Threshhold
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0		0x2A00	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_31_0			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z1		0x2A04	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_63_32			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z2		0x2A08	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_95_64			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z3		0x2A0C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_127_96			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z4		0x2A10	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_159_128			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z5		0x2A14	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_191_160			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z6		0x2A18	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_223_192			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z7		0x2A1C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_255_224			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z8		0x2A20	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_287_256			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z9		0x2A24	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_319_288			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z10		0x2A28	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_351_320			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z11		0x2A2C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_383_352			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z12		0x2A30	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_415_384			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z13		0x2A34	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_447_416			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z14		0x2A38	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_479_448			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z15		0x2A3C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_511_480			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z16		0x2A40	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_543_512			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z17		0x2A44	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_575_544			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z18		0x2A48	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_607_576			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z19		0x2A4C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_639_608			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z20		0x2A50	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_671_640			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z21		0x2A54	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_703_672			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z22		0x2A58	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_735_704			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z23		0x2A5C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_767_736			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z24		0x2A60	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_799_768			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z25		0x2A64	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_831_800			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z26		0x2A68	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_863_832			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z27		0x2A6C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_895_864			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z28		0x2A70	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_927_896			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z29		0x2A74	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_959_928			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z30		0x2A78	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_991_960			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z31		0x2A7C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1023_992			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z32		0x2A80	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1055_1024			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z33		0x2A84	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1087_1056			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z34		0x2A88	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1119_1088			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z35		0x2A8C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1151_1120			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z36		0x2A90	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1183_1152			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z37		0x2A94	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1215_1184			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z38		0x2A98	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1247_1216			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z39		0x2A9C	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1279_1248			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z40		0x2AA0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1311_1280			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z41		0x2AA4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1343_1312			0xFFFFFFFF	//HwInit/x/x/x The Register for EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z42		0x2AA8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1375_1344			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z43		0x2AAC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1407_1376			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z44		0x2AB0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1439_1408			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z45		0x2AB4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1471_1440			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z46		0x2AB8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1503_1472			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z47		0x2ABC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1535_1504			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z48		0x2AC0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1567_1536			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z49		0x2AC4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1599_1568			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z50		0x2AC8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1631_1600			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z51		0x2ACC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1663_1632			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z52		0x2AD0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1695_1664			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z53		0x2AD4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1727_1696			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z54		0x2AD8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1759_1728			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z55		0x2ADC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1791_1760			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z56		0x2AE0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1823_1792			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z57		0x2AE4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1855_1824			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z58		0x2AE8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1887_1856			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z59		0x2AEC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1919_1888			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z60		0x2AF0	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1951_1920			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z61		0x2AF4	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_1983_1952			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z62		0x2AF8	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_2015_1984			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_EYE_MONITOR_BER_VAL_REG_0_Z63		0x2AFC	//EYE Monitor BER_VAL Register 0
    #define PCIEPHYCFG_BER_VAL_2047_2016			0xFFFFFFFF	//HwInit/x/x/x The Register For EYE Monitor Value
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_00		0x2B00	//MCU Set Preset Lane 00
    #define PCIEPHYCFG_RSV_2B00			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_00			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_00			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_00		0x2B01	//MCU Set Pre-cursor Lane 00
    #define PCIEPHYCFG_RSV_2B01			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_00			0x3F	//0/x/x/x Lane 0 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_00		0x2B02	//MCU Set Cursor Lane 00
    #define PCIEPHYCFG_RSV_2B02			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_00			0x3F	//0/x/x/x Lane 0 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_00		0x2B03	//MCU Set Post-cursor Lane 00
    #define PCIEPHYCFG_RSV_2B03			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_00			0x3F	//0/x/x/x Lane 0 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_01		0x2B10	//MCU Set Preset Lane 01
    #define PCIEPHYCFG_RSV_2B10			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_01			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_01			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_01		0x2B11	//MCU Set Pre-cursor Lane 01
    #define PCIEPHYCFG_RSV_2B11			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_01			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_01		0x2B12	//MCU Set Cursor Lane 01
    #define PCIEPHYCFG_RSV_2B12			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_01			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_01		0x2B13	//MCU Set Post-cursor Lane 01
    #define PCIEPHYCFG_RSV_2B13			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_01			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_02		0x2B20	//MCU Set Preset Lane 02
    #define PCIEPHYCFG_RSV_2B20			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_02			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_02			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_02		0x2B21	//MCU Set Pre-cursor Lane 02
    #define PCIEPHYCFG_RSV_2B21			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_02			0x3F	//0/x/x/x Lane 2 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_02		0x2B22	//MCU Set Cursor Lane 02
    #define PCIEPHYCFG_RSV_2B22			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_02			0x3F	//0/x/x/x Lane 2 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_02		0x2B23	//MCU Set Post-cursor Lane 02
    #define PCIEPHYCFG_RSV_2B23			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_02			0x3F	//0/x/x/x Lane 2 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_03		0x2B30	//MCU Set Preset Lane 03
    #define PCIEPHYCFG_RSV_2B30			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_03			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_03			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_03		0x2B31	//MCU Set Pre-cursor Lane 03
    #define PCIEPHYCFG_RSV_2B31			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_03			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_03		0x2B32	//MCU Set Cursor Lane 03
    #define PCIEPHYCFG_RSV_2B32			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_03			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_03		0x2B33	//MCU Set Post-cursor Lane 03
    #define PCIEPHYCFG_RSV_2B33			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_03			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_04		0x2B40	//MCU Set Preset Lane 04
    #define PCIEPHYCFG_RSV_2B40			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_04			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_04			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_04		0x2B41	//MCU Set Pre-cursor Lane 04
    #define PCIEPHYCFG_RSV_2B41			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_04			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_04		0x2B42	//MCU Set Cursor Lane 04
    #define PCIEPHYCFG_RSV_2B42			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_04			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_04		0x2B43	//MCU Set Post-cursor Lane 04
    #define PCIEPHYCFG_RSV_2B43			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_04			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_05		0x2B50	//MCU Set Preset Lane 05
    #define PCIEPHYCFG_RSV_2B50			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_05			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_05			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_05		0x2B51	//MCU Set Pre-cursor Lane 05
    #define PCIEPHYCFG_RSV_2B51			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_05			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_05		0x2B52	//MCU Set Cursor Lane 05
    #define PCIEPHYCFG_RSV_2B52			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_05			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_05		0x2B53	//MCU Set Post-cursor Lane 05
    #define PCIEPHYCFG_RSV_2B53			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_05			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_06		0x2B60	//MCU Set Preset Lane 06
    #define PCIEPHYCFG_RSV_2B60			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_06			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_06			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_06		0x2B61	//MCU Set Pre-cursor Lane 06
    #define PCIEPHYCFG_RSV_2B61			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_06			0x3F	//0/x/x/x Lane 6 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_06		0x2B62	//MCU Set Cursor Lane 06
    #define PCIEPHYCFG_RSV_2B62			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_06			0x3F	//0/x/x/x Lane 6 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_06		0x2B63	//MCU Set Post-cursor Lane 06
    #define PCIEPHYCFG_RSV_2B63			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_06			0x3F	//0/x/x/x Lane 6 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_07		0x2B70	//MCU Set Preset Lane 07
    #define PCIEPHYCFG_RSV_2B70			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_07			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_07			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_07		0x2B71	//MCU Set Pre-cursor Lane 07
    #define PCIEPHYCFG_RSV_2B71			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_07			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_07		0x2B72	//MCU Set Cursor Lane 07
    #define PCIEPHYCFG_RSV_2B72			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_07			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_07		0x2B73	//MCU Set Post-cursor Lane 07
    #define PCIEPHYCFG_RSV_2B73			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_07			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_08		0x2B80	//MCU Set Preset Lane 08
    #define PCIEPHYCFG_RSV_2B80			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_08			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_08			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_08		0x2B81	//MCU Set Pre-cursor Lane 08
    #define PCIEPHYCFG_RSV_2B81			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_08			0x3F	//0/x/x/x Lane 0 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_08		0x2B82	//MCU Set Cursor Lane 08
    #define PCIEPHYCFG_RSV_2B82			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_08			0x3F	//0/x/x/x Lane 0
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_08		0x2B83	//MCU Set Post-cursor Lane 08
    #define PCIEPHYCFG_RSV_2B83			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_08			0x3F	//0/x/x/x Lane 0 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_09		0x2B90	//MCU Set Preset Lane 09
    #define PCIEPHYCFG_RSV_2B90			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_09			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_09			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_09		0x2B91	//MCU Set Pre-cursor Lane 09
    #define PCIEPHYCFG_RSV_2B91			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_09			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_09		0x2B92	//MCU Set Cursor Lane 09
    #define PCIEPHYCFG_RSV_2B92			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_09			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_09		0x2B93	//MCU Set Post-cursor Lane 09
    #define PCIEPHYCFG_RSV_2B93			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_09			0x3F	//0/x/x/x Lane 1 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_10		0x2BA0	//MCU Set Preset Lane 10
    #define PCIEPHYCFG_RSV_2BA0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_10			BIT4	//0/x/x/x Use Cursor Setting Or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_10			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_10		0x2BA1	//MCU Set Pre-cursor Lane 10
    #define PCIEPHYCFG_RSV_2BA1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_10			0x3F	//0/x/x/x Lane 2 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_10		0x2BA2	//MCU Set Cursor Lane 10
    #define PCIEPHYCFG_RSV_2BA2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_10			0x3F	//0/x/x/x Lane 2
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_10		0x2BA3	//MCU Set Post-cursor Lane 10
    #define PCIEPHYCFG_RSV_2BA3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_10			0x3F	//0/x/x/x Lane 2 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_11		0x2BB0	//MCU Set Preset Lane 11
    #define PCIEPHYCFG_RSV_2BB0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_11			BIT4	//0/x/x/x Use Cursor Setting or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_11			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_11		0x2BB1	//MCU Set Pre-cursor Lane 11
    #define PCIEPHYCFG_RSV_2BB1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_11			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_11		0x2BB2	//MCU Set Cursor Lane 11
    #define PCIEPHYCFG_RSV_2BB2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_11			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_11		0x2BB3	//MCU Set Post-cursor Lane 11
    #define PCIEPHYCFG_RSV_2BB3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_11			0x3F	//0/x/x/x Lane 3 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_12		0x2BC0	//MCU Set Preset Lane 12
    #define PCIEPHYCFG_RSV_2BC0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_12			BIT4	//0/x/x/x Use Cursor Setting Or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_12			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_12		0x2BC1	//MCU Set Pre-cursor Lane 12
    #define PCIEPHYCFG_RSV_2BC1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_12			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_12		0x2BC2	//MCU Set Cursor Lane 12
    #define PCIEPHYCFG_RSV_2BC2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_12			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_12		0x2BC3	//MCU Set Post-cursor Lane 12
    #define PCIEPHYCFG_RSV_2BC3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_12			0x3F	//0/x/x/x Lane 4 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_13		0x2BD0	//MCU Set Preset Lane 13
    #define PCIEPHYCFG_RSV_2BD0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_13			BIT4	//0/x/x/x Use Cursor Setting Or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_13			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_13		0x2BD1	//MCU Set Pre-cursor Lane 13
    #define PCIEPHYCFG_RSV_2BD1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_13			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_13		0x2BD2	//MCU Set Cursor Lane 13
    #define PCIEPHYCFG_RSV_2BD2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_13			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_13		0x2BD3	//MCU Set Post-cursor Lane 13
    #define PCIEPHYCFG_RSV_2BD3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_13			0x3F	//0/x/x/x Lane 5 
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_14		0x2BE0	//MCU Set Preset Lane 14
    #define PCIEPHYCFG_RSV_2BE0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_14			BIT4	//0/x/x/x Use Cursor Setting Or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_14			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_14		0x2BE1	//MCU Set Pre-cursor Lane 14
    #define PCIEPHYCFG_RSV_2BE1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_14			0x3F	//0/x/x/x Lane 6 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_14		0x2BE2	//MCU Set Cursor Lane 14
    #define PCIEPHYCFG_RSV_2BE2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_14			0x3F	//0/x/x/x Lane 6
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_14		0x2BE3	//MCU Set Post-cursor Lane 14
    #define PCIEPHYCFG_RSV_2BE3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_14			0x3F	//0/x/x/x Lane 6
#define PCIEPHYCFG_MCU_SET_PRESET_LANE_15		0x2BF0	//MCU Set Preset Lane 15
    #define PCIEPHYCFG_RSV_2BF0			(BIT5 + BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_USE_PRESET_15			BIT4	//0/x/x/x Use Cursor Setting Or PRESET Setting
    #define PCIEPHYCFG_MCU_TX_PRESET_15			0xF	//0/x/x/x TX_PRESET Value When Doing EQ
#define PCIEPHYCFG_MCU_SET_PRE_CURSOR_LANE_15		0x2BF1	//MCU Set Pre-cursor Lane 15
    #define PCIEPHYCFG_RSV_2BF1			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_PRE_CURSOR_15			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_MCU_SET_CURSOR_LANE_15		0x2BF2	//MCU Set Cursor Lane 15
    #define PCIEPHYCFG_RSV_2BF2			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_CURSOR_15			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_MCU_SET_POST_CURSOR_LANE_15		0x2BF3	//MCU Set Post-cursor Lane 15
    #define PCIEPHYCFG_RSV_2BF3			(BIT6 + BIT7)	//0/x/x/x Reserved
    #define PCIEPHYCFG_MCU_POST_CURSOR_15			0x3F	//0/x/x/x Lane 7 
#define PCIEPHYCFG_LOOPBACK_LATENCY_CTL_LANE07_00		0x2D00	//Loopback Latency Control Lane07-00
    #define PCIEPHYCFG_RLPLTCTL_07			(BIT14 + BIT15)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_06			(BIT12 + BIT13)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_05			(BIT10 + BIT11)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_04			(BIT8 + BIT9)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_03			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_02			(BIT4 + BIT5)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_01			(BIT2 + BIT3)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_00			(BIT0 + BIT1)	//0/0/x/x Reserved
#define PCIEPHYCFG_LOOPBACK_LATENCY_CTL_LANE15_08		0x2D02	//Loopback Latency Control Lane15-08
    #define PCIEPHYCFG_RLPLTCTL_15			(BIT14 + BIT15)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_14			(BIT12 + BIT13)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_13			(BIT10 + BIT11)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_12			(BIT8 + BIT9)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_11			(BIT6 + BIT7)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_10			(BIT4 + BIT5)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_09			(BIT2 + BIT3)	//0/0/x/x Reserved
    #define PCIEPHYCFG_RLPLTCTL_08			(BIT0 + BIT1)	//0/0/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z95		0x2D04	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_2D06			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_RESERVED_Z96		0x2D05	//Reserved
    #define PCIEPHYCFG_RSVPCIEPHYCFG_2D07			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE00		0x2E00	//Equalization Control Register Original Value Lane00
    #define PCIEPHYCFG_RSV_2E01			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_00			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 00 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_00			0xF00	//1111b/1111b/x/x Lane 00 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E00			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_00			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 00 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_00			0xF	//1111b/1111b/x/x Lane 00 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE01		0x2E02	//Equalization Control Register Original Value Lane01
    #define PCIEPHYCFG_RSV_2E03			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_01			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 01 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_01			0xF00	//1111b/1111b/x/x Lane 01 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E02			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_01			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 01 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_01			0xF	//1111b/1111b/x/x Lane 01 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE02		0x2E04	//Equalization Control Register Original Value Lane02
    #define PCIEPHYCFG_RSV_2E05			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_02			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 02 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_02			0xF00	//1111b/1111b/x/x Lane 02 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E04			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_02			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 02 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_02			0xF	//1111b/1111b/x/x Lane 02 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE03		0x2E06	//Equalization Control Register Original Value Lane03
    #define PCIEPHYCFG_RSV_2E07			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_03			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 03 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_03			0xF00	//1111b/1111b/x/x Lane 03 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E06			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_03			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 03 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_03			0xF	//1111b/1111b/x/x Lane 03 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE04		0x2E08	//Equalization Control Register Original Value Lane04
    #define PCIEPHYCFG_RSV_2E09			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_04			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 04 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_04			0xF00	//1111b/1111b/x/x Lane 04 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E08			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_04			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 04 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_04			0xF	//1111b/1111b/x/x Lane 04 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE05		0x2E0A	//Equalization Control Register Original Value Lane05
    #define PCIEPHYCFG_RSV_2E0B			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_05			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 05 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_05			0xF00	//1111b/1111b/x/x Lane 05 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E0A			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_05			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 05 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_05			0xF	//1111b/1111b/x/x Lane 05 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE06		0x2E0C	//Equalization Control Register Original Value Lane06
    #define PCIEPHYCFG_RSV_2E0D			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_06			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 06 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_06			0xF00	//1111b/1111b/x/x Lane 06 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E0C			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_06			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 06 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_06			0xF	//1111b/1111b/x/x Lane 06 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE07		0x2E0E	//Equalization Control Register Original Value Lane07
    #define PCIEPHYCFG_RSV_2E0F			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_07			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane 07 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_07			0xF00	//1111b/1111b/x/x Lane 07 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E0E			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_07			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane 07 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_07			0xF	//1111b/1111b/x/x Lane 07 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE08		0x2E10	//Equalization Control Register Original Value Lane08
    #define PCIEPHYCFG_RSV_2E11			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_08			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane08 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_08			0xF00	//1111b/1111b/x/x Lane08 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E10			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_08			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane08 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_08			0xF	//1111b/1111b/x/x Lane08 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE09		0x2E12	//Equalization Control Register Original Value Lane09
    #define PCIEPHYCFG_RSV_2E13			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_09			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane09 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_09			0xF00	//1111b/1111b/x/x Lane09 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E12			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_09			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane09 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_09			0xF	//1111b/1111b/x/x Lane09 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE10		0x2E14	//Equalization Control Register Original Value Lane10
    #define PCIEPHYCFG_RSV_2E15			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_10			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane10 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_10			0xF00	//1111b/1111b/x/x Lane10 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E14			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_10			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane10 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_10			0xF	//1111b/1111b/x/x Lane10 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE11		0x2E16	//Equalization Control Register Original Value Lane11
    #define PCIEPHYCFG_RSV_2E17			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_11			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane11 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_11			0xF00	//1111b/1111b/x/x Lane11 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E16			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_11			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane11 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_11			0xF	//1111b/1111b/x/x Lane11 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE12		0x2E18	//Equalization Control Register Original Value Lane12
    #define PCIEPHYCFG_RSV_2E19			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_12			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane12 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_12			0xF00	//1111b/1111b/x/x Lane12 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E18			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_12			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane12 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_12			0xF	//1111b/1111b/x/x Lane12 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE13		0x2E1A	//Equalization Control Register Original Value Lane13
    #define PCIEPHYCFG_RSV_2E1B			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_13			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane13 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_13			0xF00	//1111b/1111b/x/x Lane13 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E1A			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_13			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane13 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_13			0xF	//1111b/1111b/x/x Lane13 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE14		0x2E1C	//Equalization Control Register Original Value Lane14
    #define PCIEPHYCFG_RSV_2E1D			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_14			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane14 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_14			0xF00	//1111b/1111b/x/x Lane14 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E1C			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_14			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane14 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_14			0xF	//1111b/1111b/x/x Lane14 Downstream TX Preset Original Value
#define PCIEPHYCFG_EQUALIZATION_CTL_REG_ORIGINAL_VALUE_LANE15		0x2E1E	//Equalization Control Register Original Value Lane15
    #define PCIEPHYCFG_RSV_2E1F			BIT15	//0/0/x/x Reserved
    #define PCIEPHYCFG_USRXPRESETHITORG_15			(BIT12 + BIT13 + BIT14)	//111b/111b/x/x Lane15 Upstream RX Preset Hint Original Value
    #define PCIEPHYCFG_USTXPRESETORG_15			0xF00	//1111b/1111b/x/x Lane15 Upstream TX Preset Original Value
    #define PCIEPHYCFG_RSV_2E1E			BIT7	//0/0/x/x Reserved
    #define PCIEPHYCFG_DSRXPRESETHINTORG_15			(BIT4 + BIT5 + BIT6)	//111b/111b/x/x Lane15 Downstream RX Preset Hint Original Value
    #define PCIEPHYCFG_DSTXPRESETORG_15			0xF	//1111b/1111b/x/x Lane15 Downstream TX Preset Original Value
//PCIEEPHYCFG
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_0		0x2F00	//Control Register for PCIE CFG Shadow Registers 0
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_1		0x2F04	//Control Register for PCIE CFG Shadow Registers 1
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_2		0x2F08	//Control Register for PCIE CFG Shadow Registers 2
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_3		0x2F0C	//Control Register for PCIE CFG Shadow Registers 3
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_4		0x2F10	//Control Register for PCIE CFG Shadow Registers 4
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_5		0x2F14	//Control Register for PCIE CFG Shadow Registers 5
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_6		0x2F18	//Control Register for PCIE CFG Shadow Registers 6
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_7		0x2F1C	//Control Register for PCIE CFG Shadow Registers 7
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_CTL_REG_FOR_PCIE_CFG_SHADOW_REGS_8		0x2F20	//Control Register for PCIE CFG Shadow Registers 8
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_MASK_7_0			0xFF000000	//0/x/x/x Register Mask Bits
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_PCIEPHYCFG			BIT23	//0/x/x/x Register Bits For Shadow PCIEPHYCFG 
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_WC			BIT22	//0/x/x/x Write Enable Bit 
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_RC			BIT21	//0/x/x/x Read Enable Bit
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_DEV_4_0			0x1F0000	//0/x/x/x Device Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_RCRBH			BIT15	//0/x/x/x Register Bits For Shadow RCRBH 
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_FUN_2_0			(BIT12 + BIT13 + BIT14)	//0/x/x/x Function Number
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_REG_11_0			0xFFF	//0/x/x/x Register Offset
#define PCIEEPHYCFG_PCIE_CFG_SHADOW_REG_0		0x2F30	//PCIE CFG Shadow Register 0
    #define PCIEEPHYCFG_PCIE_SHADOW_R3_DATA_7_0			0xFF000000	//0/x/x/x Configuration Shadow Register 3
    #define PCIEEPHYCFG_PCIE_SHADOW_R2_DATA_7_0			0xFF0000	//0/x/x/x Configuration Shadow Register 2
    #define PCIEEPHYCFG_PCIE_SHADOW_R1_DATA_7_0			0xFF00	//0/x/x/x Configuration Shadow Register 1
    #define PCIEEPHYCFG_PCIE_SHADOW_R0_DATA_7_0			0xFF	//0/x/x/x Configuration Shadow Register 0
#define PCIEEPHYCFG_PCIE_CFG_SHADOW_REG_4		0x2F34	//PCIE CFG Shadow Register 4
    #define PCIEEPHYCFG_PCIE_SHADOW_R7_DATA_7_0			0xFF000000	//0/x/x/x Configuration Shadow Register 3
    #define PCIEEPHYCFG_PCIE_SHADOW_R6_DATA_7_0			0xFF0000	//0/x/x/x Configuration Shadow Register 2
    #define PCIEEPHYCFG_PCIE_SHADOW_R5_DATA_7_0			0xFF00	//0/x/x/x Configuration Shadow Register 5
    #define PCIEEPHYCFG_PCIE_SHADOW_R4_DATA_7_0			0xFF	//0/x/x/x Configuration Shadow Register 4
#define PCIEEPHYCFG_PCIE_CFG_SHADOW_REG_8		0x2F38	//PCIE CFG Shadow Register 8
    #define PCIEEPHYCFG_RSV_2F34_8			0xFFFFFF00	//0/x/x/x Reserved
    #define PCIEEPHYCFG_PCIE_SHADOW_R8_DATA_7_0			0xFF	//0/x/x/x Configuration Shadow Register 8
//PCIEPHYCFG
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE14		0x3000	//RCV CDR EQ Control Lane14
    #define PCIEPHYCFG_RSV3000PHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP14_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP14_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP14_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP14_RCVPDSEL			BIT9	//1b/x/x/x RCV Power Off Method
    #define PCIEPHYCFG_FHP14_VCOPDSEL			BIT8	//0/x/x/x VCO Power Off Method At P1
    #define PCIEPHYCFG_FHP14_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP14_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP14_EIDLESQBW			BIT3	//0/x/x/x Electrical Detection Mode Select 
    #define PCIEPHYCFG_FHP14_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x Electrical Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE14		0x3002	//Manual Set in Test Mode Lane14
    #define PCIEPHYCFG_FHP14_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP14_TXRDETPDB			BIT14	//0/x/x/x Power Down Receiver Detector.
    #define PCIEPHYCFG_FHP14_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP14_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP14_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power Down Enable in Test Mode
    #define PCIEPHYCFG_FRP14_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set in Test Mode
    #define PCIEPHYCFG_FRP14_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP14_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP14_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP14_TXEIDLESETB			BIT4	//1b/x/x/x TX Electrical Idle Control
    #define PCIEPHYCFG_FRP14_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP14_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set Register
    #define PCIEPHYCFG_FRP14_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE14_G1		0x3004	//TX_DUTY TXSW TDNCIS TDPCIS Lane14 G1
    #define PCIEPHYCFG_FRP14_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP14_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-Emphasis Set
    #define PCIEPHYCFG_FRP14_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP14_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE14_G1		0x3006	//TDCIS TXPSR TXNSR Lane14 G1
    #define PCIEPHYCFG_RSV3003PHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE14_G1		0x3008	//RCV Lane14 G1
    #define PCIEPHYCFG_RSV3004_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP14_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP14_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP14_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for vga/buf/vga_buf Respectively 
    #define PCIEPHYCFG_FRP14_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Reserved
#define PCIEPHYCFG_CDR_0_LANE14_G1		0x300A	//CDR 0 Lane14 G1
    #define PCIEPHYCFG_RSV3005_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP14_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP14_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s To P0
    #define PCIEPHYCFG_FRP14_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 to P0 
    #define PCIEPHYCFG_FRP14_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE14_G1		0x300C	//CDR 1 Lane14 G1
    #define PCIEPHYCFG_RSV3006_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP14_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP14_KTSEL_G1			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP14_NTSEL_G1			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP14_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP14_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE14_G1		0x300E	//Equalizer Adaptive 0 Lane14 G1
    #define PCIEPHYCFG_FRP14_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE14_G1		0x3010	//Equalizer Adaptive 1 Lane14 G1
    #define PCIEPHYCFG_FRP14_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x External Register for Enable Low Speed Mode after First Tuning Finished under FHPm_EQTNALWY=1 for Power Saving
    #define PCIEPHYCFG_FRP14_EQTNALWY_G1			BIT14	//0/x/x/x External Register for Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP14_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP14_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE14_G1		0x3012	//Equalizer Adaptive 2 Lane14 G1
    #define PCIEPHYCFG_FRP14_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3012_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3012_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP14_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE14_G1		0x3014	//Equalizer Adaptive 3 Lane14 G1
    #define PCIEPHYCFG_FRP14_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3014_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3014_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE14_G1		0x3016	//Equalizer Adaptive 4 Lane14 G1
    #define PCIEPHYCFG_FRP14_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3016_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3016_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE14		0x3020	//EQTNBIST Lane14
    #define PCIEPHYCFG_RSV3020_PCIEPHYCFG			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP14_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE14		0x3022	//Eye Monitor Lane14
    #define PCIEPHYCFG_RSV3022_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP14_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP14_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP14_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP14_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP14_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP14_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling When BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE14_G2		0x3024	//TX_DUTY TXSW TDNCIS TDPCIS Lane14 G2
    #define PCIEPHYCFG_FRP14_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP14_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP14_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP14_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE14_G2		0x3026	//TDCIS TXPSR TXNSR Lane14 G2
    #define PCIEPHYCFG_RSV3026_PCIEPHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE14_G2		0x3028	//RCV Lane14 G2
    #define PCIEPHYCFG_RSV3029_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP14_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP14_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP14_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP14_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing And De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE14_G2		0x302A	//CDR 0 Lane14 G2
    #define PCIEPHYCFG_RSV302A_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP14_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP14_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s To P0
    #define PCIEPHYCFG_FRP14_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP14_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE14_G2		0x302C	//CDR 1 Lane14 G2
    #define PCIEPHYCFG_RSV302C_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP14_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP14_KTSEL_G2			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP14_NTSEL_G2			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP14_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP14_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE14_G2		0x302E	//Equalizer Adaptive 0 Lane14 G2
    #define PCIEPHYCFG_FRP14_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE14_G2		0x3030	//Equalizer Adaptive 1 Lane14 G2
    #define PCIEPHYCFG_FRP14_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP14_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP14_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP14_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE14_G2		0x3032	//Equalizer Adaptive 2 Lane14 G2
    #define PCIEPHYCFG_FRP14_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3032_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3032_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE In Training Mode
    #define PCIEPHYCFG_FRP14_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE14_G2		0x3034	//Equalizer Adaptive 3 Lane14 G2
    #define PCIEPHYCFG_FRP14_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3034_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3034_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE14_G2		0x3036	//Equalizer Adaptive 4 Lane14 G2
    #define PCIEPHYCFG_FRP14_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3036_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3036_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_14		0x3040	//RCV CDR EQ Control 1 lane 14
    #define PCIEPHYCFG_RSV3040_PCIEPHYCFG			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP14_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP14_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH14_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z97		0x3042	//Reserved
    #define PCIEPHYCFG_RSV3042_PCIEPHYCFG			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE14_G3		0x3044	//TX_DUTY TXSW TDNCIS TDPCIS Lane14 G3
    #define PCIEPHYCFG_FRP14_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP14_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-Emphasis Set
    #define PCIEPHYCFG_FRP14_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP14_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE14_G3		0x3046	//TDCIS TXPSR TXNSR Lane14 G3
    #define PCIEPHYCFG_RSV3046_PCIEPHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE14_G3		0x3048	//RCV Lane14 G3
    #define PCIEPHYCFG_RSV3048_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP14_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP14_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP14_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP14_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing And De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE14_G3		0x304A	//CDR 0 Lane14 G3
    #define PCIEPHYCFG_RSV304A_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP14_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP14_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s to P0
    #define PCIEPHYCFG_FRP14_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP14_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE14_G3		0x304C	//CDR 1 Lane14 G3
    #define PCIEPHYCFG_RSV304C_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP14_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP14_KTSEL_G3			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP14_NTSEL_G3			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP14_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP14_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP14_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE14_G3		0x304E	//Equalizer Adaptive 0 Lane14 G3
    #define PCIEPHYCFG_FRP14_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE14_G3		0x3050	//Equalizer Adaptive 1 Lane14 G3
    #define PCIEPHYCFG_FRP14_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP14_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP14_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP14_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP14_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE14_G3		0x3052	//Equalizer Adaptive 2 Lane14 G3
    #define PCIEPHYCFG_FRP14_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3052_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3052_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP14_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE14_G3		0x3054	//Equalizer Adaptive 3 Lane14 G3
    #define PCIEPHYCFG_FRP14_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3054_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3054_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE14_G3		0x3056	//Equalizer Adaptive 4 Lane14 G3
    #define PCIEPHYCFG_FRP14_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3056_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP14_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3056_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP14_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE14		0x3060	//EPHY Status 0 Lane14
    #define PCIEPHYCFG_RSV3060_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3060_2_PCIEPHYCFG			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP14_EIDLESQSDET			BIT1	//HwInit/x/x/x EIDLE/Squelch Detection Flag
    #define PCIEPHYCFG_EP14_RCVDET			BIT0	//HwInit/x/x/x PCIE Mode
#define PCIEPHYCFG_EPHY_STA_1_LANE14		0x3062	//EPHY Status 1 Lane14
    #define PCIEPHYCFG_RSV3062_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3062_5_PCIEPHYCFG			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE14		0x3064	//EPHY Status 2 Lane14
    #define PCIEPHYCFG_RSV3064_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV3064_5_PCIEPHYCFG			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE14		0x3066	//BER counter result lane14
    #define PCIEPHYCFG_RSV3066_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP14_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE14		0x3068	//Ideal PI Phase for Data Sampling Lane14
    #define PCIEPHYCFG_RSV3068_PCIEPHYCFG			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP14_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase for Data Sampling
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_LANE15		0x3080	//RCV CDR EQ Control Lane15
    #define PCIEPHYCFG_RSV3080_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TX_MODE			BIT13	//0/x/x/x TX Driver Work Mode Control
    #define PCIEPHYCFG_FHP15_PG3_EQ_LS			BIT12	//0/x/x/x EQTN Tuning Speed@PCIE Gen3
    #define PCIEPHYCFG_FHP15_CDR_VT_SW			BIT11	//1b/x/x/x CDR IV Control Source Select
    #define PCIEPHYCFG_FHP15_CDR_UGB_HBW			BIT10	//0/x/x/x CDR Loop Filter Buffer BW
    #define PCIEPHYCFG_FHP15_RCVPDSEL			BIT9	//1b/x/x/x RCV Power off Method
    #define PCIEPHYCFG_FHP15_VCOPDSEL			BIT8	//0/x/x/x VCO Power Off Method at P1
    #define PCIEPHYCFG_FHP15_RCVTHSEL			BIT7	//0/x/x/x RCV VGA Gain Range Selection
    #define PCIEPHYCFG_FHP15_IVCPSEL			(BIT4 + BIT5 + BIT6)	//0/x/x/x IV Gain Select
    #define PCIEPHYCFG_FHP15_EIDLESQBW			BIT3	//0/x/x/x EIDLE/Squelch Detection Mode Select
    #define PCIEPHYCFG_FHP15_EIDLESQTH			(BIT0 + BIT1 + BIT2)	//010b/x/x/x EIDLE Detection Threshold Select
#define PCIEPHYCFG_MANUAL_SET_IN_TEST_MODE_LANE15		0x3082	//Manual Set in Test Mode Lane15
    #define PCIEPHYCFG_FHP15_RDETEN			BIT15	//0/x/x/x Receiver Detector Enable
    #define PCIEPHYCFG_FHP15_TXRDETPDB			BIT14	//0/x/x/x Receiver Detector Power Down in Test Mode
    #define PCIEPHYCFG_FHP15_RXHZ			BIT13	//0/x/x/x Rx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP15_TXHZ			BIT12	//0/x/x/x Tx High Impedance Enable in Test Mode
    #define PCIEPHYCFG_FHP15_RXDEIDPDB			BIT11	//0/x/x/x Rx Electrical Idle Power Down Enable in Test Mode
    #define PCIEPHYCFG_FRP15_RXPWRSET			(BIT9 + BIT10)	//0/x/x/x Rx Power Set In Test Mode
    #define PCIEPHYCFG_FRP15_RXPWRSETEN			BIT8	//0/x/x/x Rx Power Set Enable in Test Mode
    #define PCIEPHYCFG_FRP15_TXPWRSET			(BIT6 + BIT7)	//0/x/x/x Tx Power Set in Test Mode
    #define PCIEPHYCFG_FRP15_TXPWRSETEN			BIT5	//0/x/x/x Tx Power Manual Set Enable in Test Mode
    #define PCIEPHYCFG_FRP15_TXEIDLESETB			BIT4	//1b/x/x/x Tx Electrical Idle Set in Test Mode
    #define PCIEPHYCFG_FRP15_TXEIDLESETEN			BIT3	//0/x/x/x Tx Electrical Idle Enable in Test Mode
    #define PCIEPHYCFG_FRP15_SPEEDSET			(BIT1 + BIT2)	//0/x/x/x Speed Manual Set in Test Mode
    #define PCIEPHYCFG_FRP15_SPEEDSETEN			BIT0	//0/x/x/x Speed Manual Set Enable in Test Mode
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE15_G1		0x3084	//TX_DUTY TXSW TDNCIS TDPCIS Lane15 G1
    #define PCIEPHYCFG_FRP15_TDPCIS_G1			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP15_TDNCIS_G1			0x3F0	//100010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP15_TXSW_G1			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP15_TX_DUTY_G1			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE15_G1		0x3086	//TDCIS TXPSR TXNSR Lane15 G1
    #define PCIEPHYCFG_RSV3087_PCIEPHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXNSR_G1			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXPSR_G1			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TDCIS_G1			0x3F	//011101b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE15_G1		0x3088	//RCV Lane15 G1
    #define PCIEPHYCFG_RSV3089_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_RCVEQ_POW_G1			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP15_RCVPWRSW_G1			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP15_TXPWRSW_G1			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP15_RCV_HBW_G1			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option For VGA/BUF/VGA_BUF Respectively 
    #define PCIEPHYCFG_FRP15_FTXSWN_G1			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-Emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE15_G1		0x308A	//CDR 0 Lane15 G1
    #define PCIEPHYCFG_RSV308B_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_P0SEXT_G1			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP15_P1EXT_G1			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP15_FTSRATIO_G1			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s to P0
    #define PCIEPHYCFG_FRP15_FDRATIO_G1			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP15_RXCLKSEL_G1			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge Of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE15_G1		0x308C	//CDR 1 Lane15 G1
    #define PCIEPHYCFG_RSV308D_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_KLFSEL_G1			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP15_NLFSEL_G1			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP15_KTSEL_G1			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP15_NTSEL_G1			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP15_KIPCSEL_G1			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPCSEL_G1			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP15_KIPRSEL_G1			(BIT2 + BIT3)	//10b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPRSEL_G1			(BIT0 + BIT1)	//11b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE15_G1		0x308E	//Equalizer Adaptive 0 Lane15 G1
    #define PCIEPHYCFG_FRP15_EQTNDCBW_G1			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNMODE_G1			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE15_G1		0x3090	//Equalizer Adaptive 1 Lane15 G1
    #define PCIEPHYCFG_FRP15_EQTNSPDSWEN_G1			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished
    #define PCIEPHYCFG_FRP15_EQTNALWY_G1			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP15_EQTNDFE_G1			(BIT12 + BIT13)	//0/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP15_EQTNWTBW_G1			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNOSBW_G1			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNHFBW_G1			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE15_G1		0x3092	//Equalizer Adaptive 2 Lane15 G1
    #define PCIEPHYCFG_FRP15_DCSETEN_G1			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3092_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_DCSET_G1			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV3092_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_EQTNDFETRN_G1			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP15_EQTNVTH_G1			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE15_G1		0x3094	//Equalizer Adaptive 3 Lane15 G1
    #define PCIEPHYCFG_FRP15_OSSETEN_G1			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3094_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_OSSET_G1			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_HFSETEN_G1			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3094_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_HFSET_G1			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE15_G1		0x3096	//Equalizer Adaptive 4 Lane15 G1
    #define PCIEPHYCFG_FRP15_W2SETEN_G1			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3096_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W2SET_G1			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_W1SETEN_G1			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV3096_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W1SET_G1			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EQTNBIST_LANE15		0x30A0	//EQTNBIST Lane15
    #define PCIEPHYCFG_RSV30A0_PCIEPHYCFG			0xFFF0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_EQTNBISTEN			BIT3	//0/x/x/x Tuning Function BIST Enable
    #define PCIEPHYCFG_FRP15_EQTNBISTEVT			(BIT0 + BIT1 + BIT2)	//0/x/x/x Tuning Function BIST: Event Selection
#define PCIEPHYCFG_EYE_MONITOR_LANE15		0x30A2	//Eye Monitor Lane15
    #define PCIEPHYCFG_RSV30A3_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_LP15_TX_ISHORT_EN			BIT14	//0/x/x/x EIDLE Bypass Current Control
    #define PCIEPHYCFG_LP15_TXMODE			BIT13	//0/x/x/x TX Operating Mode
    #define PCIEPHYCFG_FRP15_BERCNTRSTB			BIT12	//0/x/x/x BER Counter Result Reset (Low Active)
    #define PCIEPHYCFG_FHP15_BPFBW			0xF00	//0/x/x/x PI Bandwidth Tuning
    #define PCIEPHYCFG_FRP15_BERCNTEN			BIT7	//0/x/x/x BER Counter Function Enable
    #define PCIEPHYCFG_FRP15_PH_OS			0x7F	//0/x/x/x Actual PI Phase for Data Sampling when BER Counter
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE15_G2		0x30A4	//TX_DUTY TXSW TDNCIS TDPCIS lane15 G2
    #define PCIEPHYCFG_FRP15_TDPCIS_G2			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP15_TDNCIS_G2			0x3F0	//110010b/x/x/x TX De-emphasis Set
    #define PCIEPHYCFG_FRP15_TXSW_G2			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP15_TX_DUTY_G2			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE15_G2		0x30A6	//TDCIS TXPSR TXNSR lane15 G2
    #define PCIEPHYCFG_RSV30A7_PCIEPHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXNSR_G2			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXPSR_G2			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TDCIS_G2			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE15_G2		0x30A8	//RCV Lane15 G2
    #define PCIEPHYCFG_RSV30A9_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_RCVEQ_POW_G2			(BIT8 + BIT9)	//0/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP15_RCVPWRSW_G2			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP15_TXPWRSW_G2			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP15_RCV_HBW_G2			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option For VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP15_FTXSWN_G2			(BIT0 + BIT1)	//0/x/x/x Far-End TX Swing and De-Emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE15_G2		0x30AA	//CDR 0 Lane15 G2
    #define PCIEPHYCFG_RSV30AB_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_P0SEXT_G2			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP15_P1EXT_G2			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP15_FTSRATIO_G2			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio During P0s to P0
    #define PCIEPHYCFG_FRP15_FDRATIO_G2			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP15_RXCLKSEL_G2			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge Of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE15_G2		0x30AC	//CDR 1 Lane15 G2
    #define PCIEPHYCFG_RSV30AD_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_KLFSEL_G2			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP15_NLFSEL_G2			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP15_KTSEL_G2			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP15_NTSEL_G2			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP15_KIPCSEL_G2			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPCSEL_G2			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP15_KIPRSEL_G2			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPRSEL_G2			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE15_G2		0x30AE	//Equalizer Adaptive 0 Lane15 G2
    #define PCIEPHYCFG_FRP15_EQTNDCBW_G2			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNMODE_G2			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE15_G2		0x30B0	//Equalizer Adaptive 1 Lane15 G2
    #define PCIEPHYCFG_FRP15_EQTNSPDSWEN_G2			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP15_EQTNALWY_G2			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP15_EQTNDFE_G2			(BIT12 + BIT13)	//01b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP15_EQTNWTBW_G2			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNOSBW_G2			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNHFBW_G2			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE15_G2		0x30B2	//Equalizer Adaptive 2 Lane15 G2
    #define PCIEPHYCFG_FRP15_DCSETEN_G2			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30B3_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_DCSET_G2			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV30B3_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_EQTNDFETRN_G2			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP15_EQTNVTH_G2			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE15_G2		0x30B4	//Equalizer Adaptive 3 Lane15 G2
    #define PCIEPHYCFG_FRP15_OSSETEN_G2			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30B4_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_OSSET_G2			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_HFSETEN_G2			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30B4_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_HFSET_G2			0x1F	//11111b/x/x/x LEQ HF Gain Initial Or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE15_G2		0x30B6	//Equalizer Adaptive 4 Lane15 G2
    #define PCIEPHYCFG_FRP15_W2SETEN_G2			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30B6_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W2SET_G2			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_W1SETEN_G2			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30B6_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W1SET_G2			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_RCV_CDR_EQ_CTL_1_LANE_15		0x30C0	//RCV CDR EQ Control 1 lane 15
    #define PCIEPHYCFG_RSV30C0_PCIEPHYCFG			0xFFC0	//0/x/x/x Reserved
    #define PCIEPHYCFG_FHP15_CKBUFSEL_CDR			(BIT4 + BIT5)	//0/x/x/x PI Clock Buffer Selection
    #define PCIEPHYCFG_FHP15_ABCSEL_CDR			(BIT2 + BIT3)	//0/x/x/x Loop Bandwidth Mode Selection
    #define PCIEPHYCFG_FH15_TX_REGDN			(BIT0 + BIT1)	//0/x/x/x TX Driver Output CM Voltage and Regulator Voltage Control
#define PCIEPHYCFG_RESERVED_Z98		0x30C2	//Reserved
    #define PCIEPHYCFG_RSV30C2_PCIEPHYCFG			0xFFFF	//0/x/x/x Reserved
#define PCIEPHYCFG_TX_DUTY_TXSW_TDNCIS_TDPCIS_LANE15_G3		0x30C4	//TX_DUTY TXSW TDNCIS TDPCIS Lane15 G3
    #define PCIEPHYCFG_FRP15_TDPCIS_G3			0xFC00	//0/x/x/x TX Preshoot Set
    #define PCIEPHYCFG_FRP15_TDNCIS_G3			0x3F0	//111101b/x/x/x TX De-Emphasis Set
    #define PCIEPHYCFG_FRP15_TXSW_G3			(BIT2 + BIT3)	//0/x/x/x Tx Output Swing Control Set
    #define PCIEPHYCFG_FRP15_TX_DUTY_G3			(BIT0 + BIT1)	//0/x/x/x TX Clock Duty Control
#define PCIEPHYCFG_TDCIS_TXPSR_TXNSR_LANE15_G3		0x30C6	//TDCIS TXPSR TXNSR Lane15 G3
    #define PCIEPHYCFG_RSV30C6_PCIEPHYCFG			0xF000	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXNSR_G3			(BIT9 + BIT10 + BIT11)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TXPSR_G3			(BIT6 + BIT7 + BIT8)	//011b/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_TDCIS_G3			0x3F	//011011b/x/x/x Reserved
#define PCIEPHYCFG_RCV_LANE15_G3		0x30C8	//RCV Lane15 G3
    #define PCIEPHYCFG_RSV30C8_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_RCVEQ_POW_G3			(BIT8 + BIT9)	//11b/x/x/x RCV EQ Power Consumption Tuning
    #define PCIEPHYCFG_FRP15_RCVPWRSW_G3			BIT7	//0/x/x/x RCV Power Supply Switch
    #define PCIEPHYCFG_FRP15_TXPWRSW_G3			(BIT5 + BIT6)	//11b/x/x/x TX Power Supply Switch
    #define PCIEPHYCFG_FRP15_RCV_HBW_G3			(BIT2 + BIT3 + BIT4)	//100b/x/x/x RCV HBW Option for VGA/BUF/VGA_BUF Respectively
    #define PCIEPHYCFG_FRP15_FTXSWN_G3			(BIT0 + BIT1)	//0/x/x/x Far-end TX Swing and De-emphasis as Reference for RX Equalizer and Possibly Set in Bias by Customer
#define PCIEPHYCFG_CDR_0_LANE15_G3		0x30CA	//CDR 0 Lane15 G3
    #define PCIEPHYCFG_RSV30CA_PCIEPHYCFG			BIT15	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_P0SEXT_G3			(BIT12 + BIT13 + BIT14)	//100b/x/x/x P0s Exit Latency
    #define PCIEPHYCFG_FRP15_P1EXT_G3			(BIT9 + BIT10 + BIT11)	//100b/x/x/x P1 Exit Latency
    #define PCIEPHYCFG_FRP15_FTSRATIO_G3			(BIT6 + BIT7 + BIT8)	//100b/x/x/x PD Training Mode Ratio during P0s To P0
    #define PCIEPHYCFG_FRP15_FDRATIO_G3			(BIT3 + BIT4 + BIT5)	//010b/x/x/x FD Mode Ratio During P2 To P0
    #define PCIEPHYCFG_FRP15_RXCLKSEL_G3			(BIT0 + BIT1 + BIT2)	//0/x/x/x Rise Edge Of RXCLK Select
#define PCIEPHYCFG_CDR_1_LANE15_G3		0x30CC	//CDR 1 Lane15 G3
    #define PCIEPHYCFG_RSV30CC_PCIEPHYCFG			(BIT14 + BIT15)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_KLFSEL_G3			(BIT12 + BIT13)	//10b/x/x/x LF Select During Tracking Mode
    #define PCIEPHYCFG_FRP15_NLFSEL_G3			(BIT10 + BIT11)	//01b/x/x/x LF Select During Training Mode
    #define PCIEPHYCFG_FRP15_KTSEL_G3			BIT9	//0/x/x/x Update Time During Tracking Mode
    #define PCIEPHYCFG_FRP15_NTSEL_G3			BIT8	//1b/x/x/x Update Time During Training Mode
    #define PCIEPHYCFG_FRP15_KIPCSEL_G3			(BIT6 + BIT7)	//0/x/x/x Gain2 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPCSEL_G3			(BIT4 + BIT5)	//01b/x/x/x Gain2 During Training Mode
    #define PCIEPHYCFG_FRP15_KIPRSEL_G3			(BIT2 + BIT3)	//01b/x/x/x Gain1 During Tracking Mode
    #define PCIEPHYCFG_FRP15_NIPRSEL_G3			(BIT0 + BIT1)	//10b/x/x/x Gain1 During Training Mode
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_0_LANE15_G3		0x30CE	//Equalizer Adaptive 0 Lane15 G3
    #define PCIEPHYCFG_FRP15_EQTNDCBW_G3			0xF000	//1h/x/x/x LEQ DC Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNMODE_G3			0xFFF	//E81h/x/x/x Equalizer Tuning Mode Select
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_1_LANE15_G3		0x30D0	//Equalizer Adaptive 1 Lane15 G3
    #define PCIEPHYCFG_FRP15_EQTNSPDSWEN_G3			BIT15	//1b/x/x/x Enable Low Speed Mode after First Tuning Finished 
    #define PCIEPHYCFG_FRP15_EQTNALWY_G3			BIT14	//0/x/x/x Equalizer Always Tuning Mode Enable
    #define PCIEPHYCFG_FRP15_EQTNDFE_G3			(BIT12 + BIT13)	//10b/x/x/x DFE Tap Selection
    #define PCIEPHYCFG_FRP15_EQTNWTBW_G3			0xF00	//1h/x/x/x LEQ WT Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNOSBW_G3			0xF0	//1h/x/x/x LEQ OS Gain Tuning Bandwidth Set
    #define PCIEPHYCFG_FRP15_EQTNHFBW_G3			0xF	//1h/x/x/x LEQ HF Gain Tuning Bandwidth Set
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_2_LANE15_G3		0x30D2	//Equalizer Adaptive 2 Lane15 G3
    #define PCIEPHYCFG_FRP15_DCSETEN_G3			BIT15	//0/x/x/x LEQ DC Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30D2_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_DCSET_G3			0x1F00	//11111b/x/x/x LEQ DC Gain Initial or Set Value
    #define PCIEPHYCFG_RSV30D2_7_PCIEPHYCFG			BIT7	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_EQTNDFETRN_G3			BIT6	//1b/x/x/x Enable DFE in Training Mode
    #define PCIEPHYCFG_FRP15_EQTNVTH_G3			0x3F	//001111b/x/x/x Equalizer Tuning Threshold Voltage
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_3_LANE15_G3		0x30D4	//Equalizer Adaptive 3 Lane15 G3
    #define PCIEPHYCFG_FRP15_OSSETEN_G3			BIT15	//0/x/x/x LEQ OS Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30D4_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_OSSET_G3			0x1F00	//0/x/x/x LEQ OS Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_HFSETEN_G3			BIT7	//0/x/x/x LEQ HF Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30D4_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_HFSET_G3			0x1F	//11111b/x/x/x LEQ HF Gain Initial or Set Value
#define PCIEPHYCFG_EQUALIZER_ADAPTIVE_4_LANE15_G3		0x30D6	//Equalizer Adaptive 4 lane15 G3
    #define PCIEPHYCFG_FRP15_W2SETEN_G3			BIT15	//0/x/x/x LEQ W2 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30D6_13_PCIEPHYCFG			(BIT13 + BIT14)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W2SET_G3			0x1F00	//00001b/x/x/x LEQ W2 Gain Initial or Set Value
    #define PCIEPHYCFG_FRP15_W1SETEN_G3			BIT7	//0/x/x/x LEQ W1 Gain Manual Set Enable
    #define PCIEPHYCFG_RSV30D6_5_PCIEPHYCFG			(BIT5 + BIT6)	//0/x/x/x Reserved
    #define PCIEPHYCFG_FRP15_W1SET_G3			0x1F	//00001b/x/x/x LEQ W1 Gain Initial or Set Value
#define PCIEPHYCFG_EPHY_STA_0_LANE15		0x30E0	//EPHY Status 0 Lane15
    #define PCIEPHYCFG_RSV30E0_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV30E0_2_PCIEPHYCFG			0xFC	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP15_EIDLESQSDET			BIT1	//HwInit/x/x/x EIDLE/Squelch Detection Flag
    #define PCIEPHYCFG_EP15_RCVDET			BIT0	//HwInit/x/x/x Receiver Detection Flag (1: Receiver Detected)
#define PCIEPHYCFG_EPHY_STA_1_LANE15		0x30E2	//EPHY Status 1 Lane15
    #define PCIEPHYCFG_RSV30E2_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV30E2_5_PCIEPHYCFG			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_EPHY_STA_2_LANE15		0x30E4	//EPHY Status 2 Lane15
    #define PCIEPHYCFG_RSV30E4_13_PCIEPHYCFG			0xFF00	//0/x/x/x Reserved
    #define PCIEPHYCFG_RSV30E4_5_PCIEPHYCFG			0xFF	//0/x/x/x Reserved
#define PCIEPHYCFG_BER_CNTER_RESULT_LANE15		0x30E6	//BER Counter Result Lane15
    #define PCIEPHYCFG_RSV30E6_PCIEPHYCFG			0xFC00	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP15_BERCNT			0x3FF	//HwInit/x/x/x BER Counter Result
#define PCIEPHYCFG_IDEAL_PI_PHASE_FOR_DATA_SAMPLING_LANE15		0x30E8	//Ideal PI Phase for Data Sampling Lane15
    #define PCIEPHYCFG_RSV30E8_PCIEPHYCFG			0xFF80	//0/x/x/x Reserved
    #define PCIEPHYCFG_EP15_PH_IDEAL			0x7F	//HwInit/x/x/x Ideal PI Phase For Data Sampling
#endif

