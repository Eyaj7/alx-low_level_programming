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
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
