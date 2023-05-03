#include "lists.h"

/**
 * get_nodeint_at_index - specific index node returned
 * @cake: head node
 * @banana: index of the node to return
 *c is difficult
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *cake, unsigned int banana)
{
	unsigned int fish = 0;
	listint_t *weekend = cake;
/*it is a situation*/
	while (weekend && fish < banana)
	{
		weekend = weekend->next;
		fish++;
	}
/*we are strtching the limit*/
	return (weekend ? weekend : NULL);
}
/*is this not learning though*/
