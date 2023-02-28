#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;
	int strlen = 0;

	while (*(str + strlen) != '\0')
	{
		strlen++;
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
