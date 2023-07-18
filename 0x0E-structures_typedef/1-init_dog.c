#include "main.h"
#include "dog.h"

/**
 * init_dog - initialize a variable of the type struct dog
 * @d: the dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * This function initializes a variable of type struct dog with the given name,
 * age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
