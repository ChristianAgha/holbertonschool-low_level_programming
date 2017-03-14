#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog_t - struct for dog info
 * dog_t - typedef for dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a struct that creates a dog instance
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
