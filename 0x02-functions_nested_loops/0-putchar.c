#include "main.h"
/**
 * main - Entry point
 * Description: '0-putchar.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char text[] = "_putchar";

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
