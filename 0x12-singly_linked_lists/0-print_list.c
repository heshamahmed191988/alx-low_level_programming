#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t o = 0;

	while (q)
	{
		if (!q->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", q->len, q->str);
		q = q->next;
		o++;
	}

	return (o);
}
