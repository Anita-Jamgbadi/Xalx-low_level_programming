#include <stdio.h>

/**
 * main - print 0 to 9 using putchar
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
