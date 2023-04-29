#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function
 * @h: pointer
 * Return: Always(0)
 */

size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h)
{
n++;
printf("%d\n", h->n);
h = h->next;
}
return (n);
}
