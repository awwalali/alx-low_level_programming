#include "main.h"

/**
 * print_diagonal - draws a digonal line
 * Retun: 0
 */

void print_diagonal(void)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; n > len; len++)
		{
			for (space = 0; space < len; space ++)
			{
				_putchar(' ');
			}
			_putchar('\');

			if (len == (n -1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
