#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48, i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
