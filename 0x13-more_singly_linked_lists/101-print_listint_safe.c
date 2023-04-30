#include "lists.h"
/**
 * print_listint_safe -  Print all linked list
 * @head: pointer to listint_t structure
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t c;
listint_t *anas = (listint_t *)head;
c = 0;

while (anas && anas > anas->next)
{
printf("[%p] %d\n", (void *)anas, anas->n);
anas = anas->next;
c++;
}
if (anas)
{
printf("[%p] %d\n", (void *)anas, anas->n);
printf("-> [%p] %d\n", (void *)anas->next, anas->next->n);
c++;
}
return (c);
}
