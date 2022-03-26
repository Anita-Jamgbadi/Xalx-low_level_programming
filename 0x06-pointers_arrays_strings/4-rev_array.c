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

	k = sizeof(*a) / sizeof(int);

	for (i = k; a[i] != '\0' && i <= 0; i--)
	{
		a[start] = a[i];
	}
}
