#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string which appended string will be added to
 * @src: string to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
