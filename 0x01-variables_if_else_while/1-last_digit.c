#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %c and is greater than 5", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %c and is 0", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %c and is less than 6 and not 0", n, m);
	}
	else
	{
		printf("IDK");
	}
	return (0);
}	
