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
	listint_t *new;
	listint_t *temp = *hint;

	new = malloc(sizeof(listint_t));
	if (!new || !hint)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (sat == 0)
	{
		new->next = *hint;
		*hint = new;
		return (new);
	}

	for (i = 0; temp && i < sat; i++)
	{
		if (i == sat - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
/*screw this shit*/
