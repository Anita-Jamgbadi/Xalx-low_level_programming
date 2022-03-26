#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string for comparison
 * @s2: string for comparison
 * Return: <0 if s1 is shorter,
 * = 0 if s1 is equal,
 * >1 if s1 is loner than
 * s2
 */

int _strcmp(char *s1, char *s2)
{
	int lens1, lens2;

	lens1 = sizeof(*s1) / sizeof(char);
	lens2 = sizeof(*s2) / sizeof(char);

	if (lens1 < lens2)
	{
		return (lens1 < lens2);
	}
	else if (lens1 == lens2)
	{
		return (lens1 == lens2);
	}
	else
	{
		return (lens1 > lens2);
	}

}


