#include "lists.h"

/**
 * pop_listint - Delete the head node of a linked list.
 * @head: pointer to the first element in the linked lists.
 *
 * Return: the data inside the elements that was deleted.
 * or return 0 if ther is nothing in the file.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
