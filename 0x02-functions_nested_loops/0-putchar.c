#include <stdio.h>
#include "main.h"

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
