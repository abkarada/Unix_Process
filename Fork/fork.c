#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int arg, char **argv){
	int id1 = fork();	
	int id2 = fork();
	printf("Hello:%d \n %d\n", id1, id2);
	return 0;
}
