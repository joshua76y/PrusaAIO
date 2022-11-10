#pragma once
#define CONFIGURATION_H_VERSION 02010200
#define PRUSA_AIO_VERSION 20221021

//===========================================================================
//======================== Prusa All-in-One Firmware ========================
//===========================================================================

/**
 * If you find this project helpful, please consider donating:
 *
 * Keith Bennett, Marlin tester/config builder:         https://github.com/sponsors/thisiskeithb
 *                                                      https://ko-fi.com/thisiskeithb
 * Grégoire Saunier, Prusa Bear Project:                https://patreon.com/gregsaun
 * Scott Lahteine, Lead Marlin Developer & Maintainer:  https://patreon.com/thinkyhead
 *
 * Here are some standard links to get your machine setup:
 *
 * Prusa AIO Wiki:                     https://github.com/thisiskeithb/PrusaAIO/wiki/
 * Prusa AIO Discussions:              https://github.com/thisiskeithb/PrusaAIO/discussions
 * Prusa Bear Upgrade Facebook group:  https://facebook.com/groups/prusabearupgrade/
 * Prusa Community Facebook group:     https://facebook.com/groups/675831176090951/
 *
 * Thank you and Happy Printing!
 */

//===========================================================================
//=========================== Custom Printer Name ===========================
//===========================================================================

// Uncomment to set a custom printer name.
//#define PRUSA_AIO_CUSTOM_PRINTER_NAME "AIO Bear"

//===========================================================================
//=========================== Printer/Frame Type ============================
//===========================================================================

/**
 * Frame Options
 *
 *   - Bear       (210mm Z)
 *   - Tall Bear  (320mm Z)
 */
#define PRUSA_AIO_FRAME_BEAR_210
//#define PRUSA_AIO_FRAME_BEAR_320

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

/**
 * Motherboard Options
 *
 *  BigTreeTech
 *
 *    - SKR 3.0             (STM32H743VG)
 *    - SKR 3.0 EZ          (STM32H743VG)
 *    - SKR 2.0 Rev. B      (STM32F407VGT6/STM32F429VGT6)
 *    - SKR 1.4             (LPC1768)
 *    - SKR 1.4 Turbo       (LPC1769)
 *    - BTT002 1.0          (STM32F407VGT6/VET6)
 *    - SKR Mini E3 V3      (STM32G0B1RET6)
 *    - SKR Mini E3 V3.0.1  (STM32F401RCT6)
 *
 *  Makerbase / MKS
 *
 *    - Robin Nano V3  (STM32F407VGT6)
 *    - SGEN_L V2      (LPC1769)
 *    - Robin E3 1.0   (STM32F103RCT6)
 *    - Robin E3 1.1   (STM32F103RCT6)
 *    - Robin E3D 1.0  (STM32F103RCT6)
 *    - Robin E3D 1.1  (STM32F103RCT6)
 *
 * Motherboard Cases: https://github.com/thisiskeithb/PrusaAIO/wiki/Recommended-Motherboard-Cases
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0
#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0_EZ
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_V2_0_REV_B
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_1_4
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_1_4_TURBO
//#define PRUSA_AIO_MOTHERBOARD_BTT_BTT002
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3
//#define PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0_1
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_NANO_V3
//#define PRUSA_AIO_MOTHERBOARD_MKS_SGEN_L_V2
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3_V1_1
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3D
//#define PRUSA_AIO_MOTHERBOARD_MKS_ROBIN_E3D_V1_1

/**
 * USB Flash Drive Support (BigTreeTech SKR 2 & MKS Robin Nano V3 only)
 *
 * Disabled by default. Uncomment PRUSA_AIO_FLASH_DRIVE_SUPPORT to enable support.
 */
//#define PRUSA_AIO_FLASH_DRIVE_SUPPORT

//===========================================================================
//============================= Stepper Drivers =============================
//===========================================================================

/**
 * Trinamic Drivers with Sensorless Homing
 *
 *   - Trinamic TMC2209/TMC2226
 *   - Trinamic TMC5160
 *   - Trinamic TMC2130 - Active cooling is essential or drivers will overheat!
 */
#define PRUSA_AIO_DRIVERS_TMC2209
//#define PRUSA_AIO_DRIVERS_TMC5160
//#define PRUSA_AIO_DRIVERS_TMC2130

//===========================================================================
//============================= Stepper Motors ==============================
//===========================================================================

/**
 * Extruder Stepper Motor
 *
 *   - Stock 1.8°
 *   - Bondtech 1.8° pancake
 *   - LDO 0.9° Slim Power pancake
 *   - LDO Planetary Geared
 *
 * Supported Motors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_E_STEPPER_STOCK
//#define PRUSA_AIO_E_STEPPER_BONDTECH
//#define PRUSA_AIO_E_STEPPER_LDO_0_9
//#define PRUSA_AIO_E_STEPPER_LDO_PLANETARY

/**
 * X/Y Stepper Motors
 *
 *   - Stock 1.8°
 *   - LDO 0.9°
 *   - Moons 0.9°
 *
 * Supported Motors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_XY_STEPPERS_STOCK
//#define PRUSA_AIO_XY_STEPPERS_LDO_0_9
//#define PRUSA_AIO_XY_STEPPERS_MOONS_0_9

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
//#define PRUSA_AIO_INVERT_X_DIR
//#define PRUSA_AIO_INVERT_Y_DIR
//#define PRUSA_AIO_INVERT_Z_DIR
//#define PRUSA_AIO_INVERT_E_DIR

/**
 * Sensorless Homing
 *
 *  Sensitivity   TMC2209   TMC5160
 *    HIGHEST       255       -64    (Too sensitive => False positive)
 *    LOWEST         0         63    (Too insensitive => No trigger)
 *
 * If needed, uncomment PRUSA_AIO_*_STALL sensorless (StallGuard) settings below.
 * Settings can also be customized via LCD under Configuration -> Advanced Settings -> TMC Drivers -> Sensorless Homing
 */
//#define PRUSA_AIO_X_STALL_SENSITIVITY  90
//#define PRUSA_AIO_Y_STALL_SENSITIVITY  100

// If needed, uncomment PRUSA_AIO_HOMING_FEEDRATE_MM_M to customize Homing speeds (mm/min)
//#define PRUSA_AIO_HOMING_FEEDRATE_MM_M { (50*60), (50*60), (4*60) }

//===========================================================================
//================================ Extruder =================================
//===========================================================================

/**
 * Extruder
 *
 *  - Bear extruder w/ SuperPINDA or PINDA V2
 *  - Bear extruder w/ integrated BLTouch mount by Vertigo 235  https://www.printables.com/model/6606
 *  - Bondtech BMG extruder w/ SuperPINDA or PINDA V2           https://www.bondtech.se/product/prusa-i3-mk3s-extruder-upgrade/
 *  - Bondtech BMG extruder w/ BLTouch mount by Vertigo 235     https://www.printables.com/model/6623
 *
 * Supported Extruders: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Extruders
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_EXTRUDER_BEAR_PINDA
//#define PRUSA_AIO_EXTRUDER_BEAR_BLTOUCH
//#define PRUSA_AIO_EXTRUDER_BMG_PINDA
//#define PRUSA_AIO_EXTRUDER_BMG_BLTOUCH

//===========================================================================
//============================== Input Shaping ==============================
//===========================================================================

/**
 * Input Shaping -- EXPERIMENTAL
 *
 * Zero Vibration (ZV) Input Shaping for X and/or Y movements.
 *
 * See https://github.com/MarlinFirmware/Marlin/pull/24797 for configuration & full details.
 *
 * Tune with M593 D<factor> F<frequency>:
 *
 *  D<factor>    Set the zeta/damping factor. If axes (X, Y, etc.) are not specified, set for all axes.
 *  F<frequency> Set the frequency. If axes (X, Y, etc.) are not specified, set for all axes.
 *  X<1>         Set the given parameters only for the X axis.
 *  Y<1>         Set the given parameters only for the Y axis.
 */
//#define PRUSA_AIO_INPUT_SHAPING
#if ENABLED(PRUSA_AIO_INPUT_SHAPING)
  #define PRUSA_AIO_SHAPING_FREQ_X    40  // (Hz) The dominant resonant frequency of the X axis.
  #define PRUSA_AIO_SHAPING_FREQ_Y    40  // (Hz) The dominant resonant frequency of the Y axis.
  #define PRUSA_AIO_SHAPING_ZETA_X  0.3f  // Damping ratio of the X axis (range: 0.0 = no damping to 1.0 = critical damping).
  #define PRUSA_AIO_SHAPING_ZETA_Y  0.3f  // Damping ratio of the Y axis (range: 0.0 = no damping to 1.0 = critical damping).
#endif

//===========================================================================
//========================== Probe & Bed Leveling ===========================
//===========================================================================

/**
 * PINDA Probe
 *
 *   - SuperPINDA (3 wires)
 *   - PINDA V2 w/ Thermistor (4 wires)
 *
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#if EITHER(PRUSA_AIO_EXTRUDER_BEAR_PINDA, PRUSA_AIO_EXTRUDER_BMG_PINDA)
  #define PRUSA_AIO_PROBE_SUPERPINDA
  //#define PRUSA_AIO_PROBE_PINDA_V2
#endif

/*
 * Custom Probe Offset
 *
 * Default probe offsets will be used based on the extruder selection above.
 *
 * If needed, uncomment to customize probe offset. This can also be customized via LCD
 * under Configuration -> Advanced Settings -> Probe Offsets
 */
//#define PRUSA_AIO_NOZZLE_TO_PROBE_OFFSET { 23, 5, 0 }

/**
 * Bed Leveling Type
 *
 *   - Bilinear
 *   - Unified Bed Leveling
 */
#define PRUSA_AIO_BED_LEVELING_BILINEAR
//#define PRUSA_AIO_BED_LEVELING_UBL

//===========================================================================
//================================== Fans ===================================
//===========================================================================

/**
 * Part Cooling Fan
 *
 * 24V Options:
 *
 *   - Generic (No minimum PWM limit is applied)
 *   - 24V Mechatronics B5015E24B-BSR
 *   - 24V Delta BFB0524HH
 *   - 24V SoundOriginal
 *
 * 5V Options (BigTreeTech BTT002 1.0 & SKR V3/EZ with DC Mode addon board only):
 *
 *   - Generic (No minimum PWM limit is applied)
 *   - 5V Stock Prusa 5015
 *   - 5V LDO DF5015H05S
 *
 * Supported Fans: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Fans
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_PART_COOLING_FAN_GENERIC
//#define PRUSA_AIO_PART_COOLING_FAN_24V_MECHATRONICS_B5015E24B_BSR
//#define PRUSA_AIO_PART_COOLING_FAN_24V_DELTA_BFB0524HH
//#define PRUSA_AIO_PART_COOLING_FAN_24V_SOUNDORIGINAL
//#define PRUSA_AIO_PART_COOLING_FAN_5V_STOCK_PRUSA_5015
//#define PRUSA_AIO_PART_COOLING_FAN_5V_LDO_DF5015H05S

/**
 * Motherboard Cooling Fan
 *
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
//#define PRUSA_AIO_MOTHERBOARD_FAN

//===========================================================================
//========================= Thermal & PID Settings ==========================
//===========================================================================

/**
 * Standard Thermistor
 *
 *   - Stock V6 Semitec 104NT
 *   - Generic NTC 100K (Type 1)
 *
 * High Temperature Thermistor
 *
 *   - Slice Engineering's 450°C High Temperature Thermistor
 *   - Trianglelab T-D500 500°C High Temperature Thermistor (Cartridge-based Dyze Design thermistor)
 *
 * Supported Thermistors: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Thermistors
 * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
 */
#define PRUSA_AIO_THERMISTOR_STOCK_SEMITEC_104NT
//#define PRUSA_AIO_THERMISTOR_GENERIC_100K
//#define PRUSA_AIO_THERMISTOR_SLICE_450C
//#define PRUSA_AIO_THERMISTOR_TL_T_D500

/**
 * Custom PID Settings
 *
 * Stock E3D V6 hotend and Prusa MK52 bed PID settings are enabled by default.
 *
 * If needed, uncomment PRUSA_AIO_CUSTOM_HOTEND_PID or PRUSA_AIO_CUSTOM_BED_PID to customize PID settings.
 */
//#define PRUSA_AIO_CUSTOM_HOTEND_PID
#if ENABLED(PRUSA_AIO_CUSTOM_HOTEND_PID) && DISABLED(PRUSA_AIO_HOTEND_MPCTEMP)
  #define PRUSA_AIO_DEFAULT_Kp  16.50
  #define PRUSA_AIO_DEFAULT_Ki   1.16
  #define PRUSA_AIO_DEFAULT_Kd  58.80
  // Find your own by running "M303 E0 C8 S210" via serial to run autotune on the hotend at 210 °C for 8 cycles.
#endif

//#define PRUSA_AIO_CUSTOM_BED_PID
#if ENABLED(PRUSA_AIO_CUSTOM_BED_PID)
  #define PRUSA_AIO_DEFAULT_bedKp  28.13
  #define PRUSA_AIO_DEFAULT_bedKi   2.09
  #define PRUSA_AIO_DEFAULT_bedKd 483.07
  // Find your own by running "M303 E-1 C8 S65" via serial to run autotune on the bed at 65 °C for 8 cycles.
#endif

/**
 * Model Predictive Control for Hotend
 *
 * Stock E3D V6 hotend with 40W heater cartridge is enabled by default.
 *
 * Note: Replaces PID for the hotend
 */
//#define PRUSA_AIO_HOTEND_MPCTEMP

// If needed, uncomment PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP to customize MPCTEMP settings. Use M306 T to autotune the model.
//#define PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP
#if BOTH(PRUSA_AIO_HOTEND_MPCTEMP, PRUSA_AIO_CUSTOM_HOTEND_MPCTEMP)
  #define PRUSA_AIO_CUSTOM_MPC_HEATER_POWER { 40.0f }                // (W) Heat cartridge power.
  #define PRUSA_AIO_CUSTOM_MPC_BLOCK_HEAT_CAPACITY { 16.7f }         // (J/K) Heat block heat capacity. Use M306 T to autotune the model.
  #define PRUSA_AIO_CUSTOM_MPC_SENSOR_RESPONSIVENESS { 0.22f }       // (K/s per ∆K) Rate of change of sensor temperature from heat block.
  #define PRUSA_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF { 0.068f }         // (W/K) Heat transfer coefficients from heat block to room air with fan off.
  #define PRUSA_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF_FAN255 { 0.097f }  // (W/K) Heat transfer coefficients from heat block to room air with fan on full.

  #define PRUSA_AIO_CUSTOM_FILAMENT_HEAT_CAPACITY_PERMM { 5.6e-3f }  // 0.0056 J/K/mm for PLA. 0.0036 J/K/mm for PETG.
                                                                     // Set with M306 H in your filament or start G-code.
#endif

//===========================================================================
//========================= LCD / TFT / Controller ==========================
//===========================================================================

/**
 * LCD / TFT / Controller
 *
 *   - Stock RepRapDiscount smart controller
 *   - OLED RepRapDiscount smart controller   // OLED screen is only compatible with LPC-based motherboards.
 *   - BigTreeTech Dual Mode TFT              // TFT35, TFT50, TFT70, etc.
 *   - Mini 12864 with NeoPixel RGB           // BigTreeTech Mini 12864 V1, MKS Mini 12864 V3, etc.
 *
 * LCD Covers: https://github.com/thisiskeithb/PrusaAIO/wiki/Recommended-LCD-Covers
 */
#define PRUSA_AIO_DISPLAY_STOCK_REPRAP_DISCOUNT_SMART_CONTROLLER
//#define PRUSA_AIO_DISPLAY_OLED_REPRAP_DISCOUNT_SMART_CONTROLLER
//#define PRUSA_AIO_DISPLAY_BTT_DUAL_MODE_TFT
//#define PRUSA_AIO_DISPLAY_MINI_12864_NEOPIXEL

//
// Reverse the encoder direction everywhere.
//
//#define PRUSA_AIO_REVERSE_ENCODER_DIRECTION

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *   en, an, bg, ca, cz, da, de, el, el_CY, es, eu, fi, fr, gl, hr, hu, it,
 *   jp_kana, ko_KR, nl, pl, pt, pt_br, ro, ru, sk, sv, tr, uk, vi, zh_CN, zh_TW
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'de':'German', 'el':'Greek (Greece)', 'el_CY':'Greek (Cyprus)', 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'gl':'Galician', 'hr':'Croatian', 'hu':'Hungarian', 'it':'Italian', 'jp_kana':'Japanese', 'ko_KR':'Korean (South Korea)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'sv':'Swedish', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Traditional)' }
 */
#define PRUSA_AIO_LCD_LANGUAGE en

//===========================================================================
//============================== Custom Menus ===============================
//===========================================================================

/**
 * Sheet Profiles Menu
 *
 * Automatically adjust Z Probe Offset with M851 based on selected Sheet Profile.
 * Up to 10 are supported without changes.
 */
//#define PRUSA_AIO_SHEET_PROFILES_MENU
#if ENABLED(PRUSA_AIO_SHEET_PROFILES_MENU)
  #define PRUSA_AIO_SHEET_1_DESC     "Smooth"    // Short description of Sheet
  #define PRUSA_AIO_SHEET_1_OFFSET     -0.000    // Sheet offset. This should be a negative value.

  #define PRUSA_AIO_SHEET_2_DESC    "Textured"
  #define PRUSA_AIO_SHEET_2_OFFSET     -0.000

  //#define PRUSA_AIO_SHEET_3_DESC    "Satin"
  //#define PRUSA_AIO_SHEET_3_OFFSET   -0.000
#endif

/**
 * Calibration Menu
 *
 * Calibrate first layer, change nozzle, do a cold pull, etc.
 */
//#define PRUSA_AIO_CALIBRATION_MENU

//===========================================================================
//================================ NeoPixels ================================
//===========================================================================

/**
 * Default LCD NeoPixel Color (Mini 12864 with NeoPixel RGB only)
 *
 *   - WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
 */
#if ENABLED(PRUSA_AIO_DISPLAY_MINI_12864_NEOPIXEL)
  #define PRUSA_AIO_LCD_NEOPIXEL_COLOR_WHITE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_RED
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_ORANGE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_YELLOW
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_GREEN
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_BLUE
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_INDIGO
  //#define PRUSA_AIO_LCD_NEOPIXEL_COLOR_VIOLET
#endif

// NeoPixel strip is disabled by default. Uncomment to enable.
//#define PRUSA_AIO_NEOPIXEL_STRIP
#if ENABLED(PRUSA_AIO_NEOPIXEL_STRIP)
  /**
   * NeoPixel Strip Type
   *
   *   - NEO_GRBW, NEO_RGBW, NEO_GRB, NEO_RBG, etc.
   *
   * 60 LEDs/meter: https://www.amazon.com/dp/B018X04ES2
   * Wiring Guide: https://github.com/thisiskeithb/PrusaAIO/wiki/Supported-Motherboards-&-Wiring-Guide
   */
  #define PRUSA_AIO_NEOPIXEL_STRIP_TYPE NEO_GRB
  #define PRUSA_AIO_NEOPIXEL_STRIP_LED_COUNT    17    // 17 NeoPixels fit in the top 2040 extrusion (60 LEDs/meter)
  #define PRUSA_AIO_NEOPIXEL_STRIP_BRIGHTNESS  255    // 255 is max brightness

  /**
   * Default NeoPixel Strip Color
   *
   *   - WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET
   */
  #define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_WHITE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_RED
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_ORANGE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_YELLOW
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_GREEN
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_BLUE
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_INDIGO
  //#define PRUSA_AIO_NEOPIXEL_STRIP_COLOR_VIOLET
#endif
