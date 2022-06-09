#include "main.h"

/**
 * _issuper - Checks for Uppercase
 * @c: the character to print
 * Return: 1 (if uppercase), 0 (if otherwise)
 */

int _issuper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
