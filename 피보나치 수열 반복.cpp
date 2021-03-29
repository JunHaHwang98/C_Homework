#include <stdio.h>

int iter_fibo(int n)
{
  int i;
  int f0, f1, fi;
 
  f0 = 0;
  f1 = 1;
 
  if (n == 0) return 0;
  else if (n == 1) return 1;
 
  else
  {
    for (i = 2; i <= n; i++)
    {
      fi = f0 + f1;
      f0 = f1;
      f1 = fi;
    }
  }
  return fi;
}

int main(void)
{
	int iter_fibo(int n);
	int n;
	printf("input : ");
	scanf("%d", &n);
	printf("output : %d", iter_fibo(n));
}
