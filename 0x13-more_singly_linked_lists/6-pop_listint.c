#include "lists.h"
/**
 * pop_listint -  remove the head of listint_t linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
listint_t *anas;
anas = malloc(sizeof(listint_t));
if (anas == NULL || head == NULL || *head == NULL)
return (0);
anas = *head;
*head = anas->next;
return (anas->n);
}
