#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>

int mian(int argc,char* argv[])
{
	struct stat sbuf;			//#include <unistd> #include <sys.stat.h> 
	int ret = lstat(argv[1],&sbuf);   	//stat chuantou link lstat display real property
	if(ret==-1){
		perror("stat error");
		exit(1);
	}
	
	if(S_ISREG(sbuf.st_mode)){
		printf("regular");
	}else if(S_ISDIR(sbuf.st_mode)){
	
		printf("regular");
	}
	return 0;

}
