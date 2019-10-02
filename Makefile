CFLAGS=-Wall -std=c99 -ggdb
 
app: main.c
	gcc -o app $(CFLAGS) main.c

.PHONY: clean
clean:
	rm -f app
