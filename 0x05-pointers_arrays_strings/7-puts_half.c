#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - prints halpf of a string
* @str: string to split
* Return: 0
*/

void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (len(str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (len(str) + oE) / 2; i < len(str); i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
