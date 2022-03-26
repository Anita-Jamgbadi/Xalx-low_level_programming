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

	for (i = 0; dest[i] != '\0'; i++)
	;

	do {
		dest[i] = src[k];
		k++;
		i++;
	} while (src[k] != '\0' && k <= n);

	return (dest);
}
