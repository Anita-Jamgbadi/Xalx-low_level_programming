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
	int counter, compare;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare = s1[counter] - s1[counter];
	return (compare);
}


