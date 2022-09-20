#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints all letters except q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
	       if (letters != 'e' && letters != 'q')
	       {
			putchar(letter);
	       }
	}
	putchar('\n');

	return (0);
}
