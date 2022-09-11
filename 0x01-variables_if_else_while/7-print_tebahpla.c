#include <stdio.h>

/**
 * main - alphabets in reverse
 *
 * Description: This program prints all single digit numbers of base 10
 * starting from 0 ending at 9
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

