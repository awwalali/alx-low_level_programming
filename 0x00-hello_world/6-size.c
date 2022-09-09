#include <stdio.h>

/**
 * main - print out data type sizes
 *
 * Description - Write a C program that prints the size of various types on the computer it is compiled and run on.
 * Return: always 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %zu byte(s)\n", sizeof(c));
	printf("Size of int: %zu byte(s)\n", sizeof(i));
	printf("Size of long: %zu byte(s)\n", sizeof(li));
	printf("Size of long long: %zu byte(s)\n", sizeof(lli));
	printf("Size of float: %zu byte(s)\n", sizeof(f));
	return (0)
}

