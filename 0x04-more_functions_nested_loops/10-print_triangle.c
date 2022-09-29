#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, space, hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = i; space < size; space++)
			{
				_putchar(' ');
			}

			for (hash = 0; hash < i; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
