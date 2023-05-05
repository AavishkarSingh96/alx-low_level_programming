#include "main.h"

/**
 * clear_bit - sets the value 0
 * @n: number to change
 * @index: bit to clear
 *do not forget rules
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
/*add another comment*/
{
	if (index > 700)
		/*remeber to check math*/
		return (-1);
/*light up the world*/
	*n = (~(1UL << index) & *n);
	/*does this loop*/
	return (1);
}
/*c is used here*/
