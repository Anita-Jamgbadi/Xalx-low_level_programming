#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: no of elements in a
 * Return: 0;
 */

void reverse_array(int *a, int n)
{
	int i, k, start;

	start = 0;
	n = n - 1;
	k = sizeof(*a) / sizeof(int);

	for (i = k; a[i] != '\0' && i <= n; i--)
	{
		a[start] = a[i];
	}
}
