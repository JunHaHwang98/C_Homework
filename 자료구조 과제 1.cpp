#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int result = 0;
	
	printf("ù��° �ڿ����� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("�ι�° �ڿ����� �Է��ϼ��� : ");
	scanf("%d", &y);
	
	for(int i =  1; i <= x; i++)
	{	
		if(i % y != 0)
		{
		result = result + i;
		}
	}
	printf("ù��° ���ڱ����� ���� ���ϴµ� �ι�° ������ ����� ������ ���� %d�Դϴ�.", result);
	return 0;
}
