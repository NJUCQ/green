#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>

int mian(int argc,char* argv[])
{
	struct stat sbuf;			//#include <unistd> #include <sys.stat.h> 
	int ret = stat(argv[1],&sbuf);
	if(ret==-1){
		perror("stat error");
		exit(1);
	}
	else {
		printf("file size:%ld\n",sbuf.st_size);  //more property about sbuf refer man
	}						//why l

	return 0;

}
