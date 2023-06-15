#include "lists.h"

/**
* print_dlistint - prints length and elements
* @h: head
* Return: size_t value
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *prv;
int cn = 0;

prv = h;
while (prv != NULL)
{
printf("%d\n", prv->n);
prv = prv->next;
cn++;
}
return (cn);
}
