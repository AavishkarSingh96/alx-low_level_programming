#include "lists.h"

/**
 * insert_nodeint_at_index - new node
 * @sin: first node
 * @pin: node addition location
 * @n: new node data
 *c is hard
 * Return: new node, or NULL fail
 */
listint_t *insert_nodeint_at_index(listint_t **sin, unsigned int pin, int n)
{
	unsigned int n;
	listint_t *old;
	listint_t *temp = *sin;
/*one to go*/
	old = malloc(sizeof(listint_t));
	if (!old || !sin)
		return (NULL);
/*too long*/
	old->n = n;
	old->next = NULL;

	if (pin == 0)
	{
		old->next = *sin;
		*sin = old;
		return (old);
	}
/*star wars*/
	for (n = 0; temp && n < pin; n++)
	{
		if (n == pin - 1)
		{
			old->next = temp->next;
			temp->next = old;
			return (old);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
/* F this shit*/
