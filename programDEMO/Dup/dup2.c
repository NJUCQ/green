#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>

int main(int argc,char* argv[])
{
	int fd1 = open(argv[1],O_RDWR);
	int fd2 = open(argv[2],O_RDWR);
	int ret = dup2(fd1,fd2);		//return new descriptor fd2
	printf("%d\n",ret);
	int fdret = write(fd2,"123456",7);      //write to the file fd1 point
	printf("%d\n",fdret);
	dup2(fd1,STDOUT_FILENO);		//stdout >> file fd1 point
	return 0;

}
