#include "main.h"
/**
 * _strpbrk - searches a string for
 * any of a set of bytes.
 * @s: string to be searched.
 * @accept: characters to be found.
 *
 * Return:pointer to the byte in s that
 * matches one of the bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *k;
	int m = 0;

	while (s[i] != '\0' && m == 0)
	{
		j = 0;
		while (accept[j] != '\0' && m == 0)
		{
			if (s[i] == accept[j])
			{
				k = &s[i];
				m = 1;
			}
			j++;
		}
		i++;
	}
	if (m == 0)
		return (0);
	else
		return (k);			
}
