#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes struct of dog
 * @d: variable of dog struct
 * @name: name of dog
 * @age: variable of age
 * @owner: variable of owner's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
