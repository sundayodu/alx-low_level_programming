#include "main.h"

/**
* flip_bits - function that counts the number of bits to be changed
* @n: number to be changed
* @m: number to be changed after n
* Return: Number of bits changed are returned
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
