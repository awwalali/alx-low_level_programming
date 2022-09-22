#include "main.h"

/**
 * _strncpy - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source str
 * @n: number of bytes of the str
 *
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (dest[i] != '\0' && i < n)
		i++;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
