#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'C program to print the size of various types on the computer'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int lli;
	float f;

	printf("The size of a char is: %ld byte(s)\n", sizeof(c));
	printf("The size of a int is: %ld byte(s)\n", sizeof(i));
	printf("The size of a long int is: %ld byte(s)\n", sizeof(l));
	printf("The size of a long long int is: %ld byte(s)\n", sizeof(lli));
	printf("The size of a float is: %ld byte(s)\n", sizeof(f));
	return (0);
}
