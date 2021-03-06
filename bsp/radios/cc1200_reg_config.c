/************************************************************************************************************************************/
/** @file       cc1200_simple_link_reg_config.c
 *  @brief      Register Configuration Values for CC1200
 *  @details    see docs/Config Generation Procedure.txt for generation procedure with TI SmartRF Studio 7
 *
 *  @target     MSP430F5438A/CC2541/MSP430F5529
 *  @board      TrxEB/CC2541EMK/5529-Launchpad
 *
 *  @author     Justin Reina, Firmware Engineer, Misc. Company
 *  @created    6/19/17
 *  @last rev   6/19/17
 *
 *
 *  @notes      x
 *
 *  @section    Opens
 *          none current
 *
 *  @section    Legal Disclaimer
 *          All contents of this source file and/or any other Misc. Product related source files are the explicit property of
 *          Misc. Company. Do not distribute. Do not copy.
 */
/************************************************************************************************************************************/
#include "cc1200_reg_config.h"


const registerSetting_t preferredSettings_cc1200[NUM_PREFERRED_SETTINGS_CC1200] =
{
  {CC120X_IOCFG2,            0x06},                        //(0x0001) gpio2 io pin configuration
  {CC120X_SYNC_CFG1,         0xAB},                        //(0x0008) sync word detection configuration reg. 1
  {CC120X_SYNC_CFG0,         0x13},                        //(0x0009) sync word detection configuration reg. 0
  {CC120X_DEVIATION_M,       0x99},                        //(0x000a) frequency deviation configuration
  {CC120X_MODCFG_DEV_E,      0x1D},                        //(0x000b) modulation format and frequency deviation configur..
  {CC120X_DCFILT_CFG,        0x26},                        //(0x000c) digital dc removal configuration
  {CC120X_PREAMBLE_CFG0,     0x8A},                        //(0x000e) preamble detection configuration reg. 0
  {CC120X_IQIC,              0x00},                        //(0x000f) digital image channel compensation configuration
  {CC120X_CHAN_BW,           0x02},                        //(0x0010) channel filter configuration
  {CC120X_MDMCFG1,           0x42},                        //(0x0011) general modem parameter configuration reg. 1
  {CC120X_MDMCFG0,           0x05},                        //(0x0012) general modem parameter configuration reg. 0
  {CC120X_SYMBOL_RATE2,      0xA0},                        //(0x0013) symbol rate configuration exponent and mantissa [1..
  {CC120X_SYMBOL_RATE1,      0x62},                        //(0x0014) symbol rate configuration mantissa [15:8]
  {CC120X_SYMBOL_RATE0,      0x4E},                        //(0x0015) symbol rate configuration mantissa [7:0]
  {CC120X_AGC_REF,           0x2F},                        //(0x0016) agc reference level configuration
  {CC120X_AGC_CS_THR,        0xEC},                        //(0x0017) carrier sense threshold configuration
  {CC120X_AGC_CFG1,          0x16},                        //(0x001b) automatic gain control configuration reg. 1
  {CC120X_AGC_CFG0,          0x84},                        //(0x001c) automatic gain control configuration reg. 0
  {CC120X_FIFO_CFG,          0x00},                        //(0x001d) fifo configuration
  {CC120X_FS_CFG,            0x12},                        //(0x0020) frequency synthesizer configuration
  {CC120X_PKT_CFG2,          0x00},                        //(0x0026) packet configuration reg. 2
  {CC120X_PKT_CFG0,          0x40},                        //(0x0028) packet configuration reg. 0
  //      0b0100 0000 Continuous
  //      0b0010 0000 Fixed
  {CC120X_PA_CFG0,           0x52},                        //(0x002c) power amplifier configuration reg. 0
  {CC120X_ASK_CFG,           0x3F},                        //(0x002d) ask configuration
  {CC120X_PKT_LEN,           0xFF},                        //(0x002e) packet length configuration
//      255
  {CC120X_IF_MIX_CFG,        0x18},                        //(0x2f00) if mix configuration
  {CC120X_TOC_CFG,           0x03},                        //(0x2f02) timing offset correction configuration
  {CC120X_MDMCFG2,           0x00},                        //(0x2f05) general modem parameter configuration reg. 2
  {CC120X_FREQ2,             0x56},                        //(0x2f0c) frequency configuration [23:16]
  {CC120X_FREQ1,             0xCC},                        //(0x2f0d) frequency configuration [15:8]
  {CC120X_FREQ0,             0xCC},                        //(0x2f0e) frequency configuration [7:0]
  {CC120X_IF_ADC1,           0xEE},                        //(0x2f10) analog to digital converter configuration reg. 1
  {CC120X_IF_ADC0,           0x10},                        //(0x2f11) analog to digital converter configuration reg. 0
  {CC120X_FS_DIG1,           0x04},                        //(0x2f12) frequency synthesizer digital reg. 1
  {CC120X_FS_DIG0,           0x50},                        //(0x2f13) frequency synthesizer digital reg. 0
  {CC120X_FS_CAL1,           0x40},                        //(0x2f16) frequency synthesizer calibration reg. 1
  {CC120X_FS_CAL0,           0x0E},                        //(0x2f17) frequency synthesizer calibration reg. 0
  {CC120X_FS_DIVTWO,         0x03},                        //(0x2f19) frequency synthesizer divide by 2
  {CC120X_FS_DSM0,           0x33},                        //(0x2f1b) fs digital synthesizer module configuration reg. 0
  {CC120X_FS_DVC1,           0xF7},                        //(0x2f1c) frequency synthesizer divider chain configuration ..
  {CC120X_FS_DVC0,           0x0F},                        //(0x2f1d) frequency synthesizer divider chain configuration ..
  {CC120X_FS_PFD,            0x00},                        //(0x2f1f) frequency synthesizer phase frequency detector con..
  {CC120X_FS_PRE,            0x6E},                        //(0x2f20) frequency synthesizer prescaler configuration
  {CC120X_FS_REG_DIV_CML,    0x1C},                        //(0x2f21) frequency synthesizer divider regulator configurat..
  {CC120X_FS_SPARE,          0xAC},                        //(0x2f22) frequency synthesizer spare
  {CC120X_FS_VCO0,           0xB5},                        //(0x2f27) fs voltage controlled oscillator configuration reg..
  {CC120X_IFAMP,             0x0D},                        //(0x2f2f) intermediate frequency amplifier configuration
  {CC120X_XOSC5,             0x0E},                        //(0x2f32) crystal oscillator configuration reg. 5
  {CC120X_XOSC1,             0x03},                        //(0x2f36) crystal oscillator configuration reg. 1
  {CC120X_PARTNUMBER,        0x20},                        //(0x2f8f) part number
  {CC120X_PARTVERSION,       0x11},                        //(0x2f90) part revision
  {CC120X_MODEM_STATUS1,     0x10},                        //(0x2f92) modem status reg. 1
};

