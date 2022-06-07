/**
 * header that should add _putchar to library functions
 */
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
