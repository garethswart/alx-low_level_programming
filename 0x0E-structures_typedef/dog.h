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

typedef struct dog dog_t;

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
 *
 * Description: Longer description
 */
void print_dog(struct dog *d);

/**
 * new_dog - initiates dog_t details
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees dogs
 * @d: Pointer to dog.
 *
 * Return: none
 */
void free_dog(dog_t *d);

#endif
