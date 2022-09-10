#include <stdio.h>

/**
 * main-print numbers of base 10
 *
 * description-Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * retrun 0
 */

int mai(void)
{
	int i;
	
	for (i=0; i<10; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}

