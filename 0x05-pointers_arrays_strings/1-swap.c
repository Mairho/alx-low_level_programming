#include "main.h"

/**
* swap_int - it swaps integers
* @a: first integer
* @b: second integer
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
