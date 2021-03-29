#include <stdio.h>

int recur_fibo(int n)
{
  if (n <= 1)
    return n;
 
  return recur_fibo(n - 1) + recur_fibo(n - 2);
}

int main(void)
{
	int recur_fibo(int n);
	int n;
 
	printf("input : ");
	scanf("%d", &n);
    printf("output : %d", recur_fibo(n));
}
