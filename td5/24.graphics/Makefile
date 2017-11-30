#construit le fichier binaire graphics.o
all: main run
graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags` -c graphics.c
liste.o:liste.c
	gcc -Wall `sdl-config --cflags` -c liste.c
simul.o: simul.c
	gcc -Wall `sdl-config --cflags` -c simul.c
main.o: main.c
	gcc -Wall `sdl-config --cflags` -c main.c
main: graphics.o main.o liste.o simul.o
	gcc -Wall `sdl-config --libs` -lSDL_ttf *.o -lm
run:
	./a.out
clean: 
	rm -f *.o
allclean: clean
	rm -f *.out
