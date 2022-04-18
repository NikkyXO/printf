
#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * display_char - writes the character c to stdout
 * @arg: argument
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int display_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * display_STRING - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 */

int display_STRING(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');

			display_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
}

return (i);
}


/**
 * display_string - prints a string with a `s` (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */

int display_string(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
