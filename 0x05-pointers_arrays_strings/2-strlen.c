#include "main.h"
/**
 * _strlen - the function parameter
 * @s: the string of the code
 * Return: Length of the character
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}

