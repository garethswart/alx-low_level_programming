#include "main.h"
/**
 * infinite_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: result buffer.
 * @size_r: buffer size.
 *
 * Return: void.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n;
	int m;
	int d = 0;
	int s1len = 0;
	int s2len = 0;
	int scnt = size_r;
	int err = 0;

	while (n1[s1len] != '\0')
		s1len++;
	while (n2[s2len] != '\0')
		s2len++;
	if (s1len > size_r || s1len > size_r || (n1[0] - 48) + (n2[0] - 48))
	{
		err = 1;
		return (0);
	}
	while (s1len >= 0 && s2len >=0 && err == 0)
	{
		n = (n1[s1len] - 48) + (n2[s2len] - 48) + d;
		m = n % 10;
		d = n / 10;
		r[scnt] = m;
		s1len--;
		s2len--;
		scnt--;
		if (scnt == 0 && d > 0)
		{
			err = 1;
			return (0);
			break;
		{
	}
	while (s1len >= 0 && err == 0)
	{
		r[scnt] = n1[s1len];
		s1len--;
	}
	while (s2len >= 0 && err == 0)
	{
		r[scnt] = n2[s2len];
		s2len--;
	}
	if (err == 0)
		*r = 0;
	return (r);
}
