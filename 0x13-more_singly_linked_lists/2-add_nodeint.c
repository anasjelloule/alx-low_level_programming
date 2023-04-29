#include "lists.h"
/**
 * add_nodeint -   Get length listint_t
 * @head: pointer to listint_t structure
 * @n: Element to add to NodeList
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *anas;
anas = malloc(sizeof(listint_t));
if (anas == NULL)
return (NULL);
anas->n = n;
anas->next = *head;
*head = anas;
return (anas);
}
