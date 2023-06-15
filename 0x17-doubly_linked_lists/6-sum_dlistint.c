#include "lists.h"
/**
* sum_dlistint - sums values  linked list
* @head: head of address to get
* Return: sum of value
*/
int sum_dlistint(dlistint_t *head)
{
const dlistint_t *prevo;
int smm = 0;

prevo = head;
while (prevo != NULL)
{
smm += prevo->n;
prevo = prevo->next;
}
return (smm);
}
