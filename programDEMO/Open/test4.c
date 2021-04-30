
#include <unistd.h>  //服务于open
#include <fcntl.h>	//O_RDONLY的头文件
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	int fd;
	fd=open("./open.txt4",O_RDONLY);
	printf("fd=%d,error=%d:%s\n",fd,errno,strerror(errno));         //error当成系统的全局变量，可以描打开文件失败的错误头文件errno,输出为2
							//strerror翻译错误
	close(fd);
	return 0;
}
