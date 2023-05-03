#include "lists.h"

/**
 * add_nodeint - linked list at the start receive node
 * @head: node at start indicated
 * @n: new node info
 *c core lang
 * Return: fail equal null but pass indicate node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *kisame;
/*release me*/
	kisame = malloc(sizeof(listint_t));
	if (!kisame)
		return (NULL);
/*agnes can be a vaiable*/
	kisame->n = n;
	kisame->next = *head;
	*head = kisame;

	return (kisame);
}
/*life behind the ball*/
