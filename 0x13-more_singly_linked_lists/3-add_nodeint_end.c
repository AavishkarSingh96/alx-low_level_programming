#include "lists.h"

/**
 * add_nodeint_end - tail node added
 * @head:head element pointer
 * @n: data for creation
 *this is c language
 * Return: is pointer to node, NULL is fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *kinkaku;
	listint_t *brother = *head;
/*multiple variables present*/
	kinkaku = malloc(sizeof(listint_t));
	if (!kinkaku)
		return (NULL);
/*ghost of you playing*/
	kinkaku->n = n;
	kinkaku->next = NULL;
/*referecne star wars to understand*/
	if (*head == NULL)
	{
		*head = kinkaku;
		return (kinkaku);
	}
/*almost like yoda speak*/
	while (brother->next)
		brother = brother->next;
/*variables in reverse*/
	brother->next = kinkaku;
/*to keep track*/
	return (kinkaku);
}
/*this is hectic*/
