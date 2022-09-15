#include "main.h"

/**
 * print_most_numbers - prints number from 0 - 9
 * except 1 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	for (i = 48; i < 58; i++)
	{
		if ((i == 50 ) && (i == 52))
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
