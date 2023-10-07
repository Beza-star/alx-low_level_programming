#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main function
 * @argc: number of the argument
 * @argv: array of pointer
 * return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
