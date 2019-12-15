.PHONY: clean
VPATH = source header out
CC = gcc
SOURCE = $(shell ls ./source/)
OBJECT = $(SOURCE:%.c=%.o)
HDR = ./header

%.o : %.c 
	@$(CC) -c $^ -I $(HDR)  

	
readelf : $(OBJECT) 
	@$(CC) -o $@ $^
	@mv *.o ./out

clean : 
	@rm readelf ./out/*.o


