#include "main.h"

/**
 * _strncpy - function that copies a string
 * works exactly like strncpy
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be copied from src
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *dest; i++)
	{
		dest[0] = src[0];
		dest++;
	}

	*dest = '\0';

	return dest;
}
