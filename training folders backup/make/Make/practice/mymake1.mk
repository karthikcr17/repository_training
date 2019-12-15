.PHONY : clean

CC = gcc

al : ec1 exe ec2

ec1 : 
	-echo "hi"		#ignore error

exe : main.o add.o
	$(CC) $^ -o $@	   	

main.o : main.c
	+$(CC) -c main.c #always make, enen on dry run

add.o : add.c
	$(CC) -c add.c 

ec2  :
	@echo "hello"	#silent

clean :
	rm *.o exe
