#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * based on the number of bytes n
 * @dest: the string to be appended to.
 * @src: the string to add to the dest.
 * @n: the number of bytes from src.
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int j;

	while (*dest)
		dest++;

	for (j = 0; *src && j < n; j++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (temp);
}
