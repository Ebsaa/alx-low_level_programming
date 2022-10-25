#include "lists.h"

/**
* free_listint - free list
* @head: ptr to the first node of list
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current;
	/*iterate each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
