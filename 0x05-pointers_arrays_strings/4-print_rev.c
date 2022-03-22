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

	for (i = sizeof(str); str[i] == '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
