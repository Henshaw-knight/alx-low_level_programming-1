#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: FizzBuzz program
 *
 * Return: 0
 */
void main()
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");
		
		else
			printf("%i", i);
	}
	printf('\n');
}
