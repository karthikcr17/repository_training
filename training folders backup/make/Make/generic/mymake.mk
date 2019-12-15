.PHONY : clean

VPATH = source object header
#vpath %.c ./source
#vpath %.o ./object
#vpath %.h ./header
CC = gcc
SOURCE := $(shell ls ./source/)
OBJECT := $(SOURCE:%.c=%.o)
HDR := ./header

#.RECIPEPREFIX = > 

%.o : %.c header.h 
	$(CC) -c $^  -I $(HDR) 

	
exe : $(OBJECT) 
	$(CC) -o $@ $^
	mv *.o ./object/

clean : 
	rm exe ./object/*.o
