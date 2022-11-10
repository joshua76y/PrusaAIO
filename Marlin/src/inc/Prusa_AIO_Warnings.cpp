/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * Prusa_AIO_Warnings.cpp
 * Test Prusa AIO configuration values and give warnings at compile-time.
 */
#include "MarlinConfig.h"
#define PRUSA_AIO_VERSION 20221021

//
// Warnings! Located here so they will appear just once in the build output.
//

/**
 * Prusa AIO Warnings / Reminders
 */
#ifndef NO_PRUSA_AIO_WARNINGS
  #if EITHER(PRUSA_AIO_THERMISTOR_SLICE_450C, PRUSA_AIO_THERMISTOR_TL_T_D500)
    #warning "Safety Warning: Printing above 295°C will require an upgrade from the stock V6 aluminum block or it could melt!"
  #endif

  // Remind users to check U Disk / Flash Drive jumpers since they typically ship in the WiFi position.
  #if BOTH(PRUSA_AIO_MOTHERBOARD_BTT_SKR_V2_0_REV_B, PRUSA_AIO_FLASH_DRIVE_SUPPORT)
    #warning "Ensure U Disk / Flash Drive jumpers are set correctly. (See Page 12 of SKR V2's User Manual https://bit.ly/3am3PNL)"
  #endif

  // TMC2209s/TMC2226s are configured via UART
  #if ENABLED(PRUSA_AIO_DRIVERS_TMC2209) && DISABLED(PRUSA_AIO_BOARD_NO_UART_SPI_JUMPERS)
    #warning "Ensure driver jumpers on your motherboard are set to UART mode".
  #endif

  // TMC5160s/TMC2130s are configured via SPI
  #if EITHER(PRUSA_AIO_DRIVERS_TMC5160, PRUSA_AIO_DRIVERS_TMC2130) && DISABLED(PRUSA_AIO_BOARD_NO_UART_SPI_JUMPERS)
    #warning "Ensure driver jumpers on your motherboard are set to SPI mode."
  #endif

  // TMC2130s run HOT!
  #if ENABLED(PRUSA_AIO_DRIVERS_TMC2130)
    #warning "TMC2130s run hot! Active cooling is essential or drivers will overheat!"
  #endif

  // Remind users of common LCD controller setup issues
  #warning "If your LCD does not light up, you may need to rotate your EXP cable(s) 180° on one end."

  // Remind users to remove onboard SD card from MKS SGEN_L V2 after flashing or they will get a "MEDIA INIT FAIL" error message due to a shared SD_DETECT signal.
  #if ENABLED(PRUSA_AIO_MOTHERBOARD_MKS_SGEN_L_V2)
    #warning "To prevent a 'MEDIA INIT FAIL' error message, remove onboard SD card after updating firmware."
  #endif

  // SKR Mini E3 only has a single EXP connector, so users must connect to EXP3 on BTT Dual Mode TFT
  #if EITHER(PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3, PRUSA_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0_1) && ENABLED(PRUSA_AIO_DISPLAY_STOCK_REPRAP_DISCOUNT_SMART_CONTROLLER)
    #warning "Connect EXP cable from EXP1 on motherboard to EXP3 on BigTreeTech Dual Mode TFT."
  #endif

  // No FAN1_PIN available
  #if ENABLED(PRUSA_AIO_NO_FAN1_PIN)
    #warning "Connect hotend cooling fan directly to 24V power source."
  #endif

  // SKR V3 series with 5V fan need DC Mode board
  #if EITHER(PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0, PRUSA_AIO_MOTHERBOARD_BTT_SKR_V3_0_EZ) && EITHER(PRUSA_AIO_PART_COOLING_FAN_5V_STOCK_PRUSA_5015, PRUSA_AIO_PART_COOLING_FAN_5V_LDO_DF5015H05S)
    #warning "SKR 3-DC Mode addon is required to run 5V fans on SKR V3/EZ motherboards."
  #endif

#endif
