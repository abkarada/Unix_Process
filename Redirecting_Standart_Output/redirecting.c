#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>

#define STDOUT_FILENO 1

int main(int argc, char **argv){
	int pid = fork();
	
	if(pid == 0){
	int file = open("Execute_Result.txt", O_WRONLY| O_CREAT,0666);
		if(file == -1)return 1;
		dup2(file, STDOUT_FILENO);
		execl("../Multiple_Forking/out", "out", NULL);
		}else {
		int wstatus;
		wait(&wstatus);
		if(WIFEXITED(wstatus)){
			int status_code = WEXITSTATUS(wstatus);
				if(status_code == 1){
					printf("An Error Occured...\n");
					exit(EXIT_FAILURE);
				}
		}
	}


}
