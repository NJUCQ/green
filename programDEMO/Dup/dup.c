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
	int fd = open(argv[1],O_RDONLY);
	int newfd = dup(fd);
	printf("%d\n",newfd);
	return 0;

}
