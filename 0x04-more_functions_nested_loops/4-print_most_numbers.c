#include "main.h"

/**
 * print_most_numbers - prints numbers to 10
 * except 2 and 4
 * Return: naught
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) && (i == 4))
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
