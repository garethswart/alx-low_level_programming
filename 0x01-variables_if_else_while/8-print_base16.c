#include <stdio.h>
/**
 * main - Entry point
 * Description: '8-print_base16.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "0123456789abcdef";
	int i = 0;

	while (i < 17)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
