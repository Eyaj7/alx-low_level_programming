#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _calloc - function that allocates memory
* @nmemb: number of elements in the array
* @size: size of each element
* Return: Always(0)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}
