#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of the array
 * @c: charcter
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
		unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
if (size != 0)
{

array = (char *)malloc(size * sizeof(char));
}
if (array != 0)
{
for (i = 0; i < size; i++)
array[i] = c;
}
return (array);
}
