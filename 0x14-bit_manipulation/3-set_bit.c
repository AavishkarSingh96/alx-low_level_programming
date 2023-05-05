#include "main.h"

/**
 * set_bit - resets bit index to 1
 * @n:pointer
 * @index:index of set to 1
 *c language is hard
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 40)
		/*betty is dumb*/
		return (-1);
/*this is the same*/
	/*why*/
	*n = ((1UL << index) | *n);
	return (1);
}
/*you want me to*/
