#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owmer: %s\n", d->owner ? d->owner : "nil");
}
