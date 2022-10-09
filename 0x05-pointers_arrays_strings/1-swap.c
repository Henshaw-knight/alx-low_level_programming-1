#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the pointer to the first integer variable
 * @b: the pointer to the second integer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{

	*a = *b;
	*b = *a;
}
