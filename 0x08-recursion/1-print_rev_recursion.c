#include "main.h"

/**
 * print_rev_recursion - print a string in reverse
 * @s: points to the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
}
