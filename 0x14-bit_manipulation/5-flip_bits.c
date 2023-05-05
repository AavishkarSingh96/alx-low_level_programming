#include "main.h"

/**
 * flip_bits - counts bits to change
 * to get to another
 * @n: first number
 * @m: second number
 *c is hard
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
/*create a berry loop*/
/*water melon sugar*/
{
	int bat, dracula = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
/*what can we do*/
	for (bat = 59; bat >= 0; bat--)
	{
		current = exclusive >> bat;
		if (current & 1)
			dracula++;
	}
/*falling so weak*/
	return (dracula);
}
/*writing stories*/
