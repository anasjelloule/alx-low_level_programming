#include "lists.h"
/**
* add_dnodeint - adds node
* @head: address of head lst
* @n: number
* Return: address of new or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nww;

nww = malloc(sizeof(dlistint_t));
if (nww == NULL)
return (NULL);
nww->n = n;
nww->next = NULL;
nww->prev = NULL;
if ((*head) == NULL)
{
*head = nww;
return (nww);
}
else
{
(*head)->prev = nww;
nww->next = *head;
*head = nww;
return (nww);
}
}
