#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @str: holds the string to be rversed
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int k;
	int u;

	for (i = 0; s[i] != '\0'; i++)
	{
		u = i;
	}

	k = u;

	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
	_putchar('\n');
}

