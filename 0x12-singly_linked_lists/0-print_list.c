#include <stdio.h>
#include "lists.h"

/**
 * print_list - generates linked list elements
 * @h: serves as pointer to generate for list_t
 *C language is used here
 * Return:states quantity of nodes
 */
size_t print_list(const list_t *h)
{
	size_t donkey = 0;
/*C language is used here*/
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		donkey++;
	}
/*The prototype is referenced here */
	return (donkey);
}
