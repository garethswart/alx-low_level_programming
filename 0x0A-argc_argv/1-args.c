#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char i = 0;

	if (i == argv[0][0])
		i++;
	printf("%d\n", argc - 1);
	exit(0);
}
