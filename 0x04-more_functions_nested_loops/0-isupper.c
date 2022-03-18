#include "main.h"

/**
 * main - contains the isupper() function
 * to check if a letter islower or upper case
 * _isupper - Actually checkes for the condition 
 * stated in main
 * @c: character to be checked
 * Return: 0 when its true, 1 when its not
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
