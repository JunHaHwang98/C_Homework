#include <stdio.h>

int factorial(int n)
{
	int j, h = 1;
	for(j = n; j > 0; j--)
	{
		h = j * h;
	}
	return h;
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
