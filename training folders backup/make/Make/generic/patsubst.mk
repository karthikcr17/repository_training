
.PHONY : clean 

CC	= gcc
obj = $(patsubst source/%.c, object/%.o, $(wildcard source/*.c))
HDR = ./header

exe1 : $(obj) 	 		
	$(CC) $(obj) -o $@

./object/%.o : source/%.c 
	$(CC) -c $^ -I $(HDR)
	@mv *.o ./object

clean : 
	@rm $(obj) exe1 
