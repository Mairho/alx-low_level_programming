#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - it prints a string in reverse order
* @s: string to reverse
* Return: nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
