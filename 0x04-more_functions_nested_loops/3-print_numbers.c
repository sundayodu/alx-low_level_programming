`include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
