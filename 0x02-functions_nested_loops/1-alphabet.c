#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int i = 0;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		_putchar(alphbt[i]);
		i++;
	}
	_putchar('\n');
}
