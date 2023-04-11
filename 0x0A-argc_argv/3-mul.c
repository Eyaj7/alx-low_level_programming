#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints its name
 *@argc: int
 *@argv: int
 *Return: Always (0)
 **/
int main(int argc, char *argv[])
{
int index, mul;
mul = 1;
if (argc < 3)
{
printf("Error\n");
return  (1);
}
for (index = 1; index < argc; index++)
{
mul = mul *atoi(argv[index]);
}
printf("%d\n", mul);
return (0);
}
