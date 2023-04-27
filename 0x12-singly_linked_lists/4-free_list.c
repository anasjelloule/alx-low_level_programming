#include "lists.h"
/**
 * free_list -   frees a list_t list
 * @head: pointer to list_t structure
 * Return: Return void
 */
void free_list(list_t *head)
{
list_t *h;
h = head;
while (h->next != NULL)
{
h = head->next;
free(head->str);
free(head);
head = h;
}
}
