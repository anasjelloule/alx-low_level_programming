#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at position.
* @h: A pointer to the head of list
* @idx: The position to insert new Nde.
* @n: The integer for the new node to contain.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tempai = *h, *nww;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
tempai = tempai->next;
if (tempai == NULL)
return (NULL);
}

if (tempai->next == NULL)
return (add_dnodeint_end(h, n));

nww = malloc(sizeof(dlistint_t));
if (nww == NULL)
return (NULL);

nww->n = n;
nww->prev = tempai;
nww->next = tempai->next;
tempai->next->prev = nww;
tempai->next = nww;

return (nww);
}
