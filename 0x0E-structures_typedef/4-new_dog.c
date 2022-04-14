#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog. if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int m, pname, powner;
	dog_t *n_dog;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}
	for (pname = 0; name[pname]; pname++)
		;
	for (powner = 0; owner[powner]; powner++)
		;
	n_dog->name = malloc(pname + 1);
	n_dog->owner = malloc(powner + 1);
	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < pname; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;
	for (i = 0; i < powner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);
}
