#include <stdio.h>
/**
 * main - Entry point
 * Description: '4-print_alphabt.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
