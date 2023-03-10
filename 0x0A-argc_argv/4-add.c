#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * main - prints the sum
  *
  * @argc: Argument parameter
  *
  * @argv: Argument parameter
  *
  * Return: Always 9.
  */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	e = argv[i];
	for (k = 0; k < strlen(e); k++)
	{
	if (e[k] < 48 || e[k] > 57)
	{
	printf("Error\n");
	}
	}
	sum += atoi(e);
	e++;
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
