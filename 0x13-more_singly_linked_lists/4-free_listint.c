#include "lists.h"
/**
 * free_listint -   frees listint_t
 * @head: pointer to listint_t structure
 * @n: Element to add to NodeList
 * Return: the number of nodes
 */
void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *h = head->next;
free(head);
head = h;
}
}
