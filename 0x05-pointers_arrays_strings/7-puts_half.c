#include "main.h"
/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int len;
	int strlen = 0;

	while (*(str + strlen) != '\0')
		strlen++;

	len = (strlen) / 2;
	i = len;
	while (i <= strlen)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
