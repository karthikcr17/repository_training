#.RECIPEPREFIX = ?

#this is used when more than one makefiles using common variables

.PHONY : clean
#clean : 
#	-rm exec $(object)

object = main.o add.o

comp : exec ec targ1

exec : $(object) 	
	gcc -o exec $(object)	

# can specify dir using -I also
include ./dir2/makefile	 	

include ./dir1/mymake.mk

main.o : main.c;	gcc -c main.c	
add.o : add.c;	gcc -c add.c

clean :											 
	-rm exec targ1 $(object)
