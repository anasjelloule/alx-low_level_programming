#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to listint_t structure
 * @index: index of node in list
 * Return: the number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *h;
int anas = 0;
h = head;
while (h != NULL)
{
if (anas == (int)index)
return h;
anas++;
h = h->next;
}
return (NULL);
}
