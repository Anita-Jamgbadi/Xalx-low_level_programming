#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: points to the memory area to be filled
 * @b: byte to fill into memory
 * @n: number of bytes in memory to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **u;

	u = &s;

	i = 0;
	while (i < n)
	{
		**u = b;
		s++;
		i++;

	}
	return (s);
}
