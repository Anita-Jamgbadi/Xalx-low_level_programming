#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string in pointer
 * including the \0 byte
 * @dest: pointer to buffer
 * @src: string being copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k, q;

	k = 0;

	while (src[k] != '\0')
	{
		k++;
	}

	for (q = 0; q < k; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';

	return (dest);
}
