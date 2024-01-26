/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2012-2017,2019, The Linux Foundation. All rights reserved.
 */

#ifndef _A300_REG_H
#define _A300_REG_H

/* Interrupt bit positions within RBBM_INT_0 */

#define A3XX_INT_RBBM_GPU_IDLE 0
#define A3XX_INT_RBBM_AHB_ERROR 1
#define A3XX_INT_RBBM_REG_TIMEOUT 2
#define A3XX_INT_RBBM_ME_MS_TIMEOUT 3
#define A3XX_INT_RBBM_PFP_MS_TIMEOUT 4
#define A3XX_INT_RBBM_ATB_BUS_OVERFLOW 5
#define A3XX_INT_VFD_ERROR 6
#define A3XX_INT_CP_SW_INT 7
#define A3XX_INT_CP_T0_PACKET_IN_IB 8
#define A3XX_INT_CP_OPCODE_ERROR 9
#define A3XX_INT_CP_RESERVED_BIT_ERROR 10
#define A3XX_INT_CP_HW_FAULT 11
#define A3XX_INT_CP_DMA 12
#define A3XX_INT_CP_IB2_INT 13
#define A3XX_INT_CP_IB1_INT 14
#define A3XX_INT_CP_RB_INT 15
#define A3XX_INT_CP_REG_PROTECT_FAULT 16
#define A3XX_INT_CP_RB_DONE_TS 17
#define A3XX_INT_CP_VS_DONE_TS 18
#define A3XX_INT_CP_PS_DONE_TS 19
#define A3XX_INT_CACHE_FLUSH_TS 20
#define A3XX_INT_CP_AHB_ERROR_HALT 21
#define A3XX_INT_MISC_HANG_DETECT 24
#define A3XX_INT_UCHE_OOB_ACCESS 25

/* CP_EVENT_WRITE events */
#define CACHE_FLUSH_TS 4

/* Register definitions */

#define A3XX_RBBM_CLOCK_CTL 0x010
#define A3XX_RBBM_SP_HYST_CNT 0x012
#define A3XX_RBBM_SW_RESET_CMD 0x018
#define A3XX_RBBM_AHB_CTL0 0x020
#define A3XX_RBBM_AHB_CTL1 0x021
#define A3XX_RBBM_AHB_CMD 0x022
#define A3XX_RBBM_AHB_ERROR_STATUS 0x027
#define A3XX_RBBM_GPR0_CTL 0x02E
/* This the same register as on A2XX, just in a different place */
#define A3XX_RBBM_STATUS 0x030
#define A3XX_RBBM_WAIT_IDLE_CLOCKS_CTL 0x33
#define A3XX_RBBM_INTERFACE_HANG_INT_CTL 0x50
#define A3XX_RBBM_INT_CLEAR_CMD 0x061
#define A3XX_RBBM_INT_0_MASK 0x063
#define A3XX_RBBM_INT_0_STATUS 0x064
#define A3XX_RBBM_PERFCTR_CTL 0x80
#define A3XX_RBBM_PERFCTR_LOAD_CMD0 0x81
#define A3XX_RBBM_PERFCTR_LOAD_CMD1 0x82
#define A3XX_RBBM_PERFCTR_LOAD_VALUE_LO 0x84
#define A3XX_RBBM_PERFCTR_LOAD_VALUE_HI 0x85
#define A3XX_RBBM_PERFCOUNTER0_SELECT 0x86
#define A3XX_RBBM_PERFCOUNTER1_SELECT 0x87
#define A3XX_RBBM_GPU_BUSY_MASKED 0x88
#define A3XX_RBBM_PERFCTR_CP_0_LO 0x90
#define A3XX_RBBM_PERFCTR_CP_0_HI 0x91
#define A3XX_RBBM_PERFCTR_RBBM_0_LO 0x92
#define A3XX_RBBM_PERFCTR_RBBM_0_HI 0x93
#define A3XX_RBBM_PERFCTR_RBBM_1_LO 0x94
#define A3XX_RBBM_PERFCTR_RBBM_1_HI 0x95
#define A3XX_RBBM_PERFCTR_PC_0_LO 0x96
#define A3XX_RBBM_PERFCTR_PC_0_HI 0x97
#define A3XX_RBBM_PERFCTR_PC_1_LO 0x98
#define A3XX_RBBM_PERFCTR_PC_1_HI 0x99
#define A3XX_RBBM_PERFCTR_PC_2_LO 0x9A
#define A3XX_RBBM_PERFCTR_PC_2_HI 0x9B
#define A3XX_RBBM_PERFCTR_PC_3_LO 0x9C
#define A3XX_RBBM_PERFCTR_PC_3_HI 0x9D
#define A3XX_RBBM_PERFCTR_VFD_0_LO 0x9E
#define A3XX_RBBM_PERFCTR_VFD_0_HI 0x9F
#define A3XX_RBBM_PERFCTR_VFD_1_LO 0xA0
#define A3XX_RBBM_PERFCTR_VFD_1_HI 0xA1
#define A3XX_RBBM_PERFCTR_HLSQ_0_LO 0xA2
#define A3XX_RBBM_PERFCTR_HLSQ_0_HI 0xA3
#define A3XX_RBBM_PERFCTR_HLSQ_1_LO 0xA4
#define A3XX_RBBM_PERFCTR_HLSQ_1_HI 0xA5
#define A3XX_RBBM_PERFCTR_HLSQ_2_LO 0xA6
#define A3XX_RBBM_PERFCTR_HLSQ_2_HI 0xA7
#define A3XX_RBBM_PERFCTR_HLSQ_3_LO 0xA8
#define A3XX_RBBM_PERFCTR_HLSQ_3_HI 0xA9
#define A3XX_RBBM_PERFCTR_HLSQ_4_LO 0xAA
#define A3XX_RBBM_PERFCTR_HLSQ_4_HI 0xAB
#define A3XX_RBBM_PERFCTR_HLSQ_5_LO 0xAC
#define A3XX_RBBM_PERFCTR_HLSQ_5_HI 0xAD
#define A3XX_RBBM_PERFCTR_VPC_0_LO 0xAE
#define A3XX_RBBM_PERFCTR_VPC_0_HI 0xAF
#define A3XX_RBBM_PERFCTR_VPC_1_LO 0xB0
#define A3XX_RBBM_PERFCTR_VPC_1_HI 0xB1
#define A3XX_RBBM_PERFCTR_TSE_0_LO 0xB2
#define A3XX_RBBM_PERFCTR_TSE_0_HI 0xB3
#define A3XX_RBBM_PERFCTR_TSE_1_LO 0xB4
#define A3XX_RBBM_PERFCTR_TSE_1_HI 0xB5
#define A3XX_RBBM_PERFCTR_RAS_0_LO 0xB6
#define A3XX_RBBM_PERFCTR_RAS_0_HI 0xB7
#define A3XX_RBBM_PERFCTR_RAS_1_LO 0xB8
#define A3XX_RBBM_PERFCTR_RAS_1_HI 0xB9
#define A3XX_RBBM_PERFCTR_UCHE_0_LO 0xBA
#define A3XX_RBBM_PERFCTR_UCHE_0_HI 0xBB
#define A3XX_RBBM_PERFCTR_UCHE_1_LO 0xBC
#define A3XX_RBBM_PERFCTR_UCHE_1_HI 0xBD
#define A3XX_RBBM_PERFCTR_UCHE_2_LO 0xBE
#define A3XX_RBBM_PERFCTR_UCHE_2_HI 0xBF
#define A3XX_RBBM_PERFCTR_UCHE_3_LO 0xC0
#define A3XX_RBBM_PERFCTR_UCHE_3_HI 0xC1
#define A3XX_RBBM_PERFCTR_UCHE_4_LO 0xC2
#define A3XX_RBBM_PERFCTR_UCHE_4_HI 0xC3
#define A3XX_RBBM_PERFCTR_UCHE_5_LO 0xC4
#define A3XX_RBBM_PERFCTR_UCHE_5_HI 0xC5
#define A3XX_RBBM_PERFCTR_TP_0_LO 0xC6
#define A3XX_RBBM_PERFCTR_TP_0_HI 0xC7
#define A3XX_RBBM_PERFCTR_TP_1_LO 0xC8
#define A3XX_RBBM_PERFCTR_TP_1_HI 0xC9
#define A3XX_RBBM_PERFCTR_TP_2_LO 0xCA
#define A3XX_RBBM_PERFCTR_TP_2_HI 0xCB
#define A3XX_RBBM_PERFCTR_TP_3_LO 0xCC
#define A3XX_RBBM_PERFCTR_TP_3_HI 0xCD
#define A3XX_RBBM_PERFCTR_TP_4_LO 0xCE
#define A3XX_RBBM_PERFCTR_TP_4_HI 0xCF
#define A3XX_RBBM_PERFCTR_TP_5_LO 0xD0
#define A3XX_RBBM_PERFCTR_TP_5_HI 0xD1
#define A3XX_RBBM_PERFCTR_SP_0_LO 0xD2
#define A3XX_RBBM_PERFCTR_SP_0_HI 0xD3
#define A3XX_RBBM_PERFCTR_SP_1_LO 0xD4
#define A3XX_RBBM_PERFCTR_SP_1_HI 0xD5
#define A3XX_RBBM_PERFCTR_SP_2_LO 0xD6
#define A3XX_RBBM_PERFCTR_SP_2_HI 0xD7
#define A3XX_RBBM_PERFCTR_SP_3_LO 0xD8
#define A3XX_RBBM_PERFCTR_SP_3_HI 0xD9
#define A3XX_RBBM_PERFCTR_SP_4_LO 0xDA
#define A3XX_RBBM_PERFCTR_SP_4_HI 0xDB
#define A3XX_RBBM_PERFCTR_SP_5_LO 0xDC
#define A3XX_RBBM_PERFCTR_SP_5_HI 0xDD
#define A3XX_RBBM_PERFCTR_SP_6_LO 0xDE
#define A3XX_RBBM_PERFCTR_SP_6_HI 0xDF
#define A3XX_RBBM_PERFCTR_SP_7_LO 0xE0
#define A3XX_RBBM_PERFCTR_SP_7_HI 0xE1
#define A3XX_RBBM_PERFCTR_RB_0_LO 0xE2
#define A3XX_RBBM_PERFCTR_RB_0_HI 0xE3
#define A3XX_RBBM_PERFCTR_RB_1_LO 0xE4
#define A3XX_RBBM_PERFCTR_RB_1_HI 0xE5

#define A3XX_RBBM_RBBM_CTL 0x100
#define A3XX_RBBM_PERFCTR_PWR_0_LO 0x0EA
#define A3XX_RBBM_PERFCTR_PWR_0_HI 0x0EB
#define A3XX_RBBM_PERFCTR_PWR_1_LO 0x0EC
#define A3XX_RBBM_PERFCTR_PWR_1_HI 0x0ED
#define A3XX_RBBM_DEBUG_BUS_CTL 0x111
#define A3XX_RBBM_DEBUG_BUS_DATA_STATUS 0x112
#define A3XX_RBBM_DEBUG_BUS_STB_CTL0 0x11B
#define A3XX_RBBM_DEBUG_BUS_STB_CTL1 0x11C
#define A3XX_RBBM_INT_TRACE_BUS_CTL 0x11D
#define A3XX_RBBM_EXT_TRACE_BUS_CTL 0x11E
#define A3XX_RBBM_EXT_TRACE_STOP_CNT 0x11F
#define A3XX_RBBM_EXT_TRACE_START_CNT 0x120
#define A3XX_RBBM_EXT_TRACE_PERIOD_CNT 0x121
#define A3XX_RBBM_EXT_TRACE_CMD 0x122
#define A3XX_CP_RB_BASE 0x01C0
#define A3XX_CP_RB_CNTL 0x01C1
#define A3XX_CP_RB_RPTR 0x01C4
#define A3XX_CP_RB_WPTR 0x01C5
/* Following two are same as on A2XX, just in a different place */
#define A3XX_CP_PFP_UCODE_ADDR 0x1C9
#define A3XX_CP_PFP_UCODE_DATA 0x1CA
#define A3XX_CP_ROQ_ADDR 0x1CC
#define A3XX_CP_ROQ_DATA 0x1CD
#define A3XX_CP_MERCIU_ADDR 0x1D1
#define A3XX_CP_MERCIU_DATA 0x1D2
#define A3XX_CP_MERCIU_DATA2 0x1D3
#define A3XX_CP_QUEUE_THRESHOLDS 0x01D5
#define A3XX_CP_MEQ_ADDR 0x1DA
#define A3XX_CP_MEQ_DATA 0x1DB
#define A3XX_CP_STATE_DEBUG_INDEX 0x01EC
#define A3XX_CP_STATE_DEBUG_DATA 0x01ED
#define A3XX_CP_CNTL 0x01F4
#define A3XX_CP_WFI_PEND_CTR 0x01F5
#define A3XX_CP_ME_CNTL 0x01F6
#define A3XX_CP_ME_STATUS 0x01F7
#define A3XX_CP_ME_RAM_WADDR 0x01F8
#define A3XX_CP_ME_RAM_RADDR 0x01F9
#define A3XX_CP_ME_RAM_DATA 0x01FA
#define A3XX_CP_DEBUG 0x01FC

#define A3XX_RBBM_PM_OVERRIDE2 0x039D

#define A3XX_CP_PERFCOUNTER_SELECT 0x445
#define A3XX_CP_IB1_BASE 0x0458
#define A3XX_CP_IB1_BUFSZ 0x0459
#define A3XX_CP_IB2_BASE 0x045A
#define A3XX_CP_IB2_BUFSZ 0x045B

#define A3XX_CP_HW_FAULT  0x45C
#define A3XX_CP_PROTECT_CTRL 0x45E
#define A3XX_CP_PROTECT_STATUS 0x45F
#define A3XX_CP_PROTECT_REG_0 0x460
#define A3XX_CP_STAT 0x047F
#define A3XX_CP_SCRATCH_REG0 0x578
#define A3XX_CP_SCRATCH_REG6 0x57E
#define A3XX_CP_SCRATCH_REG7 0x57F
#define A3XX_VSC_SIZE_ADDRESS 0xC02
#define A3XX_VSC_PIPE_DATA_ADDRESS_0 0xC07
#define A3XX_VSC_PIPE_DATA_LENGTH_0 0xC08
#define A3XX_VSC_PIPE_DATA_ADDRESS_1 0xC0A
#define A3XX_VSC_PIPE_DATA_LENGTH_1 0xC0B
#define A3XX_VSC_PIPE_DATA_ADDRESS_2 0xC0D
#define A3XX_VSC_PIPE_DATA_LENGTH_2 0xC0E
#define A3XX_VSC_PIPE_DATA_ADDRESS_3 0xC10
#define A3XX_VSC_PIPE_DATA_LENGTH_3 0xC11
#define A3XX_VSC_PIPE_DATA_ADDRESS_4 0xC13
#define A3XX_VSC_PIPE_DATA_LENGTH_4 0xC14
#define A3XX_VSC_PIPE_DATA_ADDRESS_5 0xC16
#define A3XX_VSC_PIPE_DATA_LENGTH_5 0xC17
#define A3XX_VSC_PIPE_DATA_ADDRESS_6 0xC19
#define A3XX_VSC_PIPE_DATA_LENGTH_6 0xC1A
#define A3XX_VSC_PIPE_DATA_ADDRESS_7 0xC1C
#define A3XX_VSC_PIPE_DATA_LENGTH_7 0xC1D
#define A3XX_PC_PERFCOUNTER0_SELECT 0xC48
#define A3XX_PC_PERFCOUNTER1_SELECT 0xC49
#define A3XX_PC_PERFCOUNTER2_SELECT 0xC4A
#define A3XX_PC_PERFCOUNTER3_SELECT 0xC4B
#define A3XX_GRAS_TSE_DEBUG_ECO 0xC81
#define A3XX_GRAS_PERFCOUNTER0_SELECT 0xC88
#define A3XX_GRAS_PERFCOUNTER1_SELECT 0xC89
#define A3XX_GRAS_PERFCOUNTER2_SELECT 0xC8A
#define A3XX_GRAS_PERFCOUNTER3_SELECT 0xC8B
#define A3XX_GRAS_CL_USER_PLANE_X0 0xCA0
#define A3XX_GRAS_CL_USER_PLANE_Y0 0xCA1
#define A3XX_GRAS_CL_USER_PLANE_Z0 0xCA2
#define A3XX_GRAS_CL_USER_PLANE_W0 0xCA3
#define A3XX_GRAS_CL_USER_PLANE_X1 0xCA4
#define A3XX_GRAS_CL_USER_PLANE_Y1 0xCA5
#define A3XX_GRAS_CL_USER_PLANE_Z1 0xCA6
#define A3XX_GRAS_CL_USER_PLANE_W1 0xCA7
#define A3XX_GRAS_CL_USER_PLANE_X2 0xCA8
#define A3XX_GRAS_CL_USER_PLANE_Y2 0xCA9
#define A3XX_GRAS_CL_USER_PLANE_Z2 0xCAA
#define A3XX_GRAS_CL_USER_PLANE_W2 0xCAB
#define A3XX_GRAS_CL_USER_PLANE_X3 0xCAC
#define A3XX_GRAS_CL_USER_PLANE_Y3 0xCAD
#define A3XX_GRAS_CL_USER_PLANE_Z3 0xCAE
#define A3XX_GRAS_CL_USER_PLANE_W3 0xCAF
#define A3XX_GRAS_CL_USER_PLANE_X4 0xCB0
#define A3XX_GRAS_CL_USER_PLANE_Y4 0xCB1
#define A3XX_GRAS_CL_USER_PLANE_Z4 0xCB2
#define A3XX_GRAS_CL_USER_PLANE_W4 0xCB3
#define A3XX_GRAS_CL_USER_PLANE_X5 0xCB4
#define A3XX_GRAS_CL_USER_PLANE_Y5 0xCB5
#define A3XX_GRAS_CL_USER_PLANE_Z5 0xCB6
#define A3XX_GRAS_CL_USER_PLANE_W5 0xCB7
#define A3XX_RB_GMEM_BASE_ADDR 0xCC0
#define A3XX_RB_DEBUG_ECO_CONTROLS_ADDR 0xCC1
#define A3XX_RB_PERFCOUNTER0_SELECT   0xCC6
#define A3XX_RB_PERFCOUNTER1_SELECT   0xCC7
#define A3XX_RB_FRAME_BUFFER_DIMENSION 0xCE0
#define A3XX_SQ_GPR_MANAGEMENT 0x0D00
#define A3XX_SQ_INST_STORE_MANAGEMENT 0x0D02
#define A3XX_HLSQ_PERFCOUNTER0_SELECT 0xE00
#define A3XX_HLSQ_PERFCOUNTER1_SELECT 0xE01
#define A3XX_HLSQ_PERFCOUNTER2_SELECT 0xE02
#define A3XX_HLSQ_PERFCOUNTER3_SELECT 0xE03
#define A3XX_HLSQ_PERFCOUNTER4_SELECT 0xE04
#define A3XX_HLSQ_PERFCOUNTER5_SELECT 0xE05
#define A3XX_TP0_CHICKEN 0x0E1E
#define A3XX_VFD_PERFCOUNTER0_SELECT 0xE44
#define A3XX_VFD_PERFCOUNTER1_SELECT 0xE45
#define A3XX_VPC_VPC_DEBUG_RAM_SEL 0xE61
#define A3XX_VPC_VPC_DEBUG_RAM_READ 0xE62
#define A3XX_VPC_PERFCOUNTER0_SELECT 0xE64
#define A3XX_VPC_PERFCOUNTER1_SELECT 0xE65
#define A3XX_UCHE_CACHE_MODE_CONTROL_REG 0xE82
#define A3XX_UCHE_PERFCOUNTER0_SELECT 0xE84
#define A3XX_UCHE_PERFCOUNTER1_SELECT 0xE85
#define A3XX_UCHE_PERFCOUNTER2_SELECT 0xE86
#define A3XX_UCHE_PERFCOUNTER3_SELECT 0xE87
#define A3XX_UCHE_PERFCOUNTER4_SELECT 0xE88
#define A3XX_UCHE_PERFCOUNTER5_SELECT 0xE89
#define A3XX_UCHE_CACHE_INVALIDATE0_REG 0xEA0
#define A3XX_UCHE_CACHE_INVALIDATE1_REG 0xEA1
#define A3XX_UCHE_CACHE_WAYS_VFD 0xEA6
#define A3XX_SP_PERFCOUNTER0_SELECT 0xEC4
#define A3XX_SP_PERFCOUNTER1_SELECT 0xEC5
#define A3XX_SP_PERFCOUNTER2_SELECT 0xEC6
#define A3XX_SP_PERFCOUNTER3_SELECT 0xEC7
#define A3XX_SP_PERFCOUNTER4_SELECT 0xEC8
#define A3XX_SP_PERFCOUNTER5_SELECT 0xEC9
#define A3XX_SP_PERFCOUNTER6_SELECT 0xECA
#define A3XX_SP_PERFCOUNTER7_SELECT 0xECB
#define A3XX_TP_PERFCOUNTER0_SELECT 0xF04
#define A3XX_TP_PERFCOUNTER1_SELECT 0xF05
#define A3XX_TP_PERFCOUNTER2_SELECT 0xF06
#define A3XX_TP_PERFCOUNTER3_SELECT 0xF07
#define A3XX_TP_PERFCOUNTER4_SELECT 0xF08
#define A3XX_TP_PERFCOUNTER5_SELECT 0xF09
#define A3XX_GRAS_CL_CLIP_CNTL 0x2040
#define A3XX_GRAS_CL_GB_CLIP_ADJ 0x2044
#define A3XX_GRAS_CL_VPORT_XOFFSET 0x2048
#define A3XX_GRAS_CL_VPORT_XSCALE 0x2049
#define A3XX_GRAS_CL_VPORT_YOFFSET 0x204A
#define A3XX_GRAS_CL_VPORT_YSCALE 0x204B
#define A3XX_GRAS_CL_VPORT_ZOFFSET 0x204C
#define A3XX_GRAS_CL_VPORT_ZSCALE 0x204D
#define A3XX_GRAS_SU_POINT_MINMAX 0x2068
#define A3XX_GRAS_SU_POINT_SIZE 0x2069
#define A3XX_GRAS_SU_POLY_OFFSET_SCALE 0x206C
#define A3XX_GRAS_SU_POLY_OFFSET_OFFSET 0x206D
#define A3XX_GRAS_SU_MODE_CONTROL 0x2070
#define A3XX_GRAS_SC_CONTROL 0x2072
#define A3XX_GRAS_SC_SCREEN_SCISSOR_TL 0x2074
#define A3XX_GRAS_SC_SCREEN_SCISSOR_BR 0x2075
#define A3XX_GRAS_SC_WINDOW_SCISSOR_TL 0x2079
#define A3XX_GRAS_SC_WINDOW_SCISSOR_BR 0x207A
#define A3XX_RB_MODE_CONTROL 0x20C0
#define A3XX_RB_RENDER_CONTROL 0x20C1
#define A3XX_RB_MSAA_CONTROL 0x20C2
#define A3XX_RB_ALPHA_REFERENCE 0x20C3
#define A3XX_RB_MRT_CONTROL0 0x20C4
#define A3XX_RB_MRT_BUF_INFO0 0x20C5
#define A3XX_RB_MRT_BUF_BASE0 0x20C6
#define A3XX_RB_MRT_BLEND_CONTROL0 0x20C7
#define A3XX_RB_MRT_CONTROL1 0x20C8
#define A3XX_RB_MRT_BUF_INFO1 0x20C9
#define A3XX_RB_MRT_BUF_BASE1 0x20CA
#define A3XX_RB_MRT_BLEND_CONTROL1 0x20CB
#define A3XX_RB_MRT_CONTROL2 0x20CC
#define A3XX_RB_MRT_BUF_INFO2 0x20CD
#define A3XX_RB_MRT_BUF_BASE2 0x20CE
#define A3XX_RB_MRT_BLEND_CONTROL2 0x20CF
#define A3XX_RB_MRT_CONTROL3 0x20D0
#define A3XX_RB_MRT_BUF_INFO3 0x20D1
#define A3XX_RB_MRT_BUF_BASE3 0x20D2
#define A3XX_RB_MRT_BLEND_CONTROL3 0x20D3
#define A3XX_RB_BLEND_RED 0x20E4
#define A3XX_RB_BLEND_GREEN 0x20E5
#define A3XX_RB_BLEND_BLUE 0x20E6
#define A3XX_RB_BLEND_ALPHA 0x20E7
#define A3XX_RB_CLEAR_COLOR_DW0 0x20E8
#define A3XX_RB_CLEAR_COLOR_DW1 0x20E9
#define A3XX_RB_CLEAR_COLOR_DW2 0x20EA
#define A3XX_RB_CLEAR_COLOR_DW3 0x20EB
#define A3XX_RB_COPY_CONTROL 0x20EC
#define A3XX_RB_COPY_DEST_BASE 0x20ED
#define A3XX_RB_COPY_DEST_PITCH 0x20EE
#define A3XX_RB_COPY_DEST_INFO 0x20EF
#define A3XX_RB_DEPTH_CONTROL 0x2100
#define A3XX_RB_DEPTH_CLEAR 0x2101
#define A3XX_RB_DEPTH_BUF_INFO 0x2102
#define A3XX_RB_DEPTH_BUF_PITCH 0x2103
#define A3XX_RB_STENCIL_CONTROL 0x2104
#define A3XX_RB_STENCIL_CLEAR 0x2105
#define A3XX_RB_STENCIL_BUF_INFO 0x2106
#define A3XX_RB_STENCIL_BUF_PITCH 0x2107
#define A3XX_RB_STENCIL_REF_MASK 0x2108
#define A3XX_RB_STENCIL_REF_MASK_BF 0x2109
#define A3XX_RB_LRZ_VSC_CONTROL 0x210C
#define A3XX_RB_WINDOW_OFFSET 0x210E
#define A3XX_RB_SAMPLE_COUNT_CONTROL 0x2110
#define A3XX_RB_SAMPLE_COUNT_ADDR 0x2111
#define A3XX_RB_Z_CLAMP_MIN 0x2114
#define A3XX_RB_Z_CLAMP_MAX 0x2115
#define A3XX_HLSQ_CONTROL_0_REG 0x2200
#define A3XX_HLSQ_CONTROL_1_REG 0x2201
#define A3XX_HLSQ_CONTROL_2_REG 0x2202
#define A3XX_HLSQ_CONTROL_3_REG 0x2203
#define A3XX_HLSQ_VS_CONTROL_REG 0x2204
#define A3XX_HLSQ_FS_CONTROL_REG 0x2205
#define A3XX_HLSQ_CONST_VSPRESV_RANGE_REG 0x2206
#define A3XX_HLSQ_CONST_FSPRESV_RANGE_REG 0x2207
#define A3XX_HLSQ_CL_NDRANGE_0_REG 0x220A
#define A3XX_HLSQ_CL_NDRANGE_1_REG 0x220B
#define A3XX_HLSQ_CL_NDRANGE_2_REG 0x220C
#define A3XX_HLSQ_CL_NDRANGE_3_REG 0x220D
#define A3XX_HLSQ_CL_NDRANGE_4_REG 0x220E
#define A3XX_HLSQ_CL_NDRANGE_5_REG 0x220F
#define A3XX_HLSQ_CL_NDRANGE_6_REG 0x2210
#define A3XX_HLSQ_CL_CONTROL_0_REG 0x2211
#define A3XX_HLSQ_CL_CONTROL_1_REG 0x2212
#define A3XX_HLSQ_CL_KERNEL_CONST_REG 0x2214
#define A3XX_HLSQ_CL_KERNEL_GROUP_X_REG 0x2215
#define A3XX_HLSQ_CL_KERNEL_GROUP_Y_REG 0x2216
#define A3XX_HLSQ_CL_KERNEL_GROUP_Z_REG 0x2217
#define A3XX_HLSQ_CL_WG_OFFSET_REG 0x221A
#define A3XX_VFD_FETCH_INSTR_1_0 0x2247
#define A3XX_VFD_FETCH_INSTR_1_1 0x2249
#define A3XX_VFD_FETCH_INSTR_1_2 0x224B
#define A3XX_VFD_FETCH_INSTR_1_3 0x224D
#define A3XX_VFD_FETCH_INSTR_1_4 0x224F
#define A3XX_VFD_FETCH_INSTR_1_5 0x2251
#define A3XX_VFD_FETCH_INSTR_1_6 0x2253
#define A3XX_VFD_FETCH_INSTR_1_7 0x2255
#define A3XX_VFD_FETCH_INSTR_1_8 0x2257
#define A3XX_VFD_FETCH_INSTR_1_9 0x2259
#define A3XX_VFD_FETCH_INSTR_1_A 0x225B
#define A3XX_VFD_FETCH_INSTR_1_B 0x225D
#define A3XX_VFD_FETCH_INSTR_1_C 0x225F
#define A3XX_VFD_FETCH_INSTR_1_D 0x2261
#define A3XX_VFD_FETCH_INSTR_1_E 0x2263
#define A3XX_VFD_FETCH_INSTR_1_F 0x2265
#define A3XX_SP_SP_CTRL_REG 0x22C0
#define A3XX_SP_VS_CTRL_REG0 0x22C4
#define A3XX_SP_VS_CTRL_REG1 0x22C5
#define A3XX_SP_VS_PARAM_REG 0x22C6
#define A3XX_SP_VS_OUT_REG_0 0x22C7
#define A3XX_SP_VS_OUT_REG_1 0x22C8
#define A3XX_SP_VS_OUT_REG_2 0x22C9
#define A3XX_SP_VS_OUT_REG_3 0x22CA
#define A3XX_SP_VS_OUT_REG_4 0x22CB
#define A3XX_SP_VS_OUT_REG_5 0x22CC
#define A3XX_SP_VS_OUT_REG_6 0x22CD
#define A3XX_SP_VS_OUT_REG_7 0x22CE
#define A3XX_SP_VS_VPC_DST_REG_0 0x22D0
#define A3XX_SP_VS_VPC_DST_REG_1 0x22D1
#define A3XX_SP_VS_VPC_DST_REG_2 0x22D2
#define A3XX_SP_VS_VPC_DST_REG_3 0x22D3
#define A3XX_SP_VS_OBJ_OFFSET_REG 0x22D4
#define A3XX_SP_VS_OBJ_START_REG 0x22D5
#define A3XX_SP_VS_PVT_MEM_PARAM_REG 0x22D6
#define A3XX_SP_VS_PVT_MEM_ADDR_REG 0x22D7
#define A3XX_SP_VS_PVT_MEM_SIZE_REG 0x22D8
#define A3XX_SP_VS_LENGTH_REG 0x22DF
#define A3XX_SP_FS_CTRL_REG0 0x22E0
#define A3XX_SP_FS_CTRL_REG1 0x22E1
#define A3XX_SP_FS_OBJ_OFFSET_REG 0x22E2
#define A3XX_SP_FS_OBJ_START_REG 0x22E3
#define A3XX_SP_FS_PVT_MEM_PARAM_REG 0x22E4
#define A3XX_SP_FS_PVT_MEM_ADDR_REG 0x22E5
#define A3XX_SP_FS_PVT_MEM_SIZE_REG 0x22E6
#define A3XX_SP_FS_FLAT_SHAD_MODE_REG_0 0x22E8
#define A3XX_SP_FS_FLAT_SHAD_MODE_REG_1 0x22E9
#define A3XX_SP_FS_OUTPUT_REG 0x22EC
#define A3XX_SP_FS_MRT_REG_0 0x22F0
#define A3XX_SP_FS_MRT_REG_1 0x22F1
#define A3XX_SP_FS_MRT_REG_2 0x22F2
#define A3XX_SP_FS_MRT_REG_3 0x22F3
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_0 0x22F4
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_1 0x22F5
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_2 0x22F6
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_3 0x22F7
#define A3XX_SP_FS_LENGTH_REG 0x22FF
#define A3XX_PA_SC_AA_CONFIG 0x2301
#define A3XX_VBIF_CLKON 0x3001
#define A3XX_VBIF_ABIT_SORT 0x301C
#define A3XX_VBIF_ABIT_SORT_CONF 0x301D
#define A3XX_VBIF_GATE_OFF_WRREQ_EN 0x302A
#define A3XX_VBIF_IN_RD_LIM_CONF0 0x302C
#define A3XX_VBIF_IN_RD_LIM_CONF1 0x302D
#define A3XX_VBIF_IN_WR_LIM_CONF0 0x3030
#define A3XX_VBIF_IN_WR_LIM_CONF1 0x3031
#define A3XX_VBIF_OUT_RD_LIM_CONF0 0x3034
#define A3XX_VBIF_OUT_WR_LIM_CONF0 0x3035
#define A3XX_VBIF_DDR_OUT_MAX_BURST 0x3036
#define A3XX_VBIF_ARB_CTL 0x303C
#define A3XX_VBIF_ROUND_ROBIN_QOS_ARB 0x3049
#define A3XX_VBIF_OUT_AXI_AOOO_EN 0x305E
#define A3XX_VBIF_OUT_AXI_AOOO 0x305F
#define A3XX_VBIF_PERF_CNT0_LO 0x3073
#define A3XX_VBIF_PERF_CNT0_HI 0x3074
#define A3XX_VBIF_PERF_CNT1_LO 0x3075
#define A3XX_VBIF_PERF_CNT1_HI 0x3076
#define A3XX_VBIF_PERF_PWR_CNT0_LO 0x3077
#define A3XX_VBIF_PERF_PWR_CNT0_HI 0x3078
#define A3XX_VBIF_PERF_PWR_CNT1_LO 0x3079
#define A3XX_VBIF_PERF_PWR_CNT1_HI 0x307a
#define A3XX_VBIF_PERF_PWR_CNT2_LO 0x307b
#define A3XX_VBIF_PERF_PWR_CNT2_HI 0x307c

#define A3XX_VBIF_XIN_HALT_CTRL0 0x3080
#define A3XX_VBIF_XIN_HALT_CTRL0_MASK 0x3F
#define A30X_VBIF_XIN_HALT_CTRL0_MASK 0x7

#define A3XX_VBIF_XIN_HALT_CTRL1 0x3081

/* VBIF register offsets for A306 */
#define A3XX_VBIF2_PERF_CNT_SEL0 0x30d0
#define A3XX_VBIF2_PERF_CNT_SEL1 0x30d1
#define A3XX_VBIF2_PERF_CNT_SEL2 0x30d2
#define A3XX_VBIF2_PERF_CNT_SEL3 0x30d3
#define A3XX_VBIF2_PERF_CNT_LOW0 0x30d8
#define A3XX_VBIF2_PERF_CNT_LOW1 0x30d9
#define A3XX_VBIF2_PERF_CNT_LOW2 0x30da
#define A3XX_VBIF2_PERF_CNT_LOW3 0x30db
#define A3XX_VBIF2_PERF_CNT_HIGH0 0x30e0
#define A3XX_VBIF2_PERF_CNT_HIGH1 0x30e1
#define A3XX_VBIF2_PERF_CNT_HIGH2 0x30e2
#define A3XX_VBIF2_PERF_CNT_HIGH3 0x30e3

#define A3XX_VBIF2_PERF_PWR_CNT_EN0 0x3100
#define A3XX_VBIF2_PERF_PWR_CNT_EN1 0x3101
#define A3XX_VBIF2_PERF_PWR_CNT_EN2 0x3102
#define A3XX_VBIF2_PERF_PWR_CNT_LOW0 0x3110
#define A3XX_VBIF2_PERF_PWR_CNT_LOW1 0x3111
#define A3XX_VBIF2_PERF_PWR_CNT_LOW2 0x3112
#define A3XX_VBIF2_PERF_PWR_CNT_HIGH0 0x3118
#define A3XX_VBIF2_PERF_PWR_CNT_HIGH1 0x3119
#define A3XX_VBIF2_PERF_PWR_CNT_HIGH2 0x311a

#define A3XX_VBIF_DDR_OUTPUT_RECOVERABLE_HALT_CTRL0 0x3800
#define A3XX_VBIF_DDR_OUTPUT_RECOVERABLE_HALT_CTRL1 0x3801

/* RBBM Debug bus block IDs */
#define RBBM_BLOCK_ID_CP               0x1
#define RBBM_BLOCK_ID_RBBM             0x2
#define RBBM_BLOCK_ID_VBIF             0x3
#define RBBM_BLOCK_ID_HLSQ             0x4
#define RBBM_BLOCK_ID_UCHE             0x5
#define RBBM_BLOCK_ID_PC               0x8
#define RBBM_BLOCK_ID_VFD              0x9
#define RBBM_BLOCK_ID_VPC              0xa
#define RBBM_BLOCK_ID_TSE              0xb
#define RBBM_BLOCK_ID_RAS              0xc
#define RBBM_BLOCK_ID_VSC              0xd
#define RBBM_BLOCK_ID_SP_0             0x10
#define RBBM_BLOCK_ID_SP_1             0x11
#define RBBM_BLOCK_ID_SP_2             0x12
#define RBBM_BLOCK_ID_SP_3             0x13
#define RBBM_BLOCK_ID_TPL1_0           0x18
#define RBBM_BLOCK_ID_TPL1_1           0x19
#define RBBM_BLOCK_ID_TPL1_2           0x1a
#define RBBM_BLOCK_ID_TPL1_3           0x1b
#define RBBM_BLOCK_ID_RB_0             0x20
#define RBBM_BLOCK_ID_RB_1             0x21
#define RBBM_BLOCK_ID_RB_2             0x22
#define RBBM_BLOCK_ID_RB_3             0x23
#define RBBM_BLOCK_ID_MARB_0           0x28
#define RBBM_BLOCK_ID_MARB_1           0x29
#define RBBM_BLOCK_ID_MARB_2           0x2a
#define RBBM_BLOCK_ID_MARB_3           0x2b

/* RBBM_CLOCK_CTL default value */
#define A3XX_RBBM_CLOCK_CTL_DEFAULT   0xAAAAAAAA
#define A320_RBBM_CLOCK_CTL_DEFAULT   0xBFFFFFFF
#define A330_RBBM_CLOCK_CTL_DEFAULT   0xBFFCFFFF

#define A330_RBBM_GPR0_CTL_DEFAULT    0x00000000
#define A330v2_RBBM_GPR0_CTL_DEFAULT  0x05515455
#define A310_RBBM_GPR0_CTL_DEFAULT    0x000000AA

/* COUNTABLE FOR SP PERFCOUNTER */
#define SP_ALU_ACTIVE_CYCLES           0x1D
#define SP0_ICL1_MISSES                0x1A
#define SP_FS_CFLOW_INSTRUCTIONS       0x0C

/* COUNTABLE FOR TSE PERFCOUNTER */
#define TSE_INPUT_PRIM_NUM             0x0

/* VBIF countables */
#define VBIF_AXI_TOTAL_BEATS 85

/* VBIF Recoverable HALT bit value */
#define VBIF_RECOVERABLE_HALT_CTRL 0x1

/*
 * CP DEBUG settings for A3XX core:
 * DYNAMIC_CLK_DISABLE [27] - turn off the dynamic clock control
 * MIU_128BIT_WRITE_ENABLE [25] - Allow 128 bit writes to the VBIF
 */
#define A3XX_CP_DEBUG_DEFAULT ((1 << 27) | (1 << 25))


#endif
