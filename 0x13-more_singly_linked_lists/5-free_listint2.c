#include "lists.h"

/**
 * free_listint2 - linked list availed
 * @naruto: listint_t list pointer freed
 * ground beneath my feet
 */
void free_listint2(listint_t **naruto)
{
	listint_t *sasuke;
/*robon schulz*/
	if (naruto == NULL)
		return;
/*z look cool*/
	while (*naruto)
	{
		sasuke = (*naruto)->next;
		free(*naruto);
		*naruto = sasuke;
	}
/*the movie*/
	*naruto = NULL;
}
/*no more tears to cry*/
