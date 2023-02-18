#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: '2-print_alphabet.c'
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
