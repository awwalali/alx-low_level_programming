#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be coded
 *
 * Return: the new string
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeE0tTiL";
	char *b = "4433007711";

	for ( = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
