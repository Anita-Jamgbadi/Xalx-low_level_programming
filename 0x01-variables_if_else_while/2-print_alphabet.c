#include <stdio.h>

/**
 * main - contains a function that prints the entire
 * alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	char io;

	for (io = 'a'; io <= 'z'; io++)
	{
		putchar(io);
	}
	putchar('\n');
	return (0);
}
