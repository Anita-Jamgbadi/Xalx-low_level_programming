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
	int s;

	for (i = 0; str[i] != '\0'; i++)
	{
		s = i;
	}
	
	while (s > 0)
	{
		_putchar(str[s]);
		s--;
	}
	_putchar('\n');
}

