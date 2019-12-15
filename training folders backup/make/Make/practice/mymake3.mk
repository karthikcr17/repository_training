
.PHONY : clean 

CC = gcc
#obj = main.c add.c 
obj = main.o add.o 

%.o : %.c
	$(CC) -c $^	
exe : $(obj) 	 		
	$(CC) $(obj) -o $@	


clean : 
	rm -f $(obj) exe 
