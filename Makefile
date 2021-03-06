INCLUDE=-I ./thirdparty
INCLUDE1=-I ./src

all: bin/main bin/test

bin/main: obj/main.o obj/functional.o
	mkdir bin
	gcc -o bin/main obj/main.o obj/functional.o -Wall -lm

bin/test: obj/functional_test.o obj/main_test.o
	gcc -o bin/test obj/main_test.o obj/functional_test.o obj/functional.o -Wall -lm

test:	bin/test
	./bin/test

obj/main.o: src/main.c
	mkdir obj
	gcc $(INCLUDE1) -c src/main.c -Wall -o obj/main.o

obj/functional.o: src/functional.c
	gcc $(INCLUDE1) -c src/functional.c -Wall -o obj/functional.o

obj/main_test.o: test/main_test.c
	gcc $(INCLUDE) -c test/main_test.c -Wall -o obj/main_test.o

obj/functional_test.o: test/functional_test.c
	gcc $(INCLUDE1) $(INCLUDE) -c test/functional_test.c -Wall -o obj/functional_test.o -lm

.PHONY: clean
clean:
	rm -f -r bin/ obj/