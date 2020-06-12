CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: Dron
	./Dron

Dron: obj/Dr3D_gnuplot_api.o obj/main.o obj/KsztaltyRzeczywiste.o obj/KsztaltyMatematyczne.o obj/Dron.o
	g++ -o Dron obj/main.o obj/Dr3D_gnuplot_api.o obj/KsztaltyRzeczywiste.o obj/KsztaltyMatematyczne.o obj/Dron.o -lpthread

obj/main.o: src/main.cpp inc/Dr3D_gnuplot_api.hh 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

inc/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/KsztaltyMatematyczne.o: src/KsztaltyMatematyczne.cpp inc/KsztaltyMatematyczne.hh
	g++ ${CPPFLAGS} -o obj/KsztaltyMatematyczne.o src/KsztaltyMatematyczne.cpp

obj/KsztaltyRzeczywiste.o: src/KsztaltyRzeczywiste.cpp inc/KsztaltyMatematyczne.hh inc/KsztaltyRzeczywiste.hh
	g++ ${CPPFLAGS} -o obj/KsztaltyRzeczywiste.o src/KsztaltyRzeczywiste.cpp

obj/Dron.o: src/Dron.cpp inc/Dron.hh
	g++ ${CPPFLAGS} -o obj/Dron.o src/Dron.cpp


clear:
	rm -f obj/*.o Dron

#a.out: Dron.o main.o KsztaltyRzeczywiste.o KsztaltyMatematyczne.o Dr3D_gnuplot_api.o
#	g++ -o Dron.o KsztaltyRzeczywiste.o KsztaltyMatematyczne.o Dr3D_gnuplot_api.o -lpthread

#main:src/main.cpp src/Dr3D_gnuplot_api.cpp src/Dron.cpp src/KsztaltyMatematyczne.cpp\
#src/KsztaltyRzeczywiste.cpp inc/Dr3D_gnuplot_api.hh inc/Dron.hh\
#inc/KsztaltyMatematyczne.hh inc/KsztaltyRzeczywiste.hh
#	g++ -c -g -Wall -pedantic -std=c++17 src/main.cpp src/Dr3D_gnuplot_api.cpp src/Dron.cpp #src/KsztaltyMatematyczne.cpp src/KsztaltyRzeczywiste.cpp inc/Dr3D_gnuplot_api.hh inc/#Dron.hh inc/KsztaltyMatematyczne.hh inc/KsztaltyRzeczywiste.hh inc/Draw3D_api_interface.hh
