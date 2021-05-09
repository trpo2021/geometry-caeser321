main: geometry.a
	gcc geometry.a -o geometry.exe
body.o:
	gcc -c -I src/lib src/lib/body.c
geometry.o:
	gcc -c -I src/lib src/main/geometry.c
geometry.a: body.o geometry.o
	ar rcs geometry.a body.o geometry.o
clean:
	rm -rf *.o
