#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	int id = fork();
	if(id == 0)
	{
		sleep(1);
	}
	printf("Current ID: %d, parent ID: %d\n", 
			getpid(), getppid());

	wait(NULL);
	return 0;
}
