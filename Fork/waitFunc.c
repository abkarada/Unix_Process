#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int arg, int **argv){
	int id = fork();
	int n;

	if (id == 0){
		n = 1;
	}else{
		n = 6;
	}
	if(id != 0){
	wait();
	}
	int i;
	for(int i = n; i < n + 5 ;i++){
		printf("%d ", i);
		fflush(stdout);
		}
	printf("\n");

	return 0;
}

