#include "main.h"

/**
 * _puts - print a strig to stdout
 * @str: The string to be printed
 * Return: The stringto be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
