#include "main.h"
/**
 * print_square - draws a square.
 * @size: the size of the square.
 *
 * Return: None.
 */
void print_square(int size)
{
	int y = 0;
	int x;

	if (size < 1)
	{
		_putchar('\n');
		break;
	}
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar(35);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
