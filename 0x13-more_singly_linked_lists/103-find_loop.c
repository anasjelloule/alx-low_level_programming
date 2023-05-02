#include "lists.h"
/**
* find_listint_loop - Find List Loop
* @head: pointer to listint_t structure
* Return: the number of nodes
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *anas = head;
listint_t *anas2 = head;
if (!head)
return (NULL);
while (anas && anas2 && anas2->next)
{
anas2 = anas2->next->next;
anas = anas->next;
if (anas2 == anas)
{
anas = head;
while (anas != anas2)
{
anas = anas->next;
anas2 = anas2->next;
}
return (anas2);
}
}
return (NULL);
}
