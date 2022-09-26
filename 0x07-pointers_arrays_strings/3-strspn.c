#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @accept:the string containing the list of char to matc in s
 * @s: the string
 *
 * Return: the number of  bytes in the iniat segment
 * of s which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
