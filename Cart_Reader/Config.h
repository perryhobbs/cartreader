/********************************************************************
                    Open Source Cartridge Reader
********************************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_

// Hardware Version
#define HW5

/*==== HARDWARE CONFIG ===========================================*/

// Automatic Voltage (hardware modification is required to change this setting)
#define ENABLE_VSELECT

// 3.3V Stability Fix (for use with VSELECT)
// The 2560 is only designed to run at 16MHz at 5V. It is only rated for 8MHz at 3.3V.
// This option lowers the clock to the rated 8MHz when voltage is 3.3V.
// More info: https://github.com/sanni/cartreader/issues/870
#define ENABLE_3V3FIX

// Clock Generator
#define ENABLE_CLOCKGEN

// Real Time Clock
#define ENABLE_RTC
#define DS3231

// Nintendo Game Boy (GB, GBC, GBA)
#define ENABLE_GBX

// Nintendo Entertainment System (NES) / Famicom (FC)
#define ENABLE_NES

// Super Nintendo Entertainment System (SNES) / Super Famicom (SFC)
#define ENABLE_SNES

// Nintendo 64 (N64) & Controller Pak
#define ENABLE_N64
#define ENABLE_CONTROLLERTEST

// Sega Genesis / Mega Drive
#define ENABLE_MD

// Sega Master System (SMS) / Mark III / Game Gear / SG-1000
#define ENABLE_SMS

/*==== USER CONFIG ===========================================*/

// Default LCD Color (Green, Red, Blue)
#define OPTION_LCD_BG_COLOR 100, 0, 0

/* [ Config File -------------------------------------------------- ]
    Allow changing some configuration values via a config file.
    Can be set in config.txt on the SD card. Example:
      lcd.confColor=1
      lcd.red=0
      lcd.green=0
      lcd.blue=100
*/
#define ENABLE_CONFIG

// Disable to sort files/folders from oldest to newest
#define OPTION_REVERSE_SORT

/*==== OTHER GAME SYSTEM CORES ==========================================*/

/* [ Atari 2600 --------------------------------------------------- ]
*/

//#define ENABLE_2600

/****/

/* [ Atari 5200 --------------------------------------------------- ]
*/

//#define ENABLE_5200

/****/

/* [ Atari 7800 --------------------------------------------------- ]
*/

//#define ENABLE_7800

/****/

/* [ Atari Jaguar --------------------------------------------------- ]
*/
//#define ENABLE_JAGUAR

/****/

/* [ Atari LYNX --------------------------------------------------- ]
*/

//#define ENABLE_LYNX

/****/

/* [ Atari 8-bit -------------------------------------------------- ]
*/

//#define ENABLE_ATARI8

/****/

/* [ Bally Astrocade ---------------------------------------------- ]
*/

//#define ENABLE_BALLY

/****/

/* [ Bandai Little Jammer ----------------------------------------- ]
*/

//#define ENABLE_LJ

/****/

/* [ Bandai Little Jammer Pro ------------------------------------- ]
*/

//#define ENABLE_LJPRO

/****/

/* [ Benesse Pocket Challenge W ----------------------------------- ]
*/

//#define ENABLE_PCW

/****/

/* [ Casio PV-1000 ------------------------------------------------ ]
*/

//#define ENABLE_PV1000

/****/

/* [ ColecoVision ------------------------------------------------- ]
*/

//#define ENABLE_COLV

/****/

/* [ Commodore 64 ------------------------------------------------- ]
*/

//#define ENABLE_C64

/****/

/* [ Commodore VIC-20 --------------------------------------------- ]
*/

//#define ENABLE_VIC20

/****/

/* [ Emerson Arcadia 2001 ----------------------------------------- ]
*/

//#define ENABLE_ARC

/****/

/* [ Fairchild Channel F ------------------------------------------ ]
*/

//#define ENABLE_FAIRCHILD

/****/

/* [ Flash Repros (all systems, SNES repro also needs FLASH8)------ ]
*/

//#define ENABLE_FLASH 

/****/

/* [ Flashrom Programmer Menu & SNES Repros------------------------ ]
*/

//#define ENABLE_FLASH8 
//#define ENABLE_FLASH16 

/****/

/* [ Intellivision ------------------------------------------------ ]
*/

//#define ENABLE_INTV

/****/

/* [ LeapFrog Leapster -------------------------------------------- ]
*/

//#define ENABLE_LEAP

/****/

/* [ Neo Geo Pocket ----------------------------------------------- ]
*/

//#define ENABLE_NGP

/****/

/* [ Magnavox Odyssey 2 ------------------------------------------- ]
*/

//#define ENABLE_ODY2

/****/

/* [ MSX ---------------------------------------------------------- ]
*/

//#define ENABLE_MSX

/****/

/* [ PC Engine/TurboGrafx 16 -------------------------------------- ]
*/

//#define ENABLE_PCE

/****/

/* [ Pokemon Mini ------------------------------------------------- ]
*/

//#define ENABLE_POKE

/****/

/* [ RCA Studio II ------------------------------------------------ ]
*/

//#define ENABLE_RCA

/****/

/* [ Super Famicom SF Memory Cassette (needs ENABLE_SNES)---------- ]
*/

//#define ENABLE_SFM

/****/

/* [ Super Famicom Satellaview (needs ENABLE_SNES)----------------- ]
*/

//#define ENABLE_SV

/****/

/* [ Super Famicom Sufami Turbo (needs ENABLE_SNES)---------------- ]
*/

//#define ENABLE_ST

/****/

/* [ Super Famicom Game Processor RAM Cassette (needs ENABLE_SNES)- ]
*/

//#define ENABLE_GPC

/****/

/* [ Texas Instruments TI-99 -------------------------------------- ]
*/

//#define ENABLE_TI99

/****/

/* [ Tomy Pyuuta -------------------------------------------------- ]
*/

//#define ENABLE_PYUUTA

/****/

/* [ TRS-80 Color Computer ---------------------------------------- ]
*/

//#define ENABLE_TRS80

/****/

/* [ Vectrex ------------------------------------------------------ ]
*/

//#define ENABLE_VECTREX

/****/

/* [ Virtual Boy -------------------------------------------------- ]
*/

//#define ENABLE_VBOY

/****/

/* [ Vtech V.Smile ------------------------------------------------ ]
*/

//#define ENABLE_VSMILE

/****/

/* [ Watara Supervision ------------------------------------------- ]
*/

//#define ENABLE_WSV

/****/

/* [ WonderSwan and Benesse Pocket Challenge v2 ------------------- ]
*/

//#define ENABLE_WS

/****/

/* [ Super A'can -------------------------------------------------- ]
*/

//#define ENABLE_SUPRACAN

/****/

/* [ Casio Loopy -------------------------------------------------- ]
*/

//#define ENABLE_LOOPY

/****/

/* [ CP System III ------------------------------------------------ ]
also needs ENABLE_FLASH8 and ENABLE_FLASH16 to be enabled
*/

//#define ENABLE_CPS3

/****/

/*==== FIRMWARE OPTIONS ===========================================*/

/* [ Updater ------------------------------------------------------ ]
    Disable this if you don't plan to/want to use the firmware
    updater utility. This setting is ignored on hardware versions
    other than HW5 and HW3.
*/

#define ENABLE_UPDATER

/****/

/* [ Self Test ---------------------------------------------------- ]
    Tests for shorts and other issues in your OSCR build.
*/

#define ENABLE_SELFTEST

/****/

/* [ Logging ------------------------------------------------------ ]
    Write all info to OSCR_LOG.txt in root dir

    Can be toggled off using config:
      oscr.logging=0
*/

#define ENABLE_GLOBAL_LOG

/* [ SNES Core/CLOCKGEN: Read Clock Generator Calibration Data ---- ]
    Toggle clock calibration menu and whether or not to use calibration data from snes_clk.txt
*/

//#define OPTION_CLOCKGEN_CALIBRATION
//#define OPTION_CLOCKGEN_USE_CALIBRATION

/****/

/* [ MegaDrive/Genesis Core: Compatibility Settings --------------- ]
    Allows you to create a text file on the SD card called
    "mdconf.txt" which you should place the following into:

    [segaSram16bit] N

    Where N is:
      0: Output each byte once. Not supported by emulators. (default)
      1: Duplicate each byte. Usable by Kega Fusion.
      2: Same as 1 + pad with 0xFF so that the file size is 64KB.

    **
    ** DEPRECATED: Use the config file instead. See below.
    **
*/

//#define use_md_conf

/*
    Configure how the MD core saves are formatted.

    Can be set using config:
      md.saveType=0

    If config is enabled, this option does nothing -- use the config.

    Options:
      0: Output each byte once. Not supported by emulators. (default)
      1: Duplicate each byte. Usable by Kega Fusion.
      2: Same as 1 + pad with 0xFF so that the file size is 64KB.
*/

//#define OPTION_MD_DEFAULT_SAVE_TYPE 0

/****/

/* [ N64 Core: Fast CRC ------------------------------------------- ]
    Toggle so the CRC for N64 Roms will be calculated during dumping
    from memory instead of after dumping from SD card, not compatible
    with all Cart Readers
*/

#define OPTION_N64_FASTCRC

/****/

/* [ N64 Core: Log Summary ---------------------------------------- ]
    Enable to save a n64log.txt file with rom info in /N64/ROM
*/

//#define OPTION_N64_SAVESUMMARY

/****/


/*==== PROCESSING =================================================*/

/*
              You probably shouldn't change this stuff!
*/

#if defined(ENABLE_CONFIG)
#define CONFIG_FILE "config.txt"
// Define the max length of the key=value pairs
// Do your best not to have to increase these.
#define CONFIG_KEY_MAX 32
#define CONFIG_VALUE_MAX 32
#endif

#if (defined(HW4) || defined(HW5))
#define ENABLE_LCD
#define ENABLE_NEOPIXEL
#define ENABLE_ROTARY
//# define rotate_counter_clockwise
#define OPTION_WS_ADAPTER_V2
#endif

#if (defined(HW2) || defined(HW3))
#define ENABLE_OLED
#define ENABLE_BUTTON2
#define ENABLE_CA_LED
#endif

#if defined(HW1)
#define ENABLE_OLED
#endif

#if defined(SERIAL_MONITOR)
#define ENABLE_SERIAL
#endif

/* Firmware updater only works with HW3 and HW5 */
#if !(defined(HW5) || defined(HW3))
#undef ENABLE_UPDATER
#endif

/* End of settings */

#endif /* CONFIG_H_ */
