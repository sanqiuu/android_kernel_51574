#ifndef DSI_PHY_20NM_XML
#define DSI_PHY_20NM_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/freedreno/envytools/
git clone https://github.com/freedreno/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/mesa/mesa/src/freedreno/registers/msm.xml                   (    981 bytes, from 2021-06-05 21:37:42)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/freedreno_copyright.xml   (   1572 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/mdp/mdp4.xml              (  20912 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/mdp/mdp_common.xml        (   2849 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/mdp/mdp5.xml              (  37461 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi.xml               (  15291 bytes, from 2021-06-15 22:36:13)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_v2.xml        (   3236 bytes, from 2021-06-05 21:37:42)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_28nm_8960.xml (   4935 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_28nm.xml      (   7004 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_20nm.xml      (   3712 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_14nm.xml      (   5381 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_10nm.xml      (   4499 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_7nm.xml       (  10953 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/dsi_phy_5nm.xml       (  10900 bytes, from 2021-05-21 19:18:08)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/sfpb.xml              (    602 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/dsi/mmss_cc.xml           (   1686 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/hdmi/qfprom.xml           (    600 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/hdmi/hdmi.xml             (  41874 bytes, from 2021-02-18 16:45:44)
- /home/robclark/src/mesa/mesa/src/freedreno/registers/edp/edp.xml               (  10416 bytes, from 2021-02-18 16:45:44)

Copyright (C) 2013-2021 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)
- Ilia Mirkin <imirkin@alum.mit.edu> (imirkin)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


static inline uint32_t REG_DSI_20nm_PHY_LN(uint32_t i0) { return 0x00000000 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_CFG_0(uint32_t i0) { return 0x00000000 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_CFG_1(uint32_t i0) { return 0x00000004 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_CFG_2(uint32_t i0) { return 0x00000008 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_CFG_3(uint32_t i0) { return 0x0000000c + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_CFG_4(uint32_t i0) { return 0x00000010 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_TEST_DATAPATH(uint32_t i0) { return 0x00000014 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_DEBUG_SEL(uint32_t i0) { return 0x00000018 + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_TEST_STR_0(uint32_t i0) { return 0x0000001c + 0x40*i0; }

static inline uint32_t REG_DSI_20nm_PHY_LN_TEST_STR_1(uint32_t i0) { return 0x00000020 + 0x40*i0; }

#define REG_DSI_20nm_PHY_LNCK_CFG_0				0x00000100

#define REG_DSI_20nm_PHY_LNCK_CFG_1				0x00000104

#define REG_DSI_20nm_PHY_LNCK_CFG_2				0x00000108

#define REG_DSI_20nm_PHY_LNCK_CFG_3				0x0000010c

#define REG_DSI_20nm_PHY_LNCK_CFG_4				0x00000110

#define REG_DSI_20nm_PHY_LNCK_TEST_DATAPATH			0x00000114

#define REG_DSI_20nm_PHY_LNCK_DEBUG_SEL				0x00000118

#define REG_DSI_20nm_PHY_LNCK_TEST_STR0				0x0000011c

#define REG_DSI_20nm_PHY_LNCK_TEST_STR1				0x00000120

#define REG_DSI_20nm_PHY_TIMING_CTRL_0				0x00000140
#define DSI_20nm_PHY_TIMING_CTRL_0_CLK_ZERO__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_0_CLK_ZERO__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_0_CLK_ZERO(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_0_CLK_ZERO__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_0_CLK_ZERO__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_1				0x00000144
#define DSI_20nm_PHY_TIMING_CTRL_1_CLK_TRAIL__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_1_CLK_TRAIL__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_1_CLK_TRAIL(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_1_CLK_TRAIL__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_1_CLK_TRAIL__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_2				0x00000148
#define DSI_20nm_PHY_TIMING_CTRL_2_CLK_PREPARE__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_2_CLK_PREPARE__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_2_CLK_PREPARE(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_2_CLK_PREPARE__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_2_CLK_PREPARE__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_3				0x0000014c
#define DSI_20nm_PHY_TIMING_CTRL_3_CLK_ZERO_8			0x00000001

#define REG_DSI_20nm_PHY_TIMING_CTRL_4				0x00000150
#define DSI_20nm_PHY_TIMING_CTRL_4_HS_EXIT__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_4_HS_EXIT__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_4_HS_EXIT(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_4_HS_EXIT__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_4_HS_EXIT__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_5				0x00000154
#define DSI_20nm_PHY_TIMING_CTRL_5_HS_ZERO__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_5_HS_ZERO__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_5_HS_ZERO(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_5_HS_ZERO__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_5_HS_ZERO__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_6				0x00000158
#define DSI_20nm_PHY_TIMING_CTRL_6_HS_PREPARE__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_6_HS_PREPARE__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_6_HS_PREPARE(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_6_HS_PREPARE__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_6_HS_PREPARE__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_7				0x0000015c
#define DSI_20nm_PHY_TIMING_CTRL_7_HS_TRAIL__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_7_HS_TRAIL__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_7_HS_TRAIL(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_7_HS_TRAIL__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_7_HS_TRAIL__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_8				0x00000160
#define DSI_20nm_PHY_TIMING_CTRL_8_HS_RQST__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_8_HS_RQST__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_8_HS_RQST(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_8_HS_RQST__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_8_HS_RQST__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_9				0x00000164
#define DSI_20nm_PHY_TIMING_CTRL_9_TA_GO__MASK			0x00000007
#define DSI_20nm_PHY_TIMING_CTRL_9_TA_GO__SHIFT			0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_9_TA_GO(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_9_TA_GO__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_9_TA_GO__MASK;
}
#define DSI_20nm_PHY_TIMING_CTRL_9_TA_SURE__MASK		0x00000070
#define DSI_20nm_PHY_TIMING_CTRL_9_TA_SURE__SHIFT		4
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_9_TA_SURE(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_9_TA_SURE__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_9_TA_SURE__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_10				0x00000168
#define DSI_20nm_PHY_TIMING_CTRL_10_TA_GET__MASK		0x00000007
#define DSI_20nm_PHY_TIMING_CTRL_10_TA_GET__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_10_TA_GET(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_10_TA_GET__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_10_TA_GET__MASK;
}

#define REG_DSI_20nm_PHY_TIMING_CTRL_11				0x0000016c
#define DSI_20nm_PHY_TIMING_CTRL_11_TRIG3_CMD__MASK		0x000000ff
#define DSI_20nm_PHY_TIMING_CTRL_11_TRIG3_CMD__SHIFT		0
static inline uint32_t DSI_20nm_PHY_TIMING_CTRL_11_TRIG3_CMD(uint32_t val)
{
	return ((val) << DSI_20nm_PHY_TIMING_CTRL_11_TRIG3_CMD__SHIFT) & DSI_20nm_PHY_TIMING_CTRL_11_TRIG3_CMD__MASK;
}

#define REG_DSI_20nm_PHY_CTRL_0					0x00000170

#define REG_DSI_20nm_PHY_CTRL_1					0x00000174

#define REG_DSI_20nm_PHY_CTRL_2					0x00000178

#define REG_DSI_20nm_PHY_CTRL_3					0x0000017c

#define REG_DSI_20nm_PHY_CTRL_4					0x00000180

#define REG_DSI_20nm_PHY_STRENGTH_0				0x00000184

#define REG_DSI_20nm_PHY_STRENGTH_1				0x00000188

#define REG_DSI_20nm_PHY_BIST_CTRL_0				0x000001b4

#define REG_DSI_20nm_PHY_BIST_CTRL_1				0x000001b8

#define REG_DSI_20nm_PHY_BIST_CTRL_2				0x000001bc

#define REG_DSI_20nm_PHY_BIST_CTRL_3				0x000001c0

#define REG_DSI_20nm_PHY_BIST_CTRL_4				0x000001c4

#define REG_DSI_20nm_PHY_BIST_CTRL_5				0x000001c8

#define REG_DSI_20nm_PHY_GLBL_TEST_CTRL				0x000001d4
#define DSI_20nm_PHY_GLBL_TEST_CTRL_BITCLK_HS_SEL		0x00000001

#define REG_DSI_20nm_PHY_LDO_CNTRL				0x000001dc

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_0			0x00000000

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_1			0x00000004

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_2			0x00000008

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_3			0x0000000c

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_4			0x00000010

#define REG_DSI_20nm_PHY_REGULATOR_CTRL_5			0x00000014

#define REG_DSI_20nm_PHY_REGULATOR_CAL_PWR_CFG			0x00000018


#endif /* DSI_PHY_20NM_XML */
