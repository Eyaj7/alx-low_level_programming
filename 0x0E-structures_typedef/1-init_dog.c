#include "dog.h"
/**
*init_dog - function
*@name: name of the dog
*@age: age of dog
*@owner: name owner of dog
*@d: pointer
*Return: Always(0)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
