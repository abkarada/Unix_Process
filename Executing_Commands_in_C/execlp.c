#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	int pid = fork();
	if(pid == -1) return -1;

	if(pid == 0){
		execlp("pingr","ping","-c","3","google.com",NULL);
	}else{
		int wstatus;
		wait(&wstatus);
		if(WIFEXITED(wstatus)){
			int exit_Status  = WEXITSTATUS(wstatus);
			if(exit_Status != 0){
				printf("Program Failed with exit status: %d\n", exit_Status);
				exit(exit_Status);
			}
		}
		printf("Sucess!...\n");
	}

}
