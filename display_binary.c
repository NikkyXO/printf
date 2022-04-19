#include "main.h"

/**
 * display_binary - function that display the binary representation of a number
 * @b: number to be printed in binary
 * @displayed: hold the number of characters printed
 */

void display_binary(unsigned int b, unsigned int *displayed)
{
	if (b > 1)
	{
		*displayed += 1;
		display_binary(b >> 1, displayed);
	}
	_putchar((b & 1) + '0');
}
