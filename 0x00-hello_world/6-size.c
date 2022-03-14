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
	long int lint;
	long long int llint;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(llint));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
