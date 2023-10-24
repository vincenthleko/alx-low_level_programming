#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * at a give position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new nodes will e added
 * @n: nalue for the new node to be added
 * Return: pointer to the new node or NULL
 * if the function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
