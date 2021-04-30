#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>

int main(int argc,char* argv[])
{
	link(argv[1],argv[2]);
	//check return value
	unlink(argv[1]);

	return 0;

}
