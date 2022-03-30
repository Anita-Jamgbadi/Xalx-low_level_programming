#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * getEnd - gets to the end of a string
 * @s: points to the string to be printed
 * Return: void
 */


char getEnd(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	return (*s);
}

void _print_rev_recursion(char *s)
{
	char *res;
	char **tmp;

	tmp = &s;

	getEnd(s);

	if (**tmp == *s)
	{
		_putchar(*s);
	}

	if (*s == '\0')
	{
		res = s--;
		_putchar(*s);
		_print_rev_recursion(res);
	}

}
