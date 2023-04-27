#include "lists.h"
/**
 * list_len -   prints all the elements of a list_t
 * @h: pointer to list_t structure
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
    int c = 0;
    while (h != NULL)
    {
        h = h->next;
        c++;
    }
    return (c);
}
