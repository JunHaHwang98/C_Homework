#include <stdio.h>

int factorial(int n)
{
	if(n <= 1)
	return 1;
	else
	return(n * factorial(n-1));
}

int main(void)
{
	int n = 0;
	int fac = 0;
	
	printf("input : ");
	scanf("%d", &n);
	
	fac = factorial(n);
	printf("output : %d", fac);
}
