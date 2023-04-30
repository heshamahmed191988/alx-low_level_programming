#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @e: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *e)
{
	size_t num = 0;

	while (e != NULL)
	{
		num++;
		e = e->next;
	}

	return (num);
}
