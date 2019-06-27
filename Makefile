all: test1p

test1p: test1p1.c test1p2.c test1p.h
	gcc -fsanitize=address test1p1.c test1p2.c  -o test1p

clean: 
	rm test1p
