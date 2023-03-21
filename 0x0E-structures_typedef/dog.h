#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a function that defines a dog structure
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, Char *owner);
void free_dog(dog_t *d);

#endif
