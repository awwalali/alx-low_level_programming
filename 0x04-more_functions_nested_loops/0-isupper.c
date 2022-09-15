#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: character to be tested
 * Return: 0 is uppercase, else 1
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
