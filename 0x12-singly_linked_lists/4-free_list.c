#include <stdlib.h>
#include "lists.h"

/**
 * free_list - ensures that that the linked list is free
 * @head: list_t list indicates the freed list
 */
void free_list(list_t *head)
{
	list_t *temp;
/*could not locate other variable names*/
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
