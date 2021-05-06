main: geometry.o body.o
	gcc geometry.o body.o -o geometry.exe
body.o:
	gcc -c src/lib/body.c
geometry.o: 
	gcc -c src/main/geometry.c
