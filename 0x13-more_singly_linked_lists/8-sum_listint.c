#include "lists.h"

/**
* sum_listint - Calculates the sum of all
* data (n) of a listint_t lists
* @head: a pointer to the head of the listint_t list
* Return: if the list is empty  - 0
* otherwise - the sum of all the data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
