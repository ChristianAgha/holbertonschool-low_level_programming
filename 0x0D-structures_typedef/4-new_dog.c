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
 * new_dog - creates a struct of type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns pointer to istance of type dog_t
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

	doug->name = malloc(namelen);
	if (doug->name == NULL)
	{
		free(doug);
		return (NULL);
	}
	_strcpy(doug->name, name);

	doug->owner = malloc(ownerlen);
	if (doug->owner == NULL)
	{
		free(doug->name);
		free(doug);
		return (NULL);
	}
	_strcpy(doug->owner, owner);

	doug->age = age;

	return (doug);
}
