#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printIdentifers - prints special characters
 * @nextchar: the character after %
 * @arg: argument for the indentifier
 * Return: the number of characters to be displayed
 * (execluding the null byte used to end output to strings)
 */

int printIdentifers(char nextchar, va_list arg)
{
	int index;

	identifierStruct functions[] = {
		{"c", display_char},
		{"s", display_string},
		{"S", display_STRING},
		{NULL, NULL}
	};

	for (index = 0; functions[index].identifier != NULL; index++)
	{
		if (functions[index].identifier[0] == nextchar)
			return (functions[index].display(arg));
	}
	return (0);
}

/**
 * _printf -  Acts like the standard printf funcion
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list arg;
	int displayedIdentifier = 0, displayedChar = 0;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			displayedChar++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			displayedChar++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		displayedIdentifier = printIdentifers(format[i + 1], arg);
		if (displayedIdentifier == -1 || displayedIdentifier != 0)
			i++;
		if (displayedIdentifier > 0)
			displayedChar += displayedIdentifier;

		if (displayedIdentifier == 0)
		{
			_putchar('%');
			displayedIdentifier++;
		}
	}
	va_end(arg);
	return (displayedChar);
}
