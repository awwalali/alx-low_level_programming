#include "main.h"

/**
 * _puts - print a strig to stdout
 * @str: The string to be printed
 * Return: The stringto be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(0);
}
