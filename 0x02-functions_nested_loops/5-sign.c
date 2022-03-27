#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 0, 1, -1 (value of sign)
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		printf("+\n");
	}
	else if (n == 0)
	{
		i = 0;
		printf("0\n");
	}
	else if (n < 0)
	{
		i = -1;
		printf("-\n");
	}
	return (i);
}
