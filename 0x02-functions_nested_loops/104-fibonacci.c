#include <stdio.h>
/**
*main - main function
*
* Return: return 0
*/
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.of, ", a);
	printf("%.of, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.of", c);
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
