#include "main.h"
/**
 *positive_or_negative - function 'positive_or_negative' 
 *@i: the number to be checked
 *
 * Return: Always (0)
 */
void positive_or_negative(int i)
{
if (i < 0)
printf("%d is negative\n", i);
else if (i > 0)
printf("%d is positive\n", i);
else
printf("%d is zero\n", i);
}
