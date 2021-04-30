
arg=$(wildcard *.c)   #注意中间的空格
obj=$(patsubst %.c,%.o,$(arg))

ALL:a.out

hello.o:hello.c
	gcc -c $< -o $@
add.o:add.c
	gcc -c $< -o $@
sub.o:sub.c
	gcc -c $< -o $@
div1.o:div1.c
	gcc -c $< -o $@



a.out:$(obj)
	gcc $^ -o $@    #注意这边是上尖括号

clean:
	-rm -rf $(obj) a.out
