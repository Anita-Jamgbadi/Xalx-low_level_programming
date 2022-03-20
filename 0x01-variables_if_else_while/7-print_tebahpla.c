#include <stdio.h>

/**
 * main - print alphabet backwards
 * Return: 0 always
 */

int main(void)
{
	char io;

	for (io = 'z'; io >= 'a'; io--)
	{
		putchar(io);
	}
	putchar('\n');
	return (0);
}
