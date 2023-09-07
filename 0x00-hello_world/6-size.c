#include <stdio.h>
/**
 * main - A program that prints a line with Printf function
 * Return: 0(sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long) size(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long) size(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) size(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) size(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long) size(e));
return (0);
}
