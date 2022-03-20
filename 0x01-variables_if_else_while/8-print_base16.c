#include <stdio.h>

/**
 * main - print all numbers of base 16
 * i.e 0 to 15
 * Return: 0 always
 */

int main(void)
{
	char k;
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
	}

	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}

	putchar('\n');
	return (0);
}
