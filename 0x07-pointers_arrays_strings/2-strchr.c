#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a particular char in a string
 * @s: pointer to memory location that holds string
 * @c: character to be located
 * Return: pointer to c or null
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
		}
		else if (s[i] != c && s[i] == '\0')
		{
			ptr = NULL;
		}
	}
	return (ptr);
}
