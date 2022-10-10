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

	length = i;

	while (s[length] != *(s))
	{
		_putchar(s[length]);
		i--;
	}
	_putchar(*(s));
	_putchar('\n');
}
