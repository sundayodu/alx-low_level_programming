#include "main.h"

/**
* print_binary - decimal points numbers printed
* @n: binary numbers to be printed equivalent to base ten
*
*/

void print_binary(unsigned long int n)
{
	int a, value = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
