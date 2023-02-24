#include "main.h"
/**
 * print_line - Prints n lines.
 * @n: number of line spaces.
 *
 * Return: None.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
