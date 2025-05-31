#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>

int arr[7] = {1, 2, 3, 4, 5 ,6, 7};

int main(int argc, char **argv){
	int fd[2];
	int start, end;
	int piped_val = pipe(fd);

		if(piped_val == -1){
		printf("Pipe process could not done");
			return -1;
		}
	int id = fork();

		if(id == 0){
		start = 0; 
		end = sizeof(arr)/sizeof(int)/2 ;
		}else {			
		start = sizeof(arr)/sizeof(int)/2;
		end = sizeof(arr)/sizeof(int);
		}
	int sum = 0;
	for( int i = start; i <= end; i++){
		sum += arr[i];
	}
	if(id  == 0){
	close(fd[0]);
	write(fd[1], &sum, sizeof(int));
	close(fd[1]);
	}else {
	int buf;
	read(fd[0], &buf, sizeof(int));
	close(fd[0]);

	int total = sum + buf;
	printf("Total sum:%d \n", total);
	wait(NULL);
	}
			
			return 0;
}

