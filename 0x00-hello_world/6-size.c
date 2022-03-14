#include <stdio.h>

/**
 * main - entry point fxn
 *
 * Return: 0
 */

int main(void)
{
	int inttype;
	char chartype;
	float floattype;
	int lint;
	int llint;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(llint));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
