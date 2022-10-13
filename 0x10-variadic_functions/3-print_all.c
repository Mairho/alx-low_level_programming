#include <stdio.h>
#include <stdarg.h>
#include <stdlib.b>
#include "variadic_functions.h"

/**
* print_all -  prints anything
* @format: list of all arguments passed to the finction
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("s%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
