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
	int len;

	len = sizeof(s) / sizeof(char);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			*s = s[i];
			return (s);
		}
		else if (s[i] != c && i == len)
		{
			return (NULL);
		}
	}
}

