#include "lists.h"
/**
* add_dnodeint_end - ad node in end
* @head: head adrss of lnkd list
* @n: number of new value for new node
* Return: addrss of new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tpaire, *nww;

tpaire = *head;
nww = malloc(sizeof(dlistint_t));
if (nww == NULL)
return (NULL);
nww->next = NULL;
nww->prev = NULL;
nww->n = n;
if ((*head) == NULL)
{
*head = nww;
return (nww);
}
while (tpaire->next)
{
tpaire = tpaire->next;
}
nww->prev = tpaire;
tpaire->next = nww;
return (nww);
}
