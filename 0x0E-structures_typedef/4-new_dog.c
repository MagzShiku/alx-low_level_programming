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
	 /* allocate memory and copy name string including '0' null*/
	dog_new->name = (char *)malloc(strlen(name) + 1);

	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	strcpy(dog_new->name, name);

	dog_new->age = age;

	dog_new->owner = (char *)malloc(strlen(owner) + 1);

	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	strcpy(dog_new->owner, owner);

	return (dog_new);

}
