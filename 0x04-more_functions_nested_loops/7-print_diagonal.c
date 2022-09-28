#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: the number of times line will be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int spaces;

	while (i < n)
	{
		spaces = 0;

		while (spaces < i)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
