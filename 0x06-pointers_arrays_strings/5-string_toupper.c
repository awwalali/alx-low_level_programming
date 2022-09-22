#include "main.h"

/**
 * string_toupper - changes the string to uppercase
 * @s: the string
 *
 * Return: the resulting str
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
}
