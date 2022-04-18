#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int display_string(va_list arg);
int display_STRING(va_list arg);
int display_char(va_list arg);
int display_percent(va_list arg);
int _printf(const char *format, ...);
int display_unsignedIntToHex(unsigned int num, char _case);


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
