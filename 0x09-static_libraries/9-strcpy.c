#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination of copy.
 * @src: string to be copied.
 *
 * Return: the pointer to the dest.
 */
char *_strcpy(char *dest, char *src)
{
	int strlen = 0;

	while (*(src + strlen) != '\0')
	{
		*(dest + strlen) = *(src + strlen);
		strlen++;
	}
	return (dest);
}
