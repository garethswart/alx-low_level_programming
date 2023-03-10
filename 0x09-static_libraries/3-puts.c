#include "main.h"
/**
 * _puts - prints a string,
 * followed by a new line, to stdout.
 * @str: string to be printed.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;
	int strlen = 0;

	while (*(str + strlen) != '\0')
		strlen++;

	while (i < strlen)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
