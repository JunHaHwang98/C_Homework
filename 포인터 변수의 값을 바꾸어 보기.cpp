#include <stdio.h>

int main(void)
{
	int i = 10; // i의 값 10 
	int *p;
	p = &i; // 포인터 p가 가리키는 값이 i가 되었다. 
	printf("i = %d\n", i); // i의 값 10이 출력 
	*p = 20; // 포인터 p가 가리키는 주소의 값이 20으로 바뀌었다. 
	printf("i = %d\n", i); // 바뀐 값인 20이 출력된다. 
	return 0;
}
