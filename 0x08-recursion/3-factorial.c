#include "main.h"
/**factorial - prints factorial
 * @n: input integer
 * return: 0
 */
int factorial(int n)
{  
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
