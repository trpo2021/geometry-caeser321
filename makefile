main: geometry.o body.o
	gcc geometry.o body.o -o geometry.exe
body.o:
	gcc -c -I src/lib src/lib/body.c
geometry.o:
	gcc -c -I src/lib src/main/geometry.c
