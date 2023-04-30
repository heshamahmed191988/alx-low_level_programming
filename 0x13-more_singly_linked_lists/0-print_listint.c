#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @e: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *e)
{
	size_t num = 0;

	while (e)
	{
		printf("%d\n", e->n);
		num++;
		e = e->next;
	}

	return (num);
}
