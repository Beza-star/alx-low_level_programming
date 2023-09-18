#include "main.h"
/**
 *  swap_int - swap the value of 'a' with 'b'
 *  @a: type int argument
 *  @b: type int  argument
 *  return: 0
 */
void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
