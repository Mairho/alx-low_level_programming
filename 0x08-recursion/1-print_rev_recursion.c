#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - it prints a string in revers
* @s: the string to be printed
*
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
