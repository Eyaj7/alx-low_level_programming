#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function
 * @head: pointer
 * @n: int
 * Return: Always (0)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
