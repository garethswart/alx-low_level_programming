#include "main.h"
/**
 * _isdigit - checks for digit character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
