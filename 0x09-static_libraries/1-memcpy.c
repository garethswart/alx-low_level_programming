#include "main.h"
/**
 * _memcpy - copies a memory area.
 * @dest: memory area copied to.
 * @src: memory area to be coppied from.
 * @n: number of bytes to be filled.
 *
 * Return: memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
