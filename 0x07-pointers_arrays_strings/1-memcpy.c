#include "main.h"

/**
 * _memcpy - copies content of src to dest n times
 * @src: source to copy from
 * @dest: destination to copy to
 * @n: number of times to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
