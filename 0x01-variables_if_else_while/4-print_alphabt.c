#include <stdio.h>

/*main_printing the alphabet*/
/**/
/*description- print out the alphabet only using the putcha dunction*/
/*Return: 0*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
putchar('\n');
return (0);
}

