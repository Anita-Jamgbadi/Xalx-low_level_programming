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

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			k = i;
			putchar(k % 10 + '0');
		}
		else
		{
			k = i;
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
