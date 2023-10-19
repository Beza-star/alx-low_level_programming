#include <stdio.h>
#include "lists.h"
#include <stdio.h>
/**
 * list_len - function with one argument
 * @h: const list_t pointer argument to stru
 * Return: 1
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
