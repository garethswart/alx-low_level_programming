#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: Pointer to new var of type dog.
 *
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age <= 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
