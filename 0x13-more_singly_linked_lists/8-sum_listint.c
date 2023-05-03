#include "lists.h"

/**
 * sum_listint - sum of total list data
 * @light: node head
 *insane
 * Return: resulting sum
 */
int sum_listint(listint_t *light)
{
	int life = 0;
	listint_t *bottle = light;
/*have to listen to music*/
	while (bottle)
	{
		life += bottle->n;
		bottle = bottle->next;
	}
/* we never get older*/
	return (life);
}
/*sadness leaves you broken*/
