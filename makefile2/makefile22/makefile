
arg=$(wildcard *.c)   #注意中间的空格
obj=$(patsubst %.c,%.o,$(arg))

ALL:a.out

hello.o:hello.c
	gcc -c hello.c -o hello.o
add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gcc -c sub.c -o sub.o
div1.o:div1.c
	gcc -c div1.c -o div1.o



a.out:$(obj)
	gcc $(obj) -o a.out

clean:
	-rm -rf $(obj) a.out
