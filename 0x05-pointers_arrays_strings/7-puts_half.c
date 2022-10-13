#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: the string
 *
 * Retun: void
 */
void puts_half(char *str)
{
	int i;
	int len1 = 0;
	int len2;
	int index;

	while (str[len1] != '\0')
	{
		len1++;
	}
	len2 = len1 / 2;

	if (len1 % 2 == 0)
	{
		for (i = len2; i < len1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		len2 = (len1 - 1) / 2;

		index = len1 - len2;

		for (i = index; i < len1; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
