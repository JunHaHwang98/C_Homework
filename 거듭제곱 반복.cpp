#include <stdio.h>

int slow_power(int x, int n)
{
	int i;
	int result = 1;
	
	for(i = 0; i < n; i++)
		result = result * x;
	return(result);
}

int main(void)
{
	int x = 0;
	int n = 0;
	int result = 0;
	printf("input : ");
	scanf("%d %d", &x, &n);
	result = slow_power(x, n);
	printf("output : %d", result);
	return 0;
}
