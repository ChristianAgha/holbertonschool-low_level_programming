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
	dog_t *dog;
	int i, namelen, ownerlen;

	namelen = ownerlen = 0;

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(namelen * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->owner = malloc(ownerlen * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
