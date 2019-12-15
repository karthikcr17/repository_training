.PHONY: clean
VPATH = source header out
CC = gcc
SOURCE = $(shell ls ./source/)
OBJECT = $(SOURCE:%.c=%.o)
HDR := ./header

#.RECIPEPREFIX = > 

%.o : %.c tree.h 
	$(CC) -c -g -Wall $^ -I $(HDR) 

	
exe : $(OBJECT) 
	$(CC) -g -Wall -o $@ $^
	mv *.o ./out

clean : 
	rm exe ./out/*.o


