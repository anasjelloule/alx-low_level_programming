#include "lists.h"
/**
 * free_listint2 -   frees listint_t
 * @head: pointer to listint_t structure
 * @n: Element to add to NodeList
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
if (head == NULL)
return;
while (head != NULL)
{
listint_t *h;
h = *head;
free(*head);
*head = h->next;
}
*head = NULL;
}
