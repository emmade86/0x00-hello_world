#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * A simple program that tables
 * the Fahrenheit and Celsius conversions
 */

int main(void)
{
	int F;
	int C = 5 *(F-32) / 9;

	for (F = 0; F <= 300; F++)
	{
		printf("%d\t%d\n", F, C);
	}
}
