#include <unistd.h>  //服务于open
#include <fcntl.h>	//O_RDONLY的头文件
#include <stdio.h>

int main()
{
	int fd;
	fd=open("./open.txt\n",O_RDONLY);
	printf("%d",fd);

	close(fd);
	return 0;
}
