#include "main.h"
/**
 * print_rev - prints a string in reverse,
 * followed by a new line.
 * @s: string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i;
	int strlen = 0;

	while (*(s + strlen) != '\0')
		strlen++;
	i = strlen - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
