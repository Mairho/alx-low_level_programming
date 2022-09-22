#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares pointers to two strings.
* @s1: A pointer to the first string to be compared.
* @s2: A pointer to the second string to be compared
* Return: IF str1 < str2, the negative difference of
* the first unmatched characters.
* IF s1 == s2, 0
* IF s1 > s2, the positive difference of
* the first unmatched characters
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
{
