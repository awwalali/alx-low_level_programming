#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of byte
 * @s: the string to be searched
 * @accept: string that contains the byte
 *
 * Return: pointer to the byte in s the matches the bytes in accept,
 * or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
