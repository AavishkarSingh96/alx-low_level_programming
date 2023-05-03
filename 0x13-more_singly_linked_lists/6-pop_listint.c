#include "lists.h"

/**
 * pop_listint - linked list head node deleted
 * @nintendo: linked list first element pointer
 *c language is hard
 * Return: deleted info from removed element
 * or 0 if empty list
 */
int pop_listint(listint_t **nintendo)
{
	listint_t *oled;
	int carp;
/*the world should end*/
	if (!nintendo || !*nintendo)
		return (0);
/*it is not fair*/
	carp = (*nintendo)->n;
	oled = (*nintendo)->next;
	free(*nintendo);
	*nintendo = oled;
/*can't use switch*/
	return (carp);
}
/* stich is stitch*/
