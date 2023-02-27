#include "main.h"
/**
 * swap_int - integers swapped
 * @a: swapped integers
 * @b: swapped intergers
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

