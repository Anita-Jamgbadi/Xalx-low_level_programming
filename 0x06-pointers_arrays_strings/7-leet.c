#include "main.h"

/**
 * leet - encodes a string into 1337
 * letters a and A = 4
 * letters e and E = 3
 * letters o and O = 0
 * letters t and T = 7
 * letters l and L = 1
 * @s: points to string
 * Return: pointer to s;
 */

char *leet(char *s)
{
	int stringC, leetC;
	char leetLets[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";

	stringC = 0;

	while (s[stringC] != '\0')
	{
		leetC = 0;

		while (leetC < 10)
		{
			if (leetLets[leetC] == s[stringC])
			{
				s[stringC] = leetNum[leetC];
			}
			leetC++;
		}
		stringC++;
	}
	return (s);
}

