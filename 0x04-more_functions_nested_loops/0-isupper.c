#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
