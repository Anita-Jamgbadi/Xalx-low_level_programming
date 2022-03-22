#include "main.h"

/**
 * _puts - prints strint to stdoutput
 * @str:  string to be printed
 * Return: 0;
 */

void _puts(char *str)
{
	char new;

	new = *str;
	_putchar(new);
}
