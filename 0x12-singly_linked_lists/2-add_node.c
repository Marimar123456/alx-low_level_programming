#include "lists.h"
/**
 **add_node - add a new node
 *@head: list
 *@str: pointer
 *Return: Addr of the new elem
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *x;
int len = 0;

x = malloc(sizeof(list_t));
if (x == NULL)
	return (NULL);
while (str[len])
	len++;
x->len = len;
x->str = strdup(str);
x->next = *head;
*head = x;
return (x);
}
