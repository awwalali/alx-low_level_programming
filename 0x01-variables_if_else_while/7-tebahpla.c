#include <stdio.h>

/**
 * main - alphabets in reverse
 *
 * Description: Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}

