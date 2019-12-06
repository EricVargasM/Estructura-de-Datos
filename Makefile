ldl.o: ldl.c
	gcc ldl.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o ldl.o
	gcc main.o ldl.o
run: a.out
	./a.out
clean:
	rm -f a.out main.o ldl.o
