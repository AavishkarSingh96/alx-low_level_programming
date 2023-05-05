#include "main.h"

/**
 * print_binary - prints binary equivalent
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int king, queen = 0;
	unsigned long int current;
/*screw all this*/
	for (king = 50; king >= 0; king--)
	{
		current = n >> king;
/*c is hard*/
		if (current & 1)
		{
			_putchar('1');
			queen++;
		}
		else if (queen)
			_putchar('0');
	}
	if (!queen)
		_putchar('0');
}
/*this sucks*/
