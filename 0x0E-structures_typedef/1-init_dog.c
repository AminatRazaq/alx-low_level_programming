#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog to be initialized
 * @name: name
 * @age: age
 * @owner: owner
 * Description: the struct of a dog
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
