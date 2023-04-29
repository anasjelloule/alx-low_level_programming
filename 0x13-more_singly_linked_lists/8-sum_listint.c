#include "lists.h"
/**
 * sum_listint -   frees listint_t
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
int sum_listint(listint_t *head)
{
int anas = 0;
listint_t *h;
h = head;
while (h != NULL)
{
anas += h->n;
h = h->next;
}
return (anas);
}
