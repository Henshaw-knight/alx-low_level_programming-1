#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a * b) + '0');

			if (a == 9 || b == 9)
				continue;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
