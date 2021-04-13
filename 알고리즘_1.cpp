#include <stdio.h>

int main (void) {
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++) {
		min = 9999; // 주어진 모든 숫자보다 가장 큰 숫자 아무거나
		for(j = i; j < 10; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		} 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < 10; i++) {
		printf("%d", array[i]);		
	}
	return 0;
}
