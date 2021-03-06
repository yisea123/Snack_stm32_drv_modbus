/*
*********************************************************************************************************
*
*                                           LCD WH1602 INTERFACE
*
* Filename      : lcd.h
* Version       : V1.00
* Programmer(s) : Palladin
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/
#ifndef __LCD_H_
#define __LCD_H_

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include "stm32f10x.h"

/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/
#define	LCD_ROWS     2
#define	LCD_COLUMNS  16

#define	LCD_PIN_RS  GPIOC, GPIO_Pin_10
#define	LCD_PIN_EN  GPIOC, GPIO_Pin_11
#define	LCD_PIN_D7  GPIOB, GPIO_Pin_9
#define	LCD_PIN_D6  GPIOB, GPIO_Pin_7
#define	LCD_PIN_D5  GPIOB, GPIO_Pin_6
#define	LCD_PIN_D4  GPIOB, GPIO_Pin_5
#define	LCD_PIN_D3  GPIOB, GPIO_Pin_4
#define	LCD_PIN_D2  GPIOB, GPIO_Pin_3
#define	LCD_PIN_D1  GPIOD, GPIO_Pin_2
#define	LCD_PIN_D0  GPIOC, GPIO_Pin_12

/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                              DATA TYPES
*********************************************************************************************************
*/

typedef enum
{
	LCD_CMD_RESET         = 0x30,                // ������� ������ ���
	LCD_CMD_4_BIT_BUS     = 0x20,                // 4-� ��������� ���� ������
	LCD_CMD_8_BIT_BUS     = 0x30,                // 8-� ��������� ���� ������
	LCD_CMD_LINE_ONE      = 0x20,                // ���� ������
	LCD_CMD_LINES_TWO     = 0x28,                // ��� ������
	LCD_CMD_FONT_5X8      = 0x20,                // ����� 5x8 �����
	LCD_CMD_FONT_5X10     = 0x24,                // ����� 5x10 �����
	LCD_CMD_DISPLAY_CLEAR = 0x01,                // ������� �������
	LCD_CMD_DISPLAY_HOME  = 0x02,                // ��������� ������� ������� ������� � �������
	LCD_CMD_DISPLAY_ON    = 0x0C,                // �������� �������. ����. � CURSOR_ON � CURSOR_BLINK
	LCD_CMD_DISPLAY_RIGHT = 0x1C,                // �������� ������� ������
	LCD_CMD_DISPLAY_LEFT  = 0x18,                // �������� ������� �����
	LCD_CMD_DISPLAY_SHIFT = 0x05,                // ����. � SHIFTDIR_RIGHT � SHIFTDIR_LEFT
	LCD_CMD_CURSOR_ON     = 0x0A,                // �������� ������. ����. � DISPLAY_ON � CURSOR_BLINK
	LCD_CMD_CURSOR_BLINK  = 0x09,                // ����. � DISPLAY_ON � CURSOR_ON
	LCD_CMD_CURSOR_RIGHT  = 0x14,                // �������� ������ ������
	LCD_CMD_CURSOR_LEFT   = 0x10,                // �������� ������ �����
	LCD_CMD_SHIFT_RIGHT   = 0x06,                // ����. � DISPLAY_SHIFT
	LCD_CMD_SHIFT_LEFT    = 0x04,                // ����. � DISPLAY_SHIFT
	LCD_CMD_CGRAM_ADDR    = 0x40,                // ��������� ������ CGRAM
	LCD_CMD_DDRAM_ADDR    = 0x80,                // ��������� ������ DDRAM
	LCD_CMD_BUSY_FLAG     = 0x80,                // ���� ���������
	LCD_CMD_NEXT_LINE     = 0x40,                // ����� ����� ������
	LCD_CMD_COMMAND       = 0x01,
	LCD_CMD_DATA          = 0x00,
} lcd_cmd;


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void LcdInit(void);
void LcdSetPosition(uint8_t row, uint8_t column);
void LcdPrintChar(uint8_t data);
void LcdPrintString(uint8_t * string);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif /* LCD_H */
