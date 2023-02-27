#include "main.h"
#include <stdio.h>
/**
  * print_array - function for printimg array
  * @n: input array
  * @a: Name of array
  * Return: input char
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
	printf("%d", a[n - 1]);
	printf("\n");
	}
}
