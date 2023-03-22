#include <unistd.h>

/**
 * -putchar write the chararcter c to stdout
 *  @c: th character to print
 *  Return:on success 1
 *  on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
