#include <stdio.h>
#include <unistd.h>

int main()
{
        int i;
	alarm(1);

	for(int i=0;;i++){
		printf("%d\n",i);
	}

	return 0;
}

