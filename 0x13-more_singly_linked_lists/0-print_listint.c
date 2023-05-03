#include "lists.h"

/**
 * print_listint -within linked list element all created
 * @h: listint_t linked list type indicator
 *this speaks about linked lists
 * Return: node quantity
 */
size_t print_listint(const listint_t *h)
{
	size_t deidara = 0;
/*this is C bash */
	while (h)
	{
		printf("%d\n", h->n);
		deidara++;
		/*is it okay to comment here*/
		h = h->next;
	}
/*variable name is Deidara*/
	return (deidara);
}
