all: test.c
	gcc -o test test.c -I/home/phobia/libhangul -L/home/phobia/libhangul/hangul/.libs -lhangul -Wl,-rpath,/home/phobia/libhangul/hangul/.libs
