#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: points to the prefix substring to be checked
 * @accept: points to the comparing string
 * Return: number of bytes in s that consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, bytes;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			bytes++;
		}
		else
		{
			continue;
		}
	}
	return (bytes);
}
