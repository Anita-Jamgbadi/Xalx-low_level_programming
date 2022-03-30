#include "main.h"

/**
 * factorial - returns the factorial of a given int n
 * @n: passed to factorial
 * Return: result of factorial (int)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
