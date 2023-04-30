#include "lists.h"
/**
 * reverse_listint -  Reverse linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *anas;
listint_t *h;
anas = 0;
while (*head != NULL)
{
h = (*head)->next;
(*head)->next = anas;
anas = (*head);
(*head) = h;
}
(*head) = anas;
return (*head);
}
