#include <stdio.h>

/**
 * main - prints the entire alphabet, first
 * in lowercase, then in uppercase
 * Return: 0 always
 */

int main(void)
{
	char io;

	for (io = 'a'; io <= 'z'; io++)
	{
		putchar(io);
	}
	for (io = 'A'; io <= 'Z'; io++)
	{
		putchar(io);
	}
	putchar('\n');
	return (0);
}
