#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a node from a dlistint_t
* @head: A pointer to the head of dlistint_t.
* @index: The index of the node t remove.
*
* Return: Upon success - 1.
*         Otherwise - -1.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tempo = *head;

if (*head == NULL)
return (-1);

for (; index != 0; index--)
{
if (tempo == NULL)
return (-1);
tempo = tempo->next;
}

if (tempo == *head)
{
*head = tempo->next;
if (*head != NULL)
(*head)->prev = NULL;
}

else
{
tempo->prev->next = tempo->next;
if (tempo->next != NULL)
tempo->next->prev = tempo->prev;
}

free(tempo);
return (1);
}
