#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to origin character
 * @src: points to adjoining character
 * Return: *dest (address of the final string)
 */

char *_strcat(char *dest, char *src)
{
	int len, i, k, len2, total;

	len = sizeof(*dest) / sizeof(char);
	len2 = sizeof(*src) / sizeof(char);
	total = len + len2;
	k = 0;

	for (i = len; i <= total; i++)
	{

		if (i > len && dest[i] != '\0')
		{
			dest[i] = src[k];
			i++;
			k++;
		}
		else
		{
			break;
		}

	}
	return (dest);
}
