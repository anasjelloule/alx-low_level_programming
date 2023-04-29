#include "lists.h"
/**
 * add_nodeint_end -   adds a anas node at the END of a listint_t
 * @head: pointer to listint_t structure
 * @n: Element to add to NodeList
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *anas, *h;
anas = malloc(sizeof(listint_t));
if (anas == NULL)
return (NULL);
anas->n = n;
anas->next = NULL;
if (*head == NULL)
{
*head = anas;
return (anas);
}
else
{
h = *head;
while (h->next != NULL)
h = h->next;
h->next = anas;
return (anas);
}
}
