#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area that will be filled
 * @b: char to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
