#include "main.h"

/**
 * set_string -sets the value of a poiter to a char
 * @s: pointer to pointer needed to set to
 * @to: the string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
