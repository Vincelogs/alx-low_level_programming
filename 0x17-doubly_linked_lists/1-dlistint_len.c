#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlistint_t list
 * @h: pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
