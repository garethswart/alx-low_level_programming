#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: Destination of string appended to.
 * @src: String to be appended.
 * @n: Max bytes to be used
 *
 * Return: void.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int strlen = 0;
	int j = 0;

	while (dest[strlen] != '\0')
		strlen++;
	while (src[i] != '\0' && j < n)
	{
		dest[strlen] = src[i];
		i++;
		j++;
		strlen++;
	}
	return (dest);
}
