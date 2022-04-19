#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * display_unsignedIntToHex - prints unsigned int to hexadecimal.
 * @number: number to print
 * @_case: letter `a` on the case to print it (upper or lower)
 * Return: number or char printed
 */
int display_unsignedIntToHex(unsigned int number, char _case)
{
	unsigned int num2;
	int i, j, remainder, nbrCharacters = 0;
	char *numhex;

	for (num2 = number; num2 != 0; nbrCharacters++, num2 /= 16)
	;

	numhex = malloc(nbrCharacters);
	for (i = 0; number != 0; i++)
	{
		remainder = number % 16;
		if (remainder < 10)
			numhex[i] = remainder + '0';
		else
			numhex[i] = remainder - 10 + _case;
		number = number / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(numhex[j]);
	free(numhex);
	return (nbrCharacters);
}

/**
 * display_unsignedToBinary - displays an integer
 * @arg: argument
 * Return: 0
 */

/*int display_unsignedToBinary(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);
	unsigned int displayed;

	// *display_binary(b, &displayed);/
	display_binary(b, &displayed);

	return (displayed);
}*/
