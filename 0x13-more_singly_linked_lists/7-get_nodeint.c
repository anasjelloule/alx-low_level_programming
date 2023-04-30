#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to listint_t structure
 * @index: index of node in list
 * Return: the number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int anas = 0;
while (head)
{
if (anas == index)
return (head);
anas++;
head = head->next;
}
return (NULL);
}
