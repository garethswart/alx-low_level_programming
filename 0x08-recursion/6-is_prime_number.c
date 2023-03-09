#include "main.h"
/**
 * _prime - if a number is prime.
 * @n: number to be evaluated.
 * @i: index.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int _prime(int n, int i)
{
	if (n == i)
		return (1);
	else if ((n % i) == 0 && i < n)
		return (0);
	else
		return (_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number to be evaluated.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else
		return (_prime(n, 2));
}
