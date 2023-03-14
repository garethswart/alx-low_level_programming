#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: char to be initialised with.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size);
	unsigned int i = 0;

	if (size == 0 || !(char *)malloc(size))
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
