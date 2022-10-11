#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int index;
	int i = 0;
	int len = 0;


	while (s[len] != '\0')
	{
		len++;
	}

	index = len - 1;

	while (i < len)
	{
		tmp = s[i];
		s[i] = s[index];
		s[index] = tmp;

		i++;
		index--;
	}
}


