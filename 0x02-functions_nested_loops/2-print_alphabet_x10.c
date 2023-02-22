#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(alphbt[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
