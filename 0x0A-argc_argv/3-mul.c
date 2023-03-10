#include <stdio.h>
#include "main.h"

/**
  * main - main function
  *
  * @argc: Function parqmeter
  *
  * @argv: Function parameter
  *
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int a1 = 0;
	int a2 = 0;

	if (argc == 3)
	{
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	printf("%d\n", a1 * a2);
	}
	else
	{
		printf("error\n");
		return (1);
	}
		return (0);
}

