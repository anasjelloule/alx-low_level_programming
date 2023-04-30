#include "lists.h"
/**
 * insert_nodeint_at_index -  insert node at index in listint_t linked list
 * @head: pointer to listint_t structure
 * @idx: index of node to insert
 * @n: Value of node to insert
 * Return: the number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *anas, *h;
unsigned int c = 0;
anas = malloc(sizeof(listint_t));
if (anas == NULL)
return (NULL);
anas->n = n;
anas->next = NULL;
if (*head == NULL)
{
*head = anas;
return (anas);
}
else
{
h = *head;
while (h->next != NULL)
{
c++;
if (c == idx)
{
anas->next = h->next;
h->next = anas;
return (anas);
}
h = h->next;
}
}
return (NULL);
}
