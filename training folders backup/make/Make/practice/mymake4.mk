.PHONY : clean
VPATH = set

CC = gcc

exe : main.o add.o
	$(CC) $^ -o $@	   		#check for ignore errors and keep going	
#	echo "hii"

main.o : main.c
#	$(CC) -a main.c 	

add.o : add.c
#	$(CC) -c add.c 

clean :
	rm *.o exe
