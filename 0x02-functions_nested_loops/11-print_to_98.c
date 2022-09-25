#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the natural number to consider
 *
 * Return: range from n to 98
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
