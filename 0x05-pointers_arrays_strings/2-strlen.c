#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: returns length as integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
