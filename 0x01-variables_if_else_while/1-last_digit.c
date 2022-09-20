#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'Program that prints the expected word in the exact way'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int last_digit = n % 10;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		printf("Last digit of %d is %d ", n, last_digit);
		if (last_digit > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (last_digit == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}

		return (0);
}
