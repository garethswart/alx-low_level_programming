#include "main.h"
#include <stdlib.h>
/**
 * _strlen - determines the length of a string.
 * @str: string to be measured.
 *
 * Return: string length as int.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: pointer to array.
 */
char *_strdup(char *str)
{
	int j = _strlen(str);
	char *p = (char *)malloc(j);
	int i = 0;
	char tmp;

	if (!(char *)malloc(j))
		return (NULL);
	while (i < j)
	{
		tmp = str[i];
		p[i] = tmp;
		i++;
	}
	return (p);
}
