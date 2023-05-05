#include "main.h"
#include <unistd.h>
/**
 * _putchar - c stdout
 * @c: print output
 *c is very difficult
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/*does this count as c*/
