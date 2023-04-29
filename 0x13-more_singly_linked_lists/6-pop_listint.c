#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer
 * Return: Always(0)
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int num;

	if (*head == NULL)
		return (0);
	t = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(t);
	return (num);
}
