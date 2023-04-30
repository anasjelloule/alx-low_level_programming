#include "lists.h"
/**
 * pop_listint -  remove the head of listint_t linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
listint_t *anas;
int vl = 0;
anas = malloc(sizeof(listint_t));
if (!head || !*head)
return (0);
vl = (*head)->n;
anas = (*head)->next;
free(*head);
*head = anas;
return (vl);
}
