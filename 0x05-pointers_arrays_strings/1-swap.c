#include "main.h"

/**
 * swap_int - exchanges the value of two
 * int parameters passed on call
 * @a: points at the value of a variable
 * @b: points at the value of a variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
