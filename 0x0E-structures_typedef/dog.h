#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * A new type that describes a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
