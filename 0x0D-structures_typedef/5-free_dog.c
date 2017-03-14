#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a dog struct
 * @d: the input dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
