#include "lists.h"

/**
 * insert_nodeint_at_index - node creation,
 * at a given position
 * @hint: head node
 * @sat: new node location
 * @n: new data
 *
 * Return: pointer is pass, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **hint, unsigned int sat, int n)
{
	unsigned int i;
	listint_t *old;
	listint_t *temp = *hint;
/* this remains same*/
	old = malloc(sizeof(listint_t));
	if (!old || !hint)
		return (NULL);
/*are we losing it*/
	old->n = n;
	old->next = NULL;
/*no need to revert*/
	if (sat == 0)
	{
		old->next = *hint;
		*hint = old;
		return (old);
	}
/*can we die please*/
	for (i = 0; temp && i < sat; i++)
	{
		if (i == sat - 1)
		{
			old->next = temp->next;
			temp->next = old;
			return (old);
		}
		else
			temp = temp->next;
	}
/*this is too hard*/
	return (NULL);
}
/*screw this shit*/
