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
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else if (s[i] != c && s[i] == s[len])
		{
			ptr = NULL;
			break;
		}
		else
		{
			continue;
		}
	}
	return (ptr);
}

