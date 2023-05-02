#include "lists.h"
void frr(listint_t *anas);
/**
 * free_listint_safe -  Reverse linked list
 * @h: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
size_t c = 0;
listint_t *anas;

anas = *h;
while (anas)
{
anas = *h;
anas = anas->next;
frr(anas);
c++;
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
