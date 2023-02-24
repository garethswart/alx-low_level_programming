#include "main.h"
/**
 * print_triangle - draws a tiangle.
 * @size: size of the triangle.
 *
 * Return: None.
 */
void print_triangle(int size)
{
	int y = 0;
	int x;

	if (size > 0)
	{
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
	else
		_putchar('\n');
}
