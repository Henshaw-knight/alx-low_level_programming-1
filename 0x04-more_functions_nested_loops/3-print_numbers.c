#include "main.h"

/**
 * print_numbers - function that prints the numbers 0-9 then a new line
 * 
 * Return: Nothing
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
}
