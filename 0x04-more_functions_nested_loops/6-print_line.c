#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: the number of _ to be printed to form the line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i > 0)
			_putchar('_');
		_putchar('\n');
	}
}
