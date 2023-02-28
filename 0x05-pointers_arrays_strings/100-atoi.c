include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: 0 for no numbers.
 */
int _atoi(char *s)
{
	int i;
	int len;
	int sign = 1;
	int n = 0;

	len = _strlen(*s)
	for (i = 0; i < len && n > -1; i++)
	{
		if (*s[i] > 47 && *s[i] < 58 && n > -1)
			n = 1;
		if (*s[i - 1] == 45)
			sign = -1;
		while (i < len && n > 0)
			
}
