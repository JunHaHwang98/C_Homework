#include <stdio.h>

int main(void)
{
	int i = 10; // i�� �� 10 
	int *p;
	p = &i; // ������ p�� ����Ű�� ���� i�� �Ǿ���. 
	printf("i = %d\n", i); // i�� �� 10�� ��� 
	*p = 20; // ������ p�� ����Ű�� �ּ��� ���� 20���� �ٲ����. 
	printf("i = %d\n", i); // �ٲ� ���� 20�� ��µȴ�. 
	return 0;
}
