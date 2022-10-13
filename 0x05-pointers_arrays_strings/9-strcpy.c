#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte |('\0), to the buffer to
 * dest
 *
 * @dest: the destination where the string copied will be pointed
 * @src: the source of the string pointed
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
