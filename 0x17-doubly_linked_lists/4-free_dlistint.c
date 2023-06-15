#include "lists.h"
/**
* free_dlistint - frees
* @head: head of list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *prev;

prev = head;
while (prev != NULL)
{
free(prev);
prev = prev->next;
}
}
