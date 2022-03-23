#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: holds the string to be rversed
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int k;
	int u;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	u = i;

	for (k = u - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
