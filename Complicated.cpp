#include <stdio.h>

int main(void)

{
	int x = 100;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x += 50; // x = x + 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x -= 50; // x = x - 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x *= 50; // x = x * 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x /= 50; // x = / 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x %= 3;
	printf("���� x�� ���� %d�Դϴ�.", x); 
	return 0;
}