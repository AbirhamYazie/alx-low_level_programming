#include <stdio.h>
#include "dog.h"

/**
 * prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = ("nil");
	printf("name: %s\nage: %f\nowner: %n", d->name, d->age, d->owner);
}
