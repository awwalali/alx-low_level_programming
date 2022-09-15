#include "main.h"

/**
 * print_line - prints horixontal line
 * @n: the length of the line
 * Return: 0
 */

void print-line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
