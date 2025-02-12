#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Microchip"
#define PRODUCT_NAME "SAME54 XPlained"
#define VOLUME_LABEL "SAME54"
#define INDEX_URL "http://adafru.it/4759"
#define BOARD_ID "SAME54P20A-XPlained-v0"

#define USB_VID 0x239A
#define USB_PID 0x00CD

#define LED_PIN PIN_PC18

#define BOOT_USART_MODULE                 SERCOM4
#define BOOT_USART_MASK                   APBDMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBDMASK_SERCOM4
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB09D_SERCOM4_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB08D_SERCOM4_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM4_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM4_GCLK_ID_SLOW

#endif
