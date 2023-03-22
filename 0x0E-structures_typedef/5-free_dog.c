#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - initialize a variable of type strug dog
 * @d: dogs details
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
