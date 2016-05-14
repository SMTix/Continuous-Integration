main: main.o functional.o
	gcc -o main main.o functional.o -lm

main.o: main.c
	gcc -c main.c -lm

functional.o: functional.c
	gcc -c functional.c -lm

.PHONY: clean
clean:
	rm -rf *.o main