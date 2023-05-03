#include "lists.h"

/**
 * free_listint - linked list freed
 * @shit: listint_t list freed
 * c is hard
 */
void free_listint(listint_t *shit)
{
	listint_t *damn;
/*this is hectic*/
	while (shit)
	{
		damn = shit->next;
		free(shit);
		/*my patience is roadkill*/
		shit = damn;
	}
}
/*i can make you feel*/
