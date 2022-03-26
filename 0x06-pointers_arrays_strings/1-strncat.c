#include "main.h"

/**
 * _strncat - concatenates string a to string b
 * using only a mximum of n bytes from string b
 * @dest: origin string
 * @src: appendage string
 * @n: number of bytes to be added from src
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}

	for (i = 0; dest[i] != '\0' && i < n; i++, k++)
	{
		dest[k] = src[i];
	}

	dest[k] = '\0';

	return (dest);
}
