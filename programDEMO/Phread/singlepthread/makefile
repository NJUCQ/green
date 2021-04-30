arg = $(wildcard *.c)
obj = $(patsubst *.c,*.o,$(arg))

myArgs = -Wall -g -lpthread
ALL:a.out

%.o:%.c
	gcc -c $< -o $@ $(myArgs)

a.out:$(obj)
	gcc $^ -o $@ $(myArgs)

clean:
	-rm -rf $(obj) a.out
