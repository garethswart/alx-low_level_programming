#include "main.h"
/**
 * more_numbers - Prints  10 times numbers
 * 0 to 14.
 *
 * Return: None.
 */
void more_numbers(void)
{
	int k = 0;
	int j;

	while (k < 10)
	{
		for (int i = 0; i < 15; i++)
		{
			for (int t = 10; t > 0; t / 10)
			{
				j = (i / t) % 10;
				if (j == 0 && t > 1)
					continue;
				_putchar(j + '0');
			}
		_putchar('\n');
	}
}
