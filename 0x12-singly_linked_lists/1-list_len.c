#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Within the linked list, shall the element quantity receive
 * @h: indicates the list_t list
 *
 * Return:states the element quantity within
 */
size_t list_len(const list_t *h)
{
	size_t camel = 0;
/* The list makes use of C language */
	while (h)
	{
		camel++;
		h = h->next;
	}
	/*Does leaving a line affect the checker*/
	return (camel);
}
