#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>
#include <dirent.h>
#include <string.h>

int main(int argc,char* argv[])
{
	DIR* dp;
	struct dirent * sdp;
	dp = opendir(argv[1]);
	if(dp==NULL){
		perror("opendir error");
		exit(1);
	}

	while((sdp=readdir(dp))!=NULL){
		if(strcmp(sdp->d_name,".")==0)
			continue;
		if(strcmp(sdp->d_name,"..")==0)		//delete . ..
			continue;
		printf("\t%s",sdp->d_name);
	}
	printf("\n");

	return 0;

}
