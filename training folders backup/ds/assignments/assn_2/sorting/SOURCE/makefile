app : main.o mergesort.o sorting.o quicksort.o myatoi.o
	gcc -o app -g main.o mergesort.o sorting.o quicksort.o myatoi.o
main.o: main.c
	gcc -c main.c -g
mergesort.o: mergesort.c
	gcc -c mergesort.c -g
sorting.o: sorting.c 
	gcc -c sorting.c -g
quicksort.o: quicksort.c
	gcc -c quicksort.c -g
myatoi.o: myatoi.c
	gcc -c myatoi.c -g
clean:
	rm main.o mergesort.o sorting.o quicksort.o myatoi.o
