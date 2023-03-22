#include <stddef.h>
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

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array to be executed.
 * @size: size of array.
 * @action: action to be conducted.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer.
 * @array: array to be executed.
 * @size: size of array.
 * @cmp: action to be conducted.
 *
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
