#include "main.h"
#include <stdio.h>

/**
 * print_array - print n of the length of a
 * @a: array pointer
 * @n: number of values to print
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%d", a[k]);
		else
			printf(", %d", a[k]);
	}

	printf("\n");
}
