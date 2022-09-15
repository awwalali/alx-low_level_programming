#include "main.h"

/**
 * print_diagonal - draws a digonal line
 * Retun: 0
 */

void print_diagonal(void)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
