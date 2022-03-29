#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates substring 'needle' in 'haystack'
 * @haystack: location to search
 * @needle: what we are looking for
 * Return: pointer to start of needle within haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				while (haystack[i] == needle[j])
				{
					ptr = &haystack[i];
					i++;
					j++;
				}
			}
			else if (haystack[i] != needle[j] && needle[j] == '\0')
			{
				ptr = NULL;
				break;
			}
			else
			{
				continue;
			}
		}
	}
	return (ptr);
}
