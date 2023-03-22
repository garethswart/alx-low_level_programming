#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: function to be used.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *));

#endif
