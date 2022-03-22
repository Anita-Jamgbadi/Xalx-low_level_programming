#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints strint to stdoutput
 * @str:  string to be printed
 * Return: 0;
 */

void _puts(char *str)
{
	char new;

	for (new = 0; str[new] != '\0'; new++)
	{
		_putchar(str[new]);
	}
	_putchar('\n');
}
