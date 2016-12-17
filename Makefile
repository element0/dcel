
all: dcel

gob: src/gob.c
	gcc -g -c -Wall src/gob.c -o src/gob.o

dcel: src/domaincell*.c gob
	gcc -g -c -Wall src/domaincell.c -o src/domaincell.o

test_all: test_dcel

test_dcel: dcel
	gcc -g -Wall src/*.o test/dcel_test.c -o test/dcel_test

clean:
	rm src/*.o
