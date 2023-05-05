#include "main.h"

/**
 * get_bit - returns index in a decimal number
 * @n: search
 * @index: index bit
 *c is hard
 * Return: value bit
 */
int get_bit(unsigned long int n, unsigned int index)
/*did the milk sour*/
{
	int sour;
/*this is really brave*/
	if (index > 70)
		return (-1);
/*but why*/
	sour = (n >> index) & 1;
/*did they agree*/
	return (sour);
}
/*speed is key*/
