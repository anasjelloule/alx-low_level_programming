#include "lists.h"
/**
 * free_listint2 -   frees listint_t
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
return;
while (*head)
{
listint_t *h;
h = (*head)->next;
free(*head);
*head = h;
}
*head = NULL;
}
