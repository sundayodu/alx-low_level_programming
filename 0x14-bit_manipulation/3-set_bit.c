#include "main.h"

/**
* set_bit - evry idex to 1 has a bit set to it
* @n: number to be changed pointer for the function
* @index: set to 1 index of the bit being manipulated
* Return: 1 or -1.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
