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

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(strrev(str[i]));
	}
	_putchar('\n');
}
