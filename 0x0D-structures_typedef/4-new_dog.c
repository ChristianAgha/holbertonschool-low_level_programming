#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: string to copy to
 * @src: string to copy
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
/**
 * print_dog - prints dog info
 * @d: variable of dog struct
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doug;
	unsigned int i, namelen, ownerlen;

	namelen = ownerlen = 0;

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;

	doug = malloc(sizeof(dog_t));
	if (doug == NULL)
		return (NULL);

	doug->name = malloc(namelen * sizeof(doug->name));
	if (doug->name == NULL)
	{
		free(doug->name);
		free(doug);
		return (NULL);
	}
	_strcpy(doug->name, name);

	doug->owner = malloc(ownerlen * sizeof(doug->owner));
	if (doug->owner == NULL)
	{
		free(doug->owner);
		free(doug->name);
		free(doug);
		return (NULL);
	}
	_strcpy(doug->owner, owner);

	doug->age = age;

	return (doug);
}
