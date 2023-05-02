#include "lists.h"
void frr(listint_t *anas);
/**
 * free_listint_safe -  Reverse linked list
 * @h: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *anas = NULL;
size_t c = 0;
if (!(h && *h))
return (c);
while (*h)
{
c++;
if (*h > (*h)->next)
{
anas = *h;
*h = (*h)->next;
free(anas);
}
else
{
free(*h);
*h = NULL;
}
}
*h = NULL;
return (c);
}
/**
 * frr - A function that frees a listint_t recursively
 * @anas: A pointer to the listint_t structure
 * Return: Nothing
 */
void frr(listint_t *anas)
{
listint_t *anas2;

if (anas)
{
anas2 = anas;
anas2 = anas2->next;
free(anas2);
frr(anas2);
}
free(anas);
}
