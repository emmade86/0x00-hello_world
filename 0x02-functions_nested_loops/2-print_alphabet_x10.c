#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
=======
 *  * print_alphabet_x10 - prints alphabet 10 times
 *   * Return:void
 *    */

void print_alphabet_x10(void)
{
		char c;
			int i = 0;

				while (i < 10)
						{
									c = 'a';
											while (c <= 'z')
														{
																		_putchar(c);
																					c++;
																							}
													_putchar('\n');
															i++;
																}
>>>>>>> 2d58a05a555018b9e5f5bec44b765fbb47e897b7
}
