#include "lists.h"
/**
 * listint_len -   Get length listint_t
 * @h: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
int anas = 0;
while (h != NULL)
{
h = h->next;
anas++;
}
return (anas);
}
