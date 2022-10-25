#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of list.
* @head: pointer to the first node of the list
* Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
/* add n to sum && go to the next node*/
	sum += head->n;
	head = head->next;
}

/*if list will be empty it will return sum = 0*/
return (sum);
}
