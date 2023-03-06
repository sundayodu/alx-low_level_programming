#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (; k < j; k++)
	{
	dest[k] = src[j];
	n--;
	}
	return (dest);
}
