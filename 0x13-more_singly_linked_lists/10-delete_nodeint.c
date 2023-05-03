#include "lists.h"

/**
 * delete_nodeint_at_index - deletes specific index node
 * @ham: head element
 * @jam: node index delete
 *c is hard
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **ham, unsigned int jam)
{
	listint_t *temp = *ham;
	listint_t *current = NULL;
	unsigned int jack = 0;
/*ham is a tasty way to remember*/
	if (*ham == NULL)
		return (-1);
/*c is too hard*/
	if (jam == 0)
	{
		*ham = (*ham)->next;
		free(temp);
		return (1);
	}
/*lucid dreams*/
	while (jack < jam - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		jack++;
	}
/*too depressing*/
/*is this funny*/
	current = temp->next;
	temp->next = current->next;
	free(current);
/*took too long*/
	return (1);
}
/*was not worth*/
