#include "lists.h"
/**
 * print_listint_safe -  Print all linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
if (head)
{
if (head->next < head)
return (1 + print_listint_safe(head->next));
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
return (1);
}
}
return (0);
}
