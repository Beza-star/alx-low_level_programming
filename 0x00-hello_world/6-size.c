#include<stdio.h>
int main(void)
{
	printf("Size of a char:%d byte(s)\n",size(char));
	printf("Size of an int:%d byte(s)\n",size(int));
	printf("Size of a long int:%d byte(s)\n",size(long int));
	printf("Size of a long long int:%d byte(s)\n",size(long long int));
	printf("Size of a float:%d byte(s)\n",size(float));
	return(0);
}
