#include "lists.h"
/**
 * delete_nodeint_at_index -  remove the head of listint_t linked list
 * @head: pointer to listint_t structure
 * @idx: index of node to remove
 * Return: the number of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *anas, *h;
unsigned int c = 0;
h = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
h = (*head)->next;
free(*head);
*head = h;
return (1);
}
else
{
while (h != NULL && c != index - 1)
{
c++;
h = h->next;
}
if (c != index - 1)
return (-1);
anas = h->next;
h->next = h->next->next;
free(anas);
return (1);
}
}
