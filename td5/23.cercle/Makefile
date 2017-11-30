all: principal run

run: principal
	./principal
	
principal: principal.o surface.o circonference.o

principal.o:
	gcc -c principal.c -Wall
surface.o:
	gcc -c surface.c -Wall
circonference.o:
	gcc -c circonference.c -Wall
clean : 
	rm -f *.o

allclean: clean
	rm -f principal
