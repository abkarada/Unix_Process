#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char **argv){
    pid_t pid = fork();

    if (pid == 0) {
        // child process
        execl("../Multiple_Forking/out", "out", NULL);
        perror("exec başarısız");          exit(1);
    } else if (pid > 0) {
        // parent process
        wait(NULL);  
	printf("Child process tamamlandı.\n");
    } else {
        perror("fork başarısız");
    }

    return 0;
}

