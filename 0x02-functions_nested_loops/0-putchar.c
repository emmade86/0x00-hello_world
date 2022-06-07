#include <stdio.h>
#include "main.h"

/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char c[8] = "_putchar";

	while (i <= 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
