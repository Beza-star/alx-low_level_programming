#include "main.h"
/**
 * create_array - the function will ccreate an array of type 
 * @size: size of the array
 * @c: charcter
 * return: NULL
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
