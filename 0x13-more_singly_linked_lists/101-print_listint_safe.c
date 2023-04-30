#include "lists.h"
/**
 * print_listint_safe -  Print all linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t c = 0;
listint_t *anas = (listint_t *)head;
if (head == NULL)
exit(98);
while (anas != NULL)
{
c++;
printf("[%p] %d\n", (void *)anas, anas->n);
anas = anas->next;
if (anas >= head && anas != NULL)
{
printf("-> [%p] %d\n", (void *)anas->next, anas->next->n);
exit(98);
}
}
return (c);
}
