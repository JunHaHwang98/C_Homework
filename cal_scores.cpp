#include <stdio.h>
#define MAX_ELEMENTS 100

int scores[MAX_ELEMENTS]; // �ڷᱸ��

int get_max_score(int n) // �л��� ���ڴ� n
{
	int i, largest;
	largest = scores[0]; // �˰���
	for (i = 1; i < n; i++)
	{
		if(scores [i] > largest)
		{
			largest = scores[i];
		}
	 }
	 return largest; 
 } 

int main()
{
	scores[0] = 60;
	scores[1] = 50;
	scores[2] = 90;
	
	printf("�ְ� ������ %d�Դϴ�.", get_max_score(3));
	
}


