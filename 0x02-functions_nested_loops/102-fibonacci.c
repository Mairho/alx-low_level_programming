#include <stdio.h>
/**
* main - main function
*
* Return: nothing
*/
int main(void)
{
	int counter = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%1d, %1d, ", a);

	while (counter < 50)
	{
		printf("%1d", c);
		counter++;
		a = b;
}
