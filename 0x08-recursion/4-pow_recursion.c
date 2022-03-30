#include "main.h"

/**
 * _pow_recursion - multiplies x by itself y number of times
 * @x: number
 * @y: index
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int k;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		k = y - 1;
		return (x * _pow_recursion(x, k));
	}
}
