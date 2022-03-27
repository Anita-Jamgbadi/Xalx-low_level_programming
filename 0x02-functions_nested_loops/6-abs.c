#include "main.h"

/**
 * _abs - calculates the absolute value of int
 * @a: integer to be examined
 * Return: 0, always
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a / -1;
		_putchar(a);
	}
	else
	{
		a = a;
		_putchar(a);
	}
	return (0);
}
