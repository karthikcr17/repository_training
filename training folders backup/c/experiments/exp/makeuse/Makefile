.PHONY:clean

app: a.o b.o
	gcc -o app a.c b.c
%.o:%.c
	gcc -c $<
clean:
	rm *.o
