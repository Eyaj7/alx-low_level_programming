#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: Always(0)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new;
	listint_t *t = *head;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		for (node = 0; node < idx - 1 && t != NULL; node++)
		{
			t = t->next;
		}
		if (t == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	{
		new->next = t->next;
		t->next = new;
	}
	return (new);
}
