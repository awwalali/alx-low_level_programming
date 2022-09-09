#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed
 *
 * Description - the program must say weather the number stored in variable n is positive or negative
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here*/
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}

