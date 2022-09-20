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
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
