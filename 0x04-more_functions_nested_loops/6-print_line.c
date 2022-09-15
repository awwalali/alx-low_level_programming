#include "main.h"

/**
 * print_line - prints horixontal line
 * @n: the length of the line
 * Return: 0
 */

void print_line(int n)
{
	int j = 0;

	while (n > j)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
