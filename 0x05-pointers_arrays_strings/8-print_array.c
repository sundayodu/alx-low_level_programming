#include "main.h"

/**
  * print_array - function for printimg array
  * @n: input array
  * @a: Name of array
  * Return: input char
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != n - 1)
	printf(", ");
	}
	printf("\n");
}
