#include <stdio.h>

/**
 * main - print all the sigle digit numbers of base 10
 *
 * description: Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * return: 0
 */
int main(void)
{
	char i;

	for(i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar('\n')
	}
	return (0);
}

