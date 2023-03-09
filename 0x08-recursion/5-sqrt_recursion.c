#include "main.h"
/**
 * _sqrt - returns the square root of a number.
 * @n: number to be rooted.
 * @i: index.
 *
 * Return: sqare root.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be rooted.
 *
 * Return: sqare root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt(n, 1));
}
