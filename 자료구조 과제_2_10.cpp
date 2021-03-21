#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <time.h>

unsigned int randr(unsigned int min, unsigned int max){
	double scaled = (double)rand()/RAND_MAX;
	return (max - min + 1) * scaled + min;
}

do_sleep(clock_t wait){
	clock_t goal;
	goal = wait + clock();
	while(goal > clock());
}

int main() {
	
	srand(time(NULL));
	int i;
	int ten[10];
	for(i = 0; i < 10; i++){
		ten[i] = i+1;
	}	
		
	unsigned int key = randr(1, 10);
	
	clock_t startime = (double)clock();
	
	for(i = 0; i < 10; i++){
		do_sleep(1);
		if(key == ten[i]){
			break;
		}
	}
	
	printf("%0.4fs\n", (float)(clock() - startime) /CLOCKS_PER_SEC);
	
	return 0;
}
