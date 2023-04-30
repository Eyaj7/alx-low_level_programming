#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: pointer
 * @index: index
 * Return: Always(0)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *next;
	listint_t *t = *head;

	if (t == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	for (n = 0; n < (index - 1); n++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}
	next = t->next;
	t->next = next->next;
	free(next);
	return (1);
}
