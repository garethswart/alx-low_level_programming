#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog details
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initiates struct dog details
 * @d: Pointer to new var of type dog.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog.
 * @d: Pointer to new var of type dog.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Longer description
 */
void print_dog(struct dog *d);

#endif
