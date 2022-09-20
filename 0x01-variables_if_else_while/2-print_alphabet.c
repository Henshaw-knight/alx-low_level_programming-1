#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints the expected word in the exact way'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
