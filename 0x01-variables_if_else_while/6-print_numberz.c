#include <stdio.h>

/**
 * main - print all the sigle digit numbers of base 10
 *
 * Description: Write a program that prints all single digit numbers
 * of base 10 starting from 0
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

