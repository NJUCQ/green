dependence=$(wildcard *.c)
obj=$(patsubst %.c,%.o,$(dependence))

ALL:a.out

%.o:%.c
	gcc -c $< -o $@

a.out:$(obj)
	gcc $^ -o $@

clean:
	-rm -rf $(obj) a.out
