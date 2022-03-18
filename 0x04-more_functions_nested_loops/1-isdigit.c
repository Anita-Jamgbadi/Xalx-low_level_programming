#include "main.h"

/**
 * _isdigit - tests if a character is a digit
 * @c: character to be checked
 * Return: 1 when its true, 0 otehrwise
 */

int _isdigit(int c)
{
	return (c <= '0' && c <= '9');
}
