#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3
#define MAX_TERMS 10

typedef struct {
	int row;
	int col;
	int value;
} element;

typedef struct SparseMatrix {
	element data[MAX_TERMS];
	int rows; // ���� ���� 
	int cols; // ���� ���� 
	int terms; // ���� ���� 
}SM; // �ϳ��� ��� ����� ��Ÿ���µ� �ʿ��� ��ҵ� 

SM sparse_matrix_add2(SM a, SM b) {
SM c;
int ca = 0, cb = 0, cc = 0; // �� �迭�� �׸��� ����Ű�� �ε��� 
if (a.rows != b.rows || a.cols != b.cols) {
	fprintf(stderr, "�������� ũ�⿡��\n");
	exit(1);	
	}

c.rows=a.rows;
c.cols=a.cols;
c.terms=0; // 0���� ����

while(ca < a.terms && cb < b.terms) {
	// ��� �ϳ��� �迭�� ������ �� �Ű����� �� 
	int inda = a.data[ca].row*a.cols+a.data[ca].col;
	int indb = b.data[cb].row*b.cols+b.data[ca].col;
	if(inda<indb) {
		c.data[cc++] = a.data[ca++]; // 1. a �迭 �׸��� �տ� ���� 
	}
	else if(inda==indb) {
		// 2. ���� �ε��� ��ȣ
		if((a.data[ca].value+b.data[cb].value)!=0) {
			//���� �ε��� ��ȣ�� ������ ���� 0�̸� ���� �ε����� �ѱ�� 
		
		c.data[cc].row=a.data[ca].row;
		c.data[cc].col=a.data[ca].col;
		c.data[cc++].value=a.data[ca++].value+b.data[cb++].value;
		}
		else{
			ca++;
			cb++;
		}
}
else{
	// 3. b �迭 �׸��� �տ� ����
	c.data[cc++]=b.data[cb++] ;
	}
}
// ������ �� �ε����� �����ٸ� ���� �ε����� �� c �迭�� �ű��.
for(;ca<a.terms;)
c.data[cc++]=a.data[ca++];

for(;cb<b.terms;)
c.data[cc++]=b.data[cb++];

c.terms=cc; // c�� �׸� ���� �Է�
return c;
}

int main() {
	int r11, r12, r13, c11, c12, c13, v11, v12, v13;
	int r21, r22, r23, c21, c22, c23, v21, v22, v23;
	printf("input m1 element : ");
	scanf("%d %d %d %d %d %d %d %d %d", &r11, &r12, &r13, &c11, &c12, &c13, &v11, &v12, &v13);
	printf("input m2 element : ");
	scanf("%d %d %d %d %d %d %d %d %d", &r21, &r22, &r23, &c21, &c22, &c23, &v21, &v22, &v23);
	SM m1 = {{{r11, r12, r13}, {c11, c12, c13}}, v11, v12, v13};
	SM m2 = {{{r21, r22, r23}, {c21, c22, c23}}, v21, v22, v23};
	SM m3;
	
	m3 = sparse_matrix_add2(m1, m2);
	
	printf("-----output-----\n");
	int i;
	for(i = 0; i < m3.terms; i++)
	printf("(%d, %d)\'%d\'\n", m3.data[i].row, m3.data[i].col, m3.data[i].value);
}
