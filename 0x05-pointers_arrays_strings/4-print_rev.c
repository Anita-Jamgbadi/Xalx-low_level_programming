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

	s = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		s = i;
	}

	for (k = i; str[k] != 0; k--)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
