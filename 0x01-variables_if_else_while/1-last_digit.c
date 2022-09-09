#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: the last digit if the given value
 *
 * description: This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n
 * return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = random() - RAND_MAX / 2;
l = n % 10;

if ( l > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0)
}
