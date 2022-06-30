#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - dog structure
 *@d: the dog
 *@name: the name
 *@age: the age
 *@owner: the owner
 *Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == 0)
	return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
