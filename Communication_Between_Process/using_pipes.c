#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int fd[2];
	
	int return_value = pipe(fd);

	if (return_value == -1){
		printf("An error occured with opening the pipe \n");
		return 1;
	}

	int id = fork();

	if (id == 0){
		close(fd[0]);
		int x;
		printf("Input a number:");
		scanf("%d", &x);
		write(fd[1], &x, sizeof(int));
		close(fd[1]);
	} else {
		close(fd[1]);
		int y;
		read(fd[0], &y, sizeof(int));
		close(fd[0]);
		printf("Got from child process %d \n", y);
	}
}

