#include <stdio.h>

/**
 * main - Entry point
 * Description: 'FizzBuzz program'
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%i ", i);
	}
	printf("\n");

	return (0);
}
