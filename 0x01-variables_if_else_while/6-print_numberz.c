#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints all single digit numbers using putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
