#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: the number of _ to be printed to form the line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
