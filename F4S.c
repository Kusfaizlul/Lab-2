#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

char name[50];
void ChildTask(int i){
	printf("\n Child number %d\n",i);
	printf("\n Please Enter Your Name : ");		
	fgets(name, sizeof(name), stdin);
	printf("\n Your Name Is ");
	puts(name);
}


int main (void){

	pid_t pid = fork();
	

	if  (pid != 0){
		printf("\n HELLO THEREE !! This Is Papa Talking XD \n");
		wait(NULL);
		printf(" All Child's Job is Done.. Well Done Child !! \n\n\n");
	} 
	
	else if (pid == 0 ){
		for (int i = 1; i < 5; i++){
			ChildTask(i);
			}
		}
		else
			printf("\n\n +++  UNABLE TO CREATE CHILD +++ \n\n");
	
	return 0;
}

