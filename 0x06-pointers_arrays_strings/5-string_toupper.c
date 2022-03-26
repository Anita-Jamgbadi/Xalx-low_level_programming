#include "main.h"

/**
 * string_toupper - converst lowercase strings to uppercase
 * @x: pointer to string to be converted
 * Return: *x
 */

char *string_toupper(char *x)
{
	int length;

	length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
