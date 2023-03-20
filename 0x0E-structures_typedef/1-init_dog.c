#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialises a dog structure
 * @d: the dog strudture
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
