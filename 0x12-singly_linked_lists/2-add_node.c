#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 * Return: 1
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == 0)
		return (0);
	temp->str = _strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}

/**
 * *_strdup - function with one argument
 * @str: string argument
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

	if (ptr == 0)
		return (0);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
