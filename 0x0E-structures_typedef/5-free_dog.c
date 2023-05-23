#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_dog - a function that frees dogs
 * @d: dogs to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name); /* free dynamic memory allocated name string */
		free(d); /* free dog structure*/
	}

}
