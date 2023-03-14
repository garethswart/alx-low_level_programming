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
	char *p = (char*)malloc(size);
	int i;
	int j = (int)size;

	if (size == 0)
		return (NULL);
	while (i < j)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
