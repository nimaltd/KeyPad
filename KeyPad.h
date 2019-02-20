#ifndef	_KEYPAD_H
#define	_KEYPAD_H

#include <stdint.h>
#include <stdbool.h>



typedef struct
{
	uint8_t		ColumnSize;
	uint8_t		RowSize;
	uint16_t	LastKey;	
	
}KeyPad_t;

void			KeyPad_Init(void);
uint16_t	KeyPad_WaitForKey(uint32_t	Timeout_ms);
char			KeyPad_WaitForKeyGetChar(uint32_t	Timeout_ms);

#endif
