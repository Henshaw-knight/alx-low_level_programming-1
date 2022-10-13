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

	if (n > 0)
	{
		for (i = 0; i < index; i++)
		{
			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
		printf("%d", a[index]);
	}
	else if (n == 0 || n < 0)
	{
		printf("%d", a[0]);
	}
	prinf("\n");
}
