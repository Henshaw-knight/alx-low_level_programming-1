#include "main.h"

/**
 * print_rev - function that prints a string, inv reverse,
 * followed by a new line.
 * @s: the string to consider
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	while (length <= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
