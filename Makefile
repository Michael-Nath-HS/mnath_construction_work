padre: padre.o main.o
	gcc -o padre padre.o main.o
padre.o: padre.c padre.h
	gcc -c padre.c
main.o: main.c padre.h
	gcc -c main.c
run: padre
	./padre