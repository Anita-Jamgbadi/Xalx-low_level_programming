#include "main.h"
#include <string.h>

/**
 * _strlen - returns the lenth of a string
 * @s: string to be scrutinized
 * Return: 0
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
