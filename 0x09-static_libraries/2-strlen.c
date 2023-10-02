#include "main.h"
/**
 *  _strlen - length of string
 *  @s: string pointer type char
 *  Description: strlen similiar function to return length
 *  Return: string i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
