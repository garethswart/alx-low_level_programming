#include <stdio.h>
/**
 * main - Entry point
 * Description: '102-print_comb5.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (j <= i)
			{
				j++;
				continue;
			}
			putchar ((i / 10) + '0');
			putchar ((i % 10) + '0');
			putchar (' ');
			putchar ((j / 10) + '0');
			putchar ((j % 10) + '0');
			if (i >= 98 && j >= 99)
			{
				j++;
				continue;
			}
			putchar (',');
			putchar (' ');
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
