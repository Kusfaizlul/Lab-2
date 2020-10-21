#include <stdlib.h>   /* needed to define exit()*/
#include <unistd.h>   /* For function fork () and getpid()*/
#include <stdio.h>    /* For printf() */
#include <sys/wait.h> /* for wait function */

int main(int arggc, char**argv){

	int pid; /*ProcessID*/
	
	switch (pid = fork()){
	
	case 0: /* child with pid = 0*/
		printf("i am the chil process:pid=%d\n",getpid());
		break;
	
	default: /* Parents any digits */
		wait(NULL);
		printf("i am the parent process:pid=%d,child pid=%d\n",getpid(),pid);
		break;
	case -1 : /* Error execption */
		perror("fork");
		exit(1);

	}
	exit(0);
}
