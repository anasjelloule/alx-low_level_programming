#include "lists.h"
/**
 * print_list -   prints all the elements of a list_t
 * @h: pointer to list_t structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int c = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
c++;
}
return (c);
}
