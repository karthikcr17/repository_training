
.PHONY : clean 


CC = gcc
#can pass it through command line 
obj := main.o add.o 
LIB := ar rcs

all : exe1 liba.a exe2 

#default goal
exe1 : $(obj) 	 		
	$(CC) -o $@ $^		

#exe2 : $(obj)			
#	$(CC) -o $@ $^		 
#							

exe2 liba.a(main.o) : 
	$(CC) $% -o exe2


liba.a  : $(obj)
	$(LIB) -o $@ $(obj)

#add.o : add.c
#	$(CC) -c add.c

%.o : %.c
	$(CC) -c $?			#Both ^ and ? workng as same here

clean : 
	rm $(obj) exe1 
