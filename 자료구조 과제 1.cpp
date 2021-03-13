#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int result = 0;
	
	printf("첫번째 자연수를 입력하세요 : ");
	scanf("%d", &x);
	printf("두번째 자연수를 입력하세요 : ");
	scanf("%d", &y);
	
	for(int i =  1; i <= x; i++)
	{	
		if(i % y != 0)
		{
		result = result + i;
		}
	}
	printf("첫번째 숫자까지의 합을 구하는데 두번째 숫자의 배수는 제외한 합은 %d입니다.", result);
	return 0;
}
