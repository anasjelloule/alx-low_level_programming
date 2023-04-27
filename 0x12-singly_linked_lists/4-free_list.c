#include "lists.h"
/**
 * free_list -   frees a list_t list
 * @head: pointer to list_t structure
 * Return: Return void
 */
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *h = head->next;
free(head->str);
free(head);
head = h;
}
}
