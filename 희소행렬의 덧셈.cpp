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
	int rows; // 행의 개수 
	int cols; // 열의 개수 
	int terms; // 항의 개수 
}SM; // 하나의 희소 행렬을 나타내는데 필요한 요소들 

SM sparse_matrix_add2(SM a, SM b) {
SM c;
int ca = 0, cb = 0, cc = 0; // 각 배열의 항목을 가리키는 인덱스 
if (a.rows != b.rows || a.cols != b.cols) {
	fprintf(stderr, "희소행렬의 크기에러\n");
	exit(1);	
	}

c.rows=a.rows;
c.cols=a.cols;
c.terms=0; // 0부터 시작

while(ca < a.terms && cb < b.terms) {
	// 어느 하나의 배열의 값들이 다 옮겨지면 끝 
	int inda = a.data[ca].row*a.cols+a.data[ca].col;
	int indb = b.data[cb].row*b.cols+b.data[ca].col;
	if(inda<indb) {
		c.data[cc++] = a.data[ca++]; // 1. a 배열 항목이 앞에 있음 
	}
	else if(inda==indb) {
		// 2. 같은 인덱스 번호
		if((a.data[ca].value+b.data[cb].value)!=0) {
			//같은 인덱스 번호의 값끼리 값이 0이면 다음 인덱스로 넘긴다 
		
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
	// 3. b 배열 항목이 앞에 있음
	c.data[cc++]=b.data[cb++] ;
	}
}
// 위에서 한 인덱스라도 끝났다면 남은 인덱스를 다 c 배열에 옮긴다.
for(;ca<a.terms;)
c.data[cc++]=a.data[ca++];

for(;cb<b.terms;)
c.data[cc++]=b.data[cb++];

c.terms=cc; // c의 항목 개수 입력
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
