#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @a: Function parameter
  *
  * @size: Function paraameter
  *
  * Return: Always 0.
  */
void print_diagsums(int *a, int size)
{
	int k, j, sum1 = 0, sum2 = 0;

	for (k = 0; k <= (size * size) - size; j = j + size - 1)
	sum1 = sum1 + a[k];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	sum2 = sum2 + a[j];
	printf("%d, %d\n", sum1, sum2);
}
