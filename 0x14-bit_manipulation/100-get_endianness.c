#include "main.h"

/**
* get_endianness - checks for the machine specifications
* Return: If big it returns 0 if small it retruns 1
*/

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
