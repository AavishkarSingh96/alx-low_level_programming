#include "lists.h"

/**
 * listint_len - within linked list, element quantity received
 * @h: linked list of type listint_t to traverse
 *this is c language
 * Return: quantity of nodes
 */
size_t listint_len(const listint_t *h)
{
	/*vairable name has changed*/
	size_t hidan = 0;
/*this is consistent*/
	while (h)
	{
		hidan++;
		/*can line happen here*/
		h = h->next;
	}
/*these comments don't loop*/
	return (hidan);
	/*does the loop accep this*/
}
