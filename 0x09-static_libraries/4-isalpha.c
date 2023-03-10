#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
