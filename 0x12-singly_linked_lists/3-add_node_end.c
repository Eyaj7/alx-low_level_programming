#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 * @str: string
 * @head: string
 * Return: Always (0)
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *new;
list_t *temp;
new = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);
if (new == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
if (*head == NULL)
{
*head = new;
new->len = i;
new->str = strdup(str);
new->next = NULL;
return (new);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
new->len = i;
new->str = strdup(str);
new->next = NULL;
return (new);
}
