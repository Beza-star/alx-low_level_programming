#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *end_node, *cursor;

	end_node = malloc(sizeof(list_t));
	if (end_node == 0)
		return (0);

	if (str)
	{
		end_node->str = _strdup(str);
		while (str[count] != '\0')
			count++;
		end_node->len = count;
	}
	else
	{
		end_node->str = 0;
		end_node->len = 0;
	}
	end_node->next = 0;
	if (*head)
	{
	cursor = *head;
	while (cursor->next != 0)
		cursor = cursor->next;
	cursor->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}

/**
 * *_strdup - function with one argument
 * @str: string 
 * Return: 0
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == 0)
		return (0);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
