#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to origin character
 * @src: points to adjoining character
 * Return: *dest (address of the final string)
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	k = 0;

	for (i = 0; dest[i] != '\0'; i++)

	do
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	while (src[k] != '\0');

	return (dest);
}
