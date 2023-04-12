#include "main.h"
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings
 *@s1: input
 *@s2: input
 *Return: Always(0)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int i, j, len1, len2, len;
len1 = len2 = 0;
if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
len1++;
}
if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
len2++;
}
len = len1 + len2;
s3 = (char *)malloc(sizeof(char) * (len + 1));
if (s3 == NULL)
return (NULL);
for (i = 0; i < len1; i++)
s3[i] = s1[i];
for (j = 0; j < len2; j++, i++)
s3[i] = s2[j];
s3[len] = '\0';
return (s3);
}
