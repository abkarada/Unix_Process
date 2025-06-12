#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>


int main(int argc, char **argv){
	if(mkfifo("myfile", 0666) == -1){
		fprintf(stderr,"Could not create fifo file\n");
		return -1;
	}

	printf("Opening...\n");
	int p_id = fork();
	int fd = open("myfile", O_RDWR);

	if(p_id == 0){	
	int x = atoi(argv[1]);
	if(write(fd, &x, sizeof(x)) ==  -1)return -2;
	}else { 
	int y;
	if(read(fd, &y, sizeof(y)) == -1) return -3;
	printf("Reading Val: %d \n", y);
	}
	close(fd);

	return 0;
}

