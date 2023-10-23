#include "main.h"
#include <stdio.h>
/**
 * init_dog - function with 4 arguments
 * @d: pointer
 * @name: pointer for char
 * @age: float type argument
 * @owner: char type argument
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
