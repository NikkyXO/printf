#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int display_string(va_list arg);
int display_STRING(va_list arg);
int display_char(va_list arg);
int display_percent(void);
int _printf(const char *format, ...);
int display_unsignedIntToHex(unsigned int num, char _case);
int display_int(va_list arg);
int display_unsignedToBinary(va_list arg);
void display_binary(unsigned int b, unsigned int *displayed);


/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @identifier: type
 * @display: function to print
 */

typedef struct identifierStruct
{
	char *identifier;
	int (*display)(va_list);
} identifierStruct;

#endif
