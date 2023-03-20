#include "dog.h"

/**
 * new_dog - initiates dog_t details
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;
	dog_t *p = &newdog;
	char *nm = name;
	char *ownr = owner;

	newdog.name = nm;
	newdog.age = age;
	newdog.owner = ownr;
	return (p);
}
