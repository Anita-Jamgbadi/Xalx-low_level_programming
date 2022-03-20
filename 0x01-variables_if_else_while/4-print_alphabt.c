#include <stdio.h>

/**
 * main - print the lowercase alphabet
 * except letters q and e
 * Return: 0 always
 */

int main(void)
{
	char ja;

	for (ja = 'a'; ja <= 'z'; ja++)
	{
		if (ja == 'e' || ja == 'q')
		{
			continue;
		}
		else
		{
			putchar(ja);
		}
	}
	putchar('\n');
	return (0);
}
