#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first intiger to be swapped.
 * @b: second intiger to be swapped.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
