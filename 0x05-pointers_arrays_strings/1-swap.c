#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first int
 * @b: secod int
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
