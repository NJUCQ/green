#include <unistd.h>  //服务于open
#include <fcntl.h>	//O_RDONLY的头文件
#include <stdio.h>

int main()
{
	int fd;
	fd=open("./open.cp",O_RDONLY | O_CREAT | O_TRUNC,0644);    //存在就截断打开，不存在就创建，权限是rw-r-r--
	printf("%d\n",fd);

	close(fd);
	return 0;   	//结果是返回文件描述符3，并且生成一个open.txt文件
}
