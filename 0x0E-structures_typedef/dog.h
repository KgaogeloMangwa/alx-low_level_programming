#ifndef POPPY_D
#define POPPY_D

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
} poppy_d;

void init_poppy(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
poppy_d *new_dog(char *name, float age, Char *owner);
void free_poppy(poppy_d *d);

#endif
