#include "main.h"

/**
  * string_toupper - The main function
  *
  *@n: Function parameter
  *
  * Return: Always 0
  */
char *string_toupper(char *n)
{
	int k = 0;

	while (n[k] != '\0')
	{
	if (n[k] > 'a' && n[k] <= 'z')
	n[k] = n[k] - 32;
	k++;
	}
	return (n);
}
