#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @c: String to be encoded.
 *
 * Return: void.
 */
char *rot13(char *c)
{
	int i = 0;
	int j;
	int f;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i] != '\0')
	{
		f = 0;
		j = 0;
		while (j < 52 && f == 0)
		{
			if (c[i] == in[j])
			{
				c[i] = out[j];
				f = 1;
			}
			j++;
		}
		i++;
	}
	return (c);
}
