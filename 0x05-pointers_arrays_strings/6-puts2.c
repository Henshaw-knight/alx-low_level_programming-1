#include "main.h"

/**
 * puts2 - function that prints only even-indexed characters
 * @str: string to print from
 */
void puts2(char *str)
{
	int i;
	int len = 0;
	int index;

	while (str[len] != '\0')
	{
		len++;
	}
	index = len - 1;

	for (i = 0; i <= index; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
