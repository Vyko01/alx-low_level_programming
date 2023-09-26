#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list.
 * @head: pointer to the first node in the lists.
 * @index: index where the new node is added.
 * @n: Data to insert in the new nodes
 *
 * Return: Pointer to the new node, or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
