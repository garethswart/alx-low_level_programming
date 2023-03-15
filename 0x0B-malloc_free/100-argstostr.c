#include "main.h"
#include <stdlib.h>
/**
 * _strlen - determines the length of a string.
 * @argc: argc.
 * @argv: argv.
 *
 * Return: string length as int.
 */
int _strlen(int argc, char **argv)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	return (len);
}
/**
 * argstostr - concatenates all the arguments.
 * @ac: argc.
 * @av: argv.
 *
 * Return: void.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int len = _strlen(ac, av);
	char *p = (char *)malloc((len * sizeof(char)) + 1);

	if (ac == 0 || av == NULL || !p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
