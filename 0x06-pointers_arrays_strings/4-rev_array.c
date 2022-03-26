#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: no of elements in a
 * Return: 0;
 */

void reverse_array(int *a, int n)
{
	int i, start;

	start = 0;
	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		a[start] = a[n];
		n--;
	}
}
