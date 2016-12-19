all: dcel

gob: src/gob.c
	gcc -g -c -Wall src/gob.c -o src/gob.o

dcel: src/dcel*.c gob
	gcc -g -c -Wall src/dcel.c -o src/dcel.o
	g++ -g -c -Wall src/dcel.cpp -o src/dcel.oo

test_all: test_dcel

test_dcel: dcel
	gcc -g -Wall src/*.o test/dcel_test.c -o test/dcel_test
	g++ -g -Wall src/dcel.oo test/dcel_test.cpp -o test/dcel_test_pp

clean:
	rm src/*.o
