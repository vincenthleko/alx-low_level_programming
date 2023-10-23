#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining
 * of a listint_t list
 * @head: pointer to address of the head of the listint_t list
 * @n: integer for the new node to contain
 * Return: if functions fail - NULL
 * otherwise - the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
