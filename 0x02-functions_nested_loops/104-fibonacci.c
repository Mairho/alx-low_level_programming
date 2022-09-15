#include <stdio.h>
/**
*main - main function
*
* Return: nothing
*/
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, %.0f, ", a, b)

	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
