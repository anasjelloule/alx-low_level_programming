#include "lists.h"

/**
 * dlistint_len - length linked list
 * @h: head 
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *prv;
int cn = 0;

prv = h;
while (prv != NULL)
{
prv = prv->next;
cn++;
}
return (cn);
}
