#include "main.h"

/**
* clear_bit - sets bit numbers allocated to 0
* @n: number to be changed pointer address
* @index: cleared bit index number
* Return: If succeful 1, if not -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
