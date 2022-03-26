#include "main.h"

/**
 * cap_string - converts lower to upper case
 * @c: points to string for conversion
 * Return: 0
 */

char *cap_string(char *c)
{
	int x;

	x = 0;
	while (c[x] != '\0')
	{
		if (c[0] >= 97 && c[0] <= 122)
		{
			c[0] = c[0] - 32;
		}

		if (c[x] == ' ' || c[x] == '\t' || c[x] == '\n'
				|| c[x] == ',' || c[x] == '.' || c[x] == '!'
				|| c[x] == '?' || c[x] == '"' || c[x] == '('
				|| c[x] == ')' || c[x] == '{' || c[x] == '}'
				|| c[x] == ';')
		{
			if (c[x + 1] >= 97 && c[x + 1] <= 122)
			{
				c[x + 1] = c[x + 1] - 32;
			}
		}
	}
	x++;
	return (c);
}
