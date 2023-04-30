#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @v: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *v)
{
    size_t num = 0;

    while (v != NULL)
    {
        printf("%d\n", v->n);
        h = v->next;
        num++;
    }

    return (num);
}
