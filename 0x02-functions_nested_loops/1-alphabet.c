#include "main.h"

/**
 * prints the main alphabet of the code
 * Return: void in this code
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
