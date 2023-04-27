#include "lists.h"
/**
 * add_node_end -   adds a new node at the end of a list_t list
 * @head: pointer to list_t structure
 * @str: Element to add to NodeList
 * Return: the New list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *h;
int c = 0;
while (str[c])
c++;
new = malloc(sizeof(list_t));
new->str = strdup(str);
new->len = c;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{ 
h = *head;
while (h->next != NULL)
h = h->next;
h->next = new;
return (new);
}
}
