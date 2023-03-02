#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: Destination of string appended to.
 * @src: String to be appended.
 *
 * Return: void.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int strlen = 0;

	while (dest[strlen] != '\0')
		strlen++;
	while (src[i] != '\0')
	{
		dest[strlen] = src[i];
		i++;
		strlen++;
	}
	return (dest);
}
