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
	int res;

	if (y < 0)
	{
		res = -1;
	}
	if (y == 0)
	{
		res = 1;
	}
	if (y > 0)
	{
		k = y - 1;
		res = x * _pow_recursion(x, k);
	}
	return (res);
}
