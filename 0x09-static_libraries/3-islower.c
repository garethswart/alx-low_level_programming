#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
