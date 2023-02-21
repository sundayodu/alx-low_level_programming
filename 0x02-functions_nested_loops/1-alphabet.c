#include "main.h"

/**
 * print_alphabet - the main alphabet of the for _putchar
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
