#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints size of various types'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long longl;
	float f;
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(longl));
	printf("size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
