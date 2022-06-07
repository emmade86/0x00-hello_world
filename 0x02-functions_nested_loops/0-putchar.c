#include "main.h"
#include <unistd.h>

/**
 * main - Print
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
