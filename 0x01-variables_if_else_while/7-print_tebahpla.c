#include <std.io>

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

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
