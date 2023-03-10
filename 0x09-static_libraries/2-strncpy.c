#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: Destination of coppied string.
 * @src: String to be coppied.
 * @n: Max bytes to be used
 *
 * Return: void.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int strlen = 0;

	while (src[strlen] != '\0' && strlen < n)
	{
		dest[strlen] = src[strlen];
		strlen++;
	}
	while (strlen < n)
	{
		dest[strlen] = '\0';
		strlen++;
	}
	return (dest);
}
