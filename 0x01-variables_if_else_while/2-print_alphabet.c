#include <stdio.h>

/**
 * main - printing the alphabet
 *
 * Description: print out the alphabet only using the putcha dunction
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

