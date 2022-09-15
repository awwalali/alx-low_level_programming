#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: result
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
