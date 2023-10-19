#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - function with one argument
 * @head: pointer to list_t
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
