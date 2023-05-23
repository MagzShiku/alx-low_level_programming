#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_new = (dog_t *)malloc(sizeof(dog_t));
/* this allocate memory for the dog structure */
	if (dog_new == NULL)
	{
		return (NULL);
	}

	/**
	 * allocate memory and copy name string including '0' null
	 */
	dog_new->name = strdup(name);

	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->age = age;

	/* allocate memory and copy owner string */

	dog_new->owner = strdup(owner);

	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	return (dog_new);

}
