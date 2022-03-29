#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches s for any set of bytes from accept
 * @s: points to string to be searched
 * @accept: points to the string to be searched for
 * Return: points to be bytein s that matches one of the bytes
 * in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *res;

	j = 0;
	i = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				res = &accept[j];
				break;
			}
			else if (accept[j] == '\0')
			{
				res = NULL;
				break;
			}
			else
			{
				continue;
			}
			j++;
		}
		i++;
	}
	return (res);
}
