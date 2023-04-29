#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - At the start of linked list a node is created new
 * @head:linked list indicated by the double pointer
 * @str:node receives new string
 * this is c language
 * Return:success get address and no success gets null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
/*use the assigned variables*/
	while (str[len])
		len++;
/*pointers must also be used*/
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
/*could not locate other variable names*/
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
/*had to use len*/
	return (*head);
}

