#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @str: holds the string to be rversed
 * Return: 0
 */

void print_rev(char *str)
{
	int i;
	int k;
	int s;

	for (i = 0; str[i] != '\0'; i++)
	{
		s = i;
	}

	for (k = s; k >= 0; k--)
	{
		if (k > 0)
		{
			_putchar(str[k]);
		}
		else
		{
			_putchar(str[k]);
		}
	}

	_putchar('\n');
}

