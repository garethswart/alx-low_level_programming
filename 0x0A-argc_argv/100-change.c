#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change.
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int chng;
	int rm;
	int cns;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		exit(0);
	}
	chng = atoi(argv[1]);
	cns = chng / 25;
	rm = chng % 25;
	cns = cns + (rm / 10);
	rm = rm % 10;
	cns = cns + (rm / 5);
	rm = rm % 5;
	cns = cns + (rm / 2);
	rm = rm % 2;
	cns = cns + rm;
	printf("%d\n", cns);
	exit(0);
}
