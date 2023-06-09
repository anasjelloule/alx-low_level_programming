#include "lists.h"
/**
 * add_node -   adds a new node at the beginning of a list_t list
 * @head: pointer to list_t structure
 * @str: Element to add to NodeList
 * Return: the New list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int c = 0;
while (str[c])
c++;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = c;
new->next = *head;
*head = new;
return (new);
}
