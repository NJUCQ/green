#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

int main(int argc,char* argv[])
{
	pid_t pid=fork();

	if(pid==-1){
		perror("fork error");
		exit(1);
	}else if(pid==0){
		execl("./test","test",NULL);     //relative path followed  `"a","b",   if parameter needed
		perror("exec error");  		//do document which created by myself
		exit(1);			//if you want execl to execute ls,add path /bin/ls
	}else if(pid>0){
		sleep(1);    //avoid contention of CPU
		printf("im parent:%d\n",getpid());
	}

	return 0;
}
