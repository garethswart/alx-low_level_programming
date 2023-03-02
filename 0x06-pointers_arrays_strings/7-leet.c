#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @c: String to be encoded.
 *
 * Return: void.
 */
char *leet(char *c)
{
	int i = 0;
	int j;
	char l[] = {'o', 'l', 0, 'e', 'a', 0, 0, 't'};
	char u[] = {'O', 'L', 0, 'E', 'A', 0, 0, 'T'};
	char n[] = {48, 49, 0, 51, 52, 0, 0, 55};

	while (c[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			if (c[i] == l[j] || c[i] == u[j])
				c[i] = n[j];
		}
		i++;
	}
	return (c);
}
