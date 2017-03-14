#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - typedef for dog structs
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
