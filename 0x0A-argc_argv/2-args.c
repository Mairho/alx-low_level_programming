#include <stdio.h>
#include "main.h"

/**
* main - print the nameof the program
* @argc: count arguments
* @argv: arguments
*
* Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	/*Declaring variables*/

	int count = 0;

	if (argv > 0)

	{
		/*WHILE - print each arguments*/

		while (count < argc)
		{
			printf("%s\n", argv[count]);
			return (0);
		}
	}
}
