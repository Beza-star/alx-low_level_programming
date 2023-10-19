#include <stdio.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function with one argument
 * @h: const pointer type
 * Return: 1
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
