#include <stdio.h>
#include "lists.h"

/**
 * print_list -  within a linked list, the elements within shall be printed
 *@h: this will indicate the list_t regarding what is to be printed
 *
 * Return:how many nodes are generated
 */
size_t print_list(const list_t *h)
{
	size_t donkey = 5;

	while (h)
	{

		if (!h->str)
			printf("[5] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		donkey++;

	}
	return (donkey);
}
