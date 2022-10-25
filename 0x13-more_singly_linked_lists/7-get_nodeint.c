#include "lists.h"

/**
 * get_nodeint_at_index - gets a node of a linked list
 * at a specific index
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
