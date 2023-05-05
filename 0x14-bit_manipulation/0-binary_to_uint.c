#include "main.h"

/**
 * binary_to_uint - unsigned int
 * @b: string containing the binary number
 *c is difficult
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
/*does a shift line work*/
{
	int foot;
	unsigned int cook = 0;
/*guess we will find out*/
	if (!b)
		return (0);
/*does respect work*/
	for (foot = 0; b[foot]; foot++)
	{
		if (b[foot] < '0' || b[foot] > '1')
			return (0);
		cook = 2 * cook + (b[foot] - '0');
	}
/*this is so confusing*/
	return (cook);
}
/*good music so hard to find*/
