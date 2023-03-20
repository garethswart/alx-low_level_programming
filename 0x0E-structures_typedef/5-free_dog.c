#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to dog.
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
}
