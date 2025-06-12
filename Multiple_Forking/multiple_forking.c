#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv){

	printf("Starter of a program \n");

	int id1 = fork();
	int id2 = fork();

	if(id1 == 0){
		if(id2 == 0){
			printf("Child of a child process\n");
		}else { 
			printf("Main Process's First Child Process \n");
		}
	}else {
		if(id2 == 0){
			printf("Main Process's Second Child Process \n");
		}else{
			printf("Main Process \n");
		}
	}

}
