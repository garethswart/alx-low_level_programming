#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(0);
}
