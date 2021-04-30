#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <stdlib.h>
#include <pthread.h>
#include <dirent.h>
#include <string.h>

void sys_err(const char* str)
{
	perror(str);
	exit(1);
}

int main(int argc,char* argv[])
{
	char *p=NULL;
	int fd;
	fd=open("testmap",O_RDWR|O_CREAT|O_TRUNC);   //文件可读写，不存在则创建，存在则截断，权限是644
	if(fd==-1){
		sys_err("open error");
	}
	
	/*
	lseek(fd,10,SEEK_END);   //从结尾开始拓展10个字节
	write(fd,"\0",1);        //写操作才能实际扩大上一步文件，两个函数等价于ftruncate函数
	*/
	ftruncate(fd,10);
	int len = lseek(fd,0,SEEK_END);    //从头开始获取文件大小

	p = mmap(NULL,len,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);      //NULL随机指定内存，len文件大小，读写权限，方式，0全部覆盖
	if(p == MAP_FAILED){
		sys_err("mmap error");
	}

	//使用p对文件进行读写操作
	strcpy(p,"hello mmap");    //写操作
	printf("-----%s\n",p);

	int ret = munmap(p,len);
	if(ret==1){
		sys_err("munmap error");
	}

	return 0;

}
