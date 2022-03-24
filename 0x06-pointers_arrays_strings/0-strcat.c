#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to origin character
 * @src: points to adjoining character
 * Return: *dest (address of the final string)
 */

char *_strcat(char *dest, char *src)
{
	int len, i, k;

	len = sizeof(dest);

	for (i = 0; i <= sizeof(dest) / sizeof(char); i++)
	{
		k = 0;

		if (dest[i] == '\0')
		{
			*(dest + dest[i] + 1) = src[k];
		}
		else
		{
			break;
		}

		k++;

	}
	return (dest);
}
