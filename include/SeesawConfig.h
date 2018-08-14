#ifndef SEESAW_CONFIG_H
#define SEESAW_CONFIG_H

#include "board_config.h"
#include "RegisterMap.h"
#include "PinMap.h"
#include "build_date.h"

#define DATE_CODE (uint32_t)( (  (uint32_t)__YEAR__ << 9) \
		| ( (uint32_t)__MONTH__ << 5 ) \
		| ( (uint32_t)__DAY__ & 0x1F ) )

#define CONFIG_VERSION (uint32_t)( ( (uint32_t)PRODUCT_CODE << 16 ) \
		| ( (uint16_t)DATE_CODE & 0x0000FFFF) )

#ifndef CONFIG_USB
#define CONFIG_USB 0ul
#endif

#if defined(SAMD21)
#define HAS_PORTB
#define USE_TCC_TIMERS
#endif

//* ============== ADC =================== *//
#ifndef CONFIG_ADC_INPUT_0
#define CONFIG_ADC_INPUT_0 0
#endif
#ifndef CONFIG_ADC_INPUT_1
#define CONFIG_ADC_INPUT_1 0
#endif
#ifndef CONFIG_ADC_INPUT_2
#define CONFIG_ADC_INPUT_2 0
#endif
#ifndef CONFIG_ADC_INPUT_3
#define CONFIG_ADC_INPUT_3 0
#endif
#ifndef CONFIG_ADC_INPUT_4
#define CONFIG_ADC_INPUT_4 0
#endif
#ifndef CONFIG_ADC_INPUT_5
#define CONFIG_ADC_INPUT_5 0
#endif
#ifndef CONFIG_ADC_INPUT_6
#define CONFIG_ADC_INPUT_6 0
#endif
#ifndef CONFIG_ADC_INPUT_7
#define CONFIG_ADC_INPUT_7 0
#endif

#ifndef CONFIG_ADC_INPUT_0_PIN
#define CONFIG_ADC_INPUT_0_PIN 2
#endif

#ifndef CONFIG_ADC_INPUT_0_CHANNEL
#define CONFIG_ADC_INPUT_0_CHANNEL 0
#endif

#ifndef CONFIG_ADC_INPUT_1_PIN
#define CONFIG_ADC_INPUT_1_PIN 3
#endif

#ifndef CONFIG_ADC_INPUT_1_CHANNEL
#define CONFIG_ADC_INPUT_1_CHANNEL 1
#endif

#ifndef CONFIG_ADC_INPUT_2_PIN
#define CONFIG_ADC_INPUT_2_PIN 4
#endif

#ifndef CONFIG_ADC_INPUT_2_CHANNEL
#define CONFIG_ADC_INPUT_2_CHANNEL 2
#endif

#ifndef CONFIG_ADC_INPUT_3_PIN
#define CONFIG_ADC_INPUT_3_PIN 5
#endif

#ifndef CONFIG_ADC_INPUT_3_CHANNEL
#define CONFIG_ADC_INPUT_3_CHANNEL 3
#endif

#ifndef CONFIG_ADC_INPUT_4_PIN
#define CONFIG_ADC_INPUT_4_PIN 11
#endif

#ifndef CONFIG_ADC_INPUT_4_CHANNEL
#define CONFIG_ADC_INPUT_4_CHANNEL 19
#endif

#ifndef CONFIG_ADC_INPUT_5_PIN
#define CONFIG_ADC_INPUT_5_PIN 10
#endif

#ifndef CONFIG_ADC_INPUT_5_CHANNEL
#define CONFIG_ADC_INPUT_5_CHANNEL 18
#endif

#ifndef CONFIG_ADC_INPUT_6_PIN
#define CONFIG_ADC_INPUT_6_PIN 9
#endif

#ifndef CONFIG_ADC_INPUT_6_CHANNEL
#define CONFIG_ADC_INPUT_6_CHANNEL 17
#endif

#ifndef CONFIG_ADC_INPUT_7_PIN
#define CONFIG_ADC_INPUT_7_PIN 8
#endif

#ifndef CONFIG_ADC_INPUT_7_CHANNEL
#define CONFIG_ADC_INPUT_7_CHANNEL 16
#endif

//* ============== DAC =================== *//

//* ============== TOUCH =================== *//
#ifndef CONFIG_TOUCH
#define CONFIG_TOUCH 0
#endif

#ifndef CONFIG_TOUCH0
#define CONFIG_TOUCH0 0
#endif

#ifndef CONFIG_TOUCH0_PIN
#define CONFIG_TOUCH0_PIN 4
#endif

#ifndef CONFIG_TOUCH1
#define CONFIG_TOUCH1 0
#endif

#ifndef CONFIG_TOUCH1_PIN
#define CONFIG_TOUCH1_PIN 5
#endif

#ifndef CONFIG_TOUCH2
#define CONFIG_TOUCH2 0
#endif

#ifndef CONFIG_TOUCH2_PIN
#define CONFIG_TOUCH2_PIN 6
#endif

#ifndef CONFIG_TOUCH3
#define CONFIG_TOUCH3 0
#endif

#ifndef CONFIG_TOUCH3_PIN
#define CONFIG_TOUCH3_PIN 7
#endif

//* ============== TIMER =================== *//


#ifndef CONFIG_TIMER_PWM_OUT0_TC
#define CONFIG_TIMER_PWM_OUT0_TC TC1
#endif

#ifndef CONFIG_TIMER_PWM_OUT0_WO
#define CONFIG_TIMER_PWM_OUT0_WO 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT0_PIN
#define CONFIG_TIMER_PWM_OUT0_PIN 4
#endif

#ifndef CONFIG_TIMER_PWM_OUT1_TC
#define CONFIG_TIMER_PWM_OUT1_TC TC1
#endif

#ifndef CONFIG_TIMER_PWM_OUT1_WO
#define CONFIG_TIMER_PWM_OUT1_WO 1
#endif

#ifndef CONFIG_TIMER_PWM_OUT1_PIN
#define CONFIG_TIMER_PWM_OUT1_PIN 5
#endif

#ifndef CONFIG_TIMER_PWM_OUT2_TC
#define CONFIG_TIMER_PWM_OUT2_TC TC2
#endif

#ifndef CONFIG_TIMER_PWM_OUT2_WO
#define CONFIG_TIMER_PWM_OUT2_WO 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT2_PIN
#define CONFIG_TIMER_PWM_OUT2_PIN 6
#endif

#ifndef CONFIG_TIMER_PWM_OUT3_TC
#define CONFIG_TIMER_PWM_OUT3_TC TC2
#endif

#ifndef CONFIG_TIMER_PWM_OUT3_WO
#define CONFIG_TIMER_PWM_OUT3_WO 1
#endif

#ifndef CONFIG_TIMER_PWM_OUT3_PIN
#define CONFIG_TIMER_PWM_OUT3_PIN 7
#endif

#ifndef CONFIG_TIMER_PWM_OUT4
#define CONFIG_TIMER_PWM_OUT4 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT5
#define CONFIG_TIMER_PWM_OUT5 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT6
#define CONFIG_TIMER_PWM_OUT6 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT7
#define CONFIG_TIMER_PWM_OUT7 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT8
#define CONFIG_TIMER_PWM_OUT8 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT9
#define CONFIG_TIMER_PWM_OUT9 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT10
#define CONFIG_TIMER_PWM_OUT10 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT11
#define CONFIG_TIMER_PWM_OUT11 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT4_PIN
#define CONFIG_TIMER_PWM_OUT4_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT5_PIN
#define CONFIG_TIMER_PWM_OUT5_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT6_PIN
#define CONFIG_TIMER_PWM_OUT6_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT7_PIN
#define CONFIG_TIMER_PWM_OUT7_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT8_PIN
#define CONFIG_TIMER_PWM_OUT8_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT9_PIN
#define CONFIG_TIMER_PWM_OUT9_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT10_PIN
#define CONFIG_TIMER_PWM_OUT10_PIN 0
#endif

#ifndef CONFIG_TIMER_PWM_OUT11_PIN
#define CONFIG_TIMER_PWM_OUT11_PIN 0
#endif

#if CONFIG_TIMER
	typedef struct _PWM
	{
		Tc*				tc ;
#ifdef USE_TCC_TIMERS
		Tcc*            tcc ;
#endif
		uint8_t			wo ;
		uint8_t			pin;
	} _PWM ;

	extern _PWM g_pwms[];
#endif

//* ============== INTERRUPT =================== *//

#ifndef CONFIG_INTERRUPT_OPEN_DRAIN
#define CONFIG_INTERRUPT_OPEN_DRAIN 0
#endif

//* ============== I2C SLAVE =================== *//

#ifndef CONFIG_I2C_SLAVE_SERCOM
#define CONFIG_I2C_SLAVE_SERCOM SERCOM1
#endif

#ifndef CONFIG_I2C_SLAVE_HANDLER
#define CONFIG_I2C_SLAVE_HANDLER SERCOM1_Handler
#endif

#ifndef CONFIG_I2C_SLAVE_IRQn
#define CONFIG_I2C_SLAVE_IRQn SERCOM1_IRQn
#endif

#ifndef CONFIG_I2C_SLAVE_PIN_SDA
#define CONFIG_I2C_SLAVE_PIN_SDA 22
#endif
#ifndef CONFIG_I2C_SLAVE_PIN_SCL
#define CONFIG_I2C_SLAVE_PIN_SCL 23
#endif

#ifndef CONFIG_I2C_SLAVE_MUX
#define CONFIG_I2C_SLAVE_MUX 2
#endif

#ifndef CONFIG_I2C_SLAVE_FLOW_CONTROL
#define CONFIG_I2C_SLAVE_FLOW_CONTROL 0
#endif

#ifndef CONFIG_I2C_SLAVE_FLOW_CONTROL_PIN
#define CONFIG_I2C_SLAVE_FLOW_CONTROL_PIN 28
#endif

#ifndef CONFIG_I2C_SLAVE_ADDR
#define CONFIG_I2C_SLAVE_ADDR 0x49
#endif

//* ============== SPI SLAVE =================== *//
#ifndef CONFIG_SPI_SLAVE
#define CONFIG_SPI_SLAVE 0
#endif

#ifndef CONFIG_SPI_SLAVE_SERCOM
#define CONFIG_SPI_SLAVE_SERCOM SERCOM3
#endif

#ifndef CONFIG_SPI_SLAVE_HANDLER
#define CONFIG_SPI_SLAVE_HANDLER SERCOM3_Handler
#endif

#ifndef CONFIG_SPI_SLAVE_IRQn
#define CONFIG_SPI_SLAVE_IRQn SERCOM3_IRQn
#endif

#ifndef CONFIG_SPI_SLAVE_PIN_MOSI
#define CONFIG_SPI_SLAVE_PIN_MOSI 18
#endif

#ifndef CONFIG_SPI_SLAVE_PIN_MISO
#define CONFIG_SPI_SLAVE_PIN_MISO 16
#endif

#ifndef CONFIG_SPI_SLAVE_PIN_SCK
#define CONFIG_SPI_SLAVE_PIN_SCK 19
#endif

#ifndef CONFIG_SPI_SLAVE_PIN_SS
#define CONFIG_SPI_SLAVE_PIN_SS 17
#endif

#ifndef CONFIG_SPI_SLAVE_PAD_TX
#define CONFIG_SPI_SLAVE_PAD_TX SPI_PAD_0_SCK_3
#endif

#ifndef CONFIG_SPI_SLAVE_PAD_RX
#define CONFIG_SPI_SLAVE_PAD_RX SERCOM_RX_PAD_2
#endif

#ifndef CONFIG_SPI_SLAVE_CHAR_SIZE
#define CONFIG_SPI_SLAVE_CHAR_SIZE SPI_CHAR_SIZE_8_BITS
#endif

#ifndef CONFIG_SPI_SLAVE_DATA_ORDER
#define CONFIG_SPI_SLAVE_DATA_ORDER MSB_FIRST
#endif

//* ============== SERCOM =================== *//

#ifndef CONFIG_SERCOM_UART_PIN_RX
#define CONFIG_SERCOM_UART_PIN_RX 11
#endif

#ifndef CONFIG_SERCOM_UART_PIN_TX
#define CONFIG_SERCOM_UART_PIN_TX 10
#endif

#ifndef CONFIG_SERCOM_UART_PAD_TX
#define CONFIG_SERCOM_UART_PAD_TX UART_TX_PAD_2
#endif

#ifndef CONFIG_SERCOM_UART_PAD_RX
#define CONFIG_SERCOM_UART_PAD_RX SERCOM_RX_PAD_3
#endif

#ifndef CONFIG_SERCOM_UART_MUX_TX
#define CONFIG_SERCOM_UART_MUX_TX 2
#endif

#ifndef CONFIG_SERCOM_UART_MUX_RX
#define CONFIG_SERCOM_UART_MUX_RX 2
#endif

#ifndef CONFIG_SERCOM_UART_BAUD_RATE
#define CONFIG_SERCOM_UART_BAUD_RATE 9600
#endif

#ifndef CONFIG_SERCOM_UART_CHAR_SIZE
#define CONFIG_SERCOM_UART_CHAR_SIZE UART_CHAR_SIZE_8_BITS
#endif

#ifndef CONFIG_SERCOM_UART_PARITY
#define CONFIG_SERCOM_UART_PARITY SERCOM_NO_PARITY
#endif

#ifndef CONFIG_SERCOM_UART_STOP_BIT
#define CONFIG_SERCOM_UART_STOP_BIT SERCOM_STOP_BIT_1
#endif

//* ============== LOG =================== *//
#define CONFIG_LOG_SERCOM SERCOM0
#define CONFIG_LOG_UART_PIN_TX 4
#define CONFIG_LOG_UART_PIN_TX_MUX 3
#define CONFIG_LOG_UART_PAD_TX UART_TX_PAD_0
#define CONFIG_LOG_UART_PAD_RX SERCOM_RX_PAD_3

#define CONFIG_LOG_UART_BAUD_RATE 115200
#define CONFIG_LOG_UART_CHAR_SIZE UART_CHAR_SIZE_8_BITS

#define CONFIG_LOG_UART_PARITY SERCOM_NO_PARITY

#define CONFIG_LOG_UART_STOP_BIT SERCOM_STOP_BIT_1

//* ============== DAP =================== *//

	#define CONFIG_DAP_SWCLK 11
	#define CONFIG_DAP_SWDIO 10
	#define CONFIG_DAP_TDI 19
	#define CONFIG_DAP_TDO 20
	#define CONFIG_DAP_nTRST 21
	#define CONFIG_DAP_nRESET 14
	
//* =========== NEOPIXEL ================ *//

//* =========== POWER SENSE ================ *//
#ifndef CONFIG_POWER_SENSE
#define CONFIG_POWER_SENSE 0
#endif

#ifndef CONFIG_POWER_SENSE_ADC_PIN
#define CONFIG_POWER_SENSE_ADC_PIN (32 + 3)
#endif

#ifndef CONFIG_POWER_SENSE_ADC_CHANNEL
#define CONFIG_POWER_SENSE_ADC_CHANNEL 11
#endif

#ifndef CONFIG_POWER_SENSE_NEOPIX_PIN
#define CONFIG_POWER_SENSE_NEOPIX_PIN 27
#endif

#ifndef CONFIG_POWER_SENSE_HI_THRESH
#define CONFIG_POWER_SENSE_HI_THRESH 375
#endif

#ifndef CONFIG_POWER_SENSE_LO_THRESH
#define CONFIG_POWER_SENSE_LO_THRESH 256
#endif

//* =========== KEYPAD ================ *//
#ifndef CONFIG_KEYPAD
#define CONFIG_KEYPAD 0
#endif

#ifndef CONFIG_KEYPAD_SYNC_INTERVAL
#define CONFIG_KEYPAD_SYNC_INTERVAL 17
#endif

#ifndef CONFIG_KEYPAD_ROW0
#define CONFIG_KEYPAD_ROW0 0
#endif

#ifndef CONFIG_KEYPAD_ROW1
#define CONFIG_KEYPAD_ROW1 0
#endif


#ifndef CONFIG_KEYPAD_ROW2
#define CONFIG_KEYPAD_ROW2 0
#endif

#ifndef CONFIG_KEYPAD_ROW3
#define CONFIG_KEYPAD_ROW3 0
#endif

#ifndef CONFIG_KEYPAD_COL0
#define CONFIG_KEYPAD_COL0 0
#endif

#ifndef CONFIG_KEYPAD_COL1
#define CONFIG_KEYPAD_COL1 0
#endif

#ifndef CONFIG_KEYPAD_COL2
#define CONFIG_KEYPAD_COL2 0
#endif

#ifndef CONFIG_KEYPAD_COL3
#define CONFIG_KEYPAD_COL3 0
#endif

#ifndef CONFIG_KEYPAD_ROW0_PIN
#define CONFIG_KEYPAD_ROW0_PIN 0
#endif

#ifndef CONFIG_KEYPAD_ROW1_PIN
#define CONFIG_KEYPAD_ROW1_PIN 0
#endif

#ifndef CONFIG_KEYPAD_ROW2_PIN
#define CONFIG_KEYPAD_ROW2_PIN 0
#endif

#ifndef CONFIG_KEYPAD_ROW3_PIN
#define CONFIG_KEYPAD_ROW3_PIN 0
#endif

#ifndef CONFIG_KEYPAD_COL0_PIN
#define CONFIG_KEYPAD_COL0_PIN 0
#endif

#ifndef CONFIG_KEYPAD_COL1_PIN
#define CONFIG_KEYPAD_COL1_PIN 0
#endif

#ifndef CONFIG_KEYPAD_COL2_PIN
#define CONFIG_KEYPAD_COL2_PIN 0
#endif

#ifndef CONFIG_KEYPAD_COL3_PIN
#define CONFIG_KEYPAD_COL3_PIN 0
#endif

//* ============== GPIO ================= *//
#ifndef CONFIG_NO_ACTIVITY_LED
#define CONFIG_ACTIVITY_LED 1ul
#else
#define CONFIG_ACTIVITY_LED 0ul
#endif
#ifndef CONFIG_NO_ADDR
#define CONFIG_ADDR 1ul
#else
#define CONFIG_ADDR 0ul
#endif

#ifndef CONFIG_NO_EEPROM
#define CONFIG_EEPROM 1ul
#endif

#ifndef PIN_ACTIVITY_LED
#define PIN_ACTIVITY_LED 27
#endif

#ifndef PIN_ADDR_0
#define PIN_ADDR_0 16
#endif

#ifndef PIN_ADDR_1
#define PIN_ADDR_1 17
#endif

#ifndef CONFIG_ADDR_2
#define CONFIG_ADDR_2 0
#endif

#ifndef CONFIG_ADDR_3
#define CONFIG_ADDR_3 0
#endif

#ifndef CONFIG_ADDR_4
#define CONFIG_ADDR_4 0
#endif

#ifndef PIN_ADDR_2
#define PIN_ADDR_2 0
#endif

#ifndef PIN_ADDR_3
#define PIN_ADDR_3 0
#endif

#ifndef PIN_ADDR_4
#define PIN_ADDR_4 0
#endif

#ifndef CONFIG_USBPIN_USB_DM
#define CONFIG_USBPIN_USB_DM 24
#endif

#ifndef CONFIG_USBPIN_USB_DP
#define CONFIG_USBPIN_USB_DP 25
#endif

#define CONFIG_GPIO_MASK (((unsigned long long) 0xFFFFFFFFFFFFFFFF) ^ ( ((uint64_t)CONFIG_USBPIN_USB_DM) | ((uint64_t)CONFIG_USB << CONFIG_USBPIN_USB_DP) \
	    | ((uint64_t)CONFIG_ADDR << PIN_ADDR_0) | ((uint64_t)CONFIG_ADDR << PIN_ADDR_1) \
		| ((uint64_t)CONFIG_ADDR_2 << PIN_ADDR_2) | ((uint64_t)CONFIG_ADDR_3 << PIN_ADDR_3) \
		| ((uint64_t)CONFIG_ADDR_4 << PIN_ADDR_4) \
		| ((uint64_t)CONFIG_ACTIVITY_LED << PIN_ACTIVITY_LED) | ((uint64_t)CONFIG_POWER_SENSE << CONFIG_POWER_SENSE_NEOPIX_PIN) \
		| ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT0) << CONFIG_TIMER_PWM_OUT0_PIN) \
		| ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT1) << CONFIG_TIMER_PWM_OUT1_PIN) \
		| ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT2) << CONFIG_TIMER_PWM_OUT2_PIN) \
		| ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT3) << CONFIG_TIMER_PWM_OUT3_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT4) << CONFIG_TIMER_PWM_OUT4_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT5) << CONFIG_TIMER_PWM_OUT5_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT6) << CONFIG_TIMER_PWM_OUT6_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT7) << CONFIG_TIMER_PWM_OUT7_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT8) << CONFIG_TIMER_PWM_OUT8_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT9) << CONFIG_TIMER_PWM_OUT9_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT10) << CONFIG_TIMER_PWM_OUT10_PIN) \
        | ((uint64_t)(CONFIG_TIMER & CONFIG_TIMER_PWM_OUT11) << CONFIG_TIMER_PWM_OUT11_PIN) \
        | ((uint64_t)(CONFIG_TOUCH & CONFIG_TOUCH0) << CONFIG_TOUCH0_PIN) \
        | ((uint64_t)(CONFIG_TOUCH & CONFIG_TOUCH1) << CONFIG_TOUCH1_PIN) \
        | ((uint64_t)(CONFIG_TOUCH & CONFIG_TOUCH2) << CONFIG_TOUCH2_PIN) \
        | ((uint64_t)(CONFIG_TOUCH & CONFIG_TOUCH3) << CONFIG_TOUCH3_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_ROW0) << CONFIG_KEYPAD_ROW0_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_ROW1) << CONFIG_KEYPAD_ROW1_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_ROW2) << CONFIG_KEYPAD_ROW2_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_ROW3) << CONFIG_KEYPAD_ROW3_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_COL0) << CONFIG_KEYPAD_COL0_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_COL1) << CONFIG_KEYPAD_COL1_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_COL2) << CONFIG_KEYPAD_COL2_PIN) \
		| ((uint64_t)(CONFIG_KEYPAD & CONFIG_KEYPAD_COL3) << CONFIG_KEYPAD_COL3_PIN) \
		| ((uint64_t)CONFIG_INTERRUPT << CONFIG_INTERRUPT_PIN) \
		| ((uint64_t)CONFIG_I2C_SLAVE << CONFIG_I2C_SLAVE_PIN_SCL) \
		| ((uint64_t)CONFIG_I2C_SLAVE << CONFIG_I2C_SLAVE_PIN_SDA) \
		| ((uint32_t)CONFIG_SPI_SLAVE << CONFIG_SPI_SLAVE_PIN_MOSI) \
		| ((uint64_t)CONFIG_SPI_SLAVE << CONFIG_SPI_SLAVE_PIN_MISO) \
		| ((uint64_t)CONFIG_SPI_SLAVE << CONFIG_SPI_SLAVE_PIN_SCK) \
		| ((uint64_t)CONFIG_SPI_SLAVE << CONFIG_SPI_SLAVE_PIN_SS) \
		| ((uint64_t)CONFIG_I2C_SLAVE_FLOW_CONTROL << CONFIG_I2C_SLAVE_FLOW_CONTROL_PIN) \
		| ((uint64_t)(CONFIG_SERCOM0 | CONFIG_SERCOM1 | CONFIG_SERCOM2 | CONFIG_SERCOM3 | CONFIG_SERCOM4 | CONFIG_SERCOM5) << CONFIG_SERCOM_UART_PIN_RX) \
		| ((uint64_t)(CONFIG_SERCOM0 | CONFIG_SERCOM1 | CONFIG_SERCOM2 | CONFIG_SERCOM3 | CONFIG_SERCOM4 | CONFIG_SERCOM5) << CONFIG_SERCOM_UART_PIN_TX))) \

#define CONFIG_GPIO_A_MASK ((uint32_t)(CONFIG_GPIO_MASK & 0xFFFFFFFF))
#define CONFIG_GPIO_B_MASK ((uint32_t)((CONFIG_GPIO_MASK >> 32) & 0xFFFFFFFF))


#define CONFIG_NUM_AO 	(1 + CONFIG_ADC + CONFIG_DAC + CONFIG_TIMER + \
						CONFIG_INTERRUPT + CONFIG_SERCOM0 + CONFIG_SERCOM1 + CONFIG_SERCOM2 + \
						CONFIG_SERCOM3 + CONFIG_SERCOM4 + CONFIG_SERCOM5 + CONFIG_I2C_SLAVE +  \
						CONFIG_SPI_SLAVE +CONFIG_DAP + CONFIG_NEOPIXEL + CONFIG_TOUCH + CONFIG_KEYPAD)

#define CONFIG_OPTIONS ( (0x03ul) | (CONFIG_DAC << SEESAW_DAC_BASE) \
			| ((uint32_t)CONFIG_ADC << SEESAW_ADC_BASE) \
			| ((uint32_t)CONFIG_TIMER << SEESAW_TIMER_BASE) \
			| ((uint32_t)CONFIG_INTERRUPT << SEESAW_INTERRUPT_BASE) \
			| ((uint32_t)CONFIG_SERCOM0 << SEESAW_SERCOM0_BASE) \
			| ((uint32_t)CONFIG_SERCOM1 << SEESAW_SERCOM1_BASE) \
			| ((uint32_t)CONFIG_SERCOM2 << SEESAW_SERCOM2_BASE) \
			| ((uint32_t)CONFIG_SERCOM3 << SEESAW_SERCOM3_BASE) \
			| ((uint32_t)CONFIG_SERCOM4 << SEESAW_SERCOM4_BASE) \
			| ((uint32_t)CONFIG_SERCOM5 << SEESAW_SERCOM5_BASE) \
			| ((uint32_t)CONFIG_DAP << SEESAW_DAP_BASE) \
			| ((uint32_t)CONFIG_NEOPIXEL << SEESAW_NEOPIXEL_BASE) \
			| ((uint32_t)CONFIG_TOUCH << SEESAW_TOUCH_BASE) \
			| ((uint32_t)CONFIG_KEYPAD << SEESAW_KEYPAD_BASE))

#endif
