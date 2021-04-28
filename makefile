main: geometry.o body.o
	gcc geometry.o body.o -o geometry.exe
body.o: body.c
	gcc -c body.c
geometry.o: geometry.c
	gcc -c geometry.c
clean:
	rm -rf *.o main
