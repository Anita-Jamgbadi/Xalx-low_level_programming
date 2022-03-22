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

	for (i = 0; str[i] != '\0'; i++)
	{
		char ch[] = "str[i]";

		for (k = sizeof(ch); ch[k] != 0; k--)
		{
			_putchar(ch[k]);
		}
	}
	_putchar('\n');
}
