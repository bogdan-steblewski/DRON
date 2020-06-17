CPPFLAGS= -c -g -Wall -pedantic -std=c++17 

__start__: example.out
	./example.out

example.out: Dr3D_gnuplot_api.o example.o
	g++ -o example.out example.o Dr3D_gnuplot_api.o -lpthread

example.o: src/example.cpp inc/API/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o example.o src/example.cpp

Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/API/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

Dr3D_gnuplot_api.hh: inc/API/Draw3D_api_interface.hh
	touch inc/API/Dr3D_gnuplot_api.hh

clear:
	rm example.out example.o Dr3D_gnuplot_api.o
