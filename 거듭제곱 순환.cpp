#include <stdio.h>

int power(int x, int n) 
{
	if(n == 0) return 1;
	else if((n%2) == 0)
		return power(x * x, n / 2);
	else return x * power (x * x, (n-1) / 2);
}

int main(void)
{
	int x = 0;
	int n = 0;
	int result = 0;
	
	printf("input : ");
	scanf("%d %d", &x, &n);
	result = power(x, n);
	printf("output : %d", result);
}
