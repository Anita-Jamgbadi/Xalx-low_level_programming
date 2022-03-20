#include <stdio.h>

/**
 * main - print 0 to 9 in ascending order
 * each digit should be separated with a comma and a space
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
