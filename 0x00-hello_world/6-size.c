#include <stdios.h>

/**
 *  main - print out the sizes of data types
 *
 * Description - The program is a  C program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("The size of char: %zu byte(s)\n", sizeof(c));
	printf("The size of int: %zu byte(s)\n", sizeof(i));
	printf("The size of long: %zu byte(s)\n", sizeof(li));
	printf("The size of long long: %zu byte(s)\n", sizeof(lli));
	printf("The size of float: %zu byte(s)\n", sizeof(f));
	return (0)
}
