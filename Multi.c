#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main (void){
	for (int i = 0; i < 12; i++){
		pid_t pid = fork();

		if (pid == 0){
			printf("Child process => PPID=%d,PID=%d\n",getppid(), getpid());
			exit(0);}
		else {
			printf("Parent process => PID=%d\n",getpid());
			printf("Waiting for child to complete their processes .. \n");
			wait(NULL);
			printf("child process finished.\n");}
	/*	if ( i%2 == 0)
			printf("\n\n Waiting ..... \n\n");         */
	}
	return EXIT_SUCCESS;
}

