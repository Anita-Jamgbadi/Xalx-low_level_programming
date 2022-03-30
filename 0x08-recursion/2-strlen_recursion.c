#include "main.h"

/**
 * _strlen_recursion - gets length of string using recursion
 * @s: points to string in question
 * Return: res i.e length of s
 */

int _strlen_recursion(char *s)
{
	int res;
	char *tmp;

	res = 0;

	if (*s != '\0')
	{
		res++;
		tmp = s++;
		_strlen_recursion(tmp);
	}
	return (res);
}
