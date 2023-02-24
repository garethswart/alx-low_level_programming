#include "main.h"
/**
 * print_most_numbers - Prints numbers 0 to 9
 * except 2 and 4.
 *
 * Return: None.
 */
void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
