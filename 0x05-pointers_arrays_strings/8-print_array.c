#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * of integers, followed by a new line
 * @a: the array of integers to consider
 * @n: the number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;
	int i;

	index = n - 1;

	for (i = 0; i < index; i++)
	{
		printf(a[i]);
		printf(',');
		printf(' ');
	}
	printf(a[index]);
	printf('\n');
}
