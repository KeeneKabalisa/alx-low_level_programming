#include "lists.h"

/**
 * list_len - Finds number of elements in linked list
 * @h: linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
