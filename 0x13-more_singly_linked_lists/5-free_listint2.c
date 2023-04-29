#include "lists.h"
/**
 * free_listint2 -   frees listint_t
 * @head: pointer to listint_t structure
 * @n: Element to add to NodeList
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
listint_t *h;
if (head == NULL || *head == NULL)
return;
while (head != NULL)
{
h = *head;
*head = (*(head))->next;
free(h);
}
*head = NULL;
}
