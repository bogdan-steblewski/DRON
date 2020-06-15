CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: Dron
	./Dron

Dron: obj/Dr3D_gnuplot_api.o obj/main.o obj/Tafla_Dno.o obj/MathWzorce.o obj/Dron.o obj/Macierz.o obj/Przeszkoda.o obj/Wektor3D.o
	g++ -o Dron obj/main.o obj/Dr3D_gnuplot_api.o obj/Tafla_Dno.o obj/MathWzorce.o obj/Dron.o obj/Macierz.o obj/Przeszkoda.o obj/Wektor3D.o -lpthread

obj/main.o: src/main.cpp inc/Dr3D_gnuplot_api.hh 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

inc/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/MathWzorce.o: src/MathWzorce.cpp inc/MathWzorce.hh
	g++ ${CPPFLAGS} -o obj/MathWzorce.o src/MathWzorce.cpp

obj/Tafla_Dno.o: src/Tafla_Dno.cpp inc/MathWzorce.hh inc/Tafla_Dno.hh
	g++ ${CPPFLAGS} -o obj/Tafla_Dno.o src/Tafla_Dno.cpp

obj/Dron.o: src/Dron.cpp inc/Dron.hh
	g++ ${CPPFLAGS} -o obj/Dron.o src/Dron.cpp

obj/Macierz.o: src/Macierz.cpp inc/Macierz.hh
	g++ ${CPPFLAGS} -o obj/Macierz.o src/Macierz.cpp

obj/Przeszkoda.o: src/Przeszkoda.cpp inc/Przeszkoda.hh
	g++ ${CPPFLAGS} -o obj/Przeszkoda.o src/Przeszkoda.cpp

obj/Wektor3D.o: src/Wektor3D.cpp inc/Wektor3D.hh
	g++ ${CPPFLAGS} -o obj/Wektor3D.o src/Wektor3D.cpp

clear:
	rm -f obj/*.o Dron

#a.out: Dron.o main.o Tafla_Dno.o MathWzorce.o Dr3D_gnuplot_api.o
#	g++ -o Dron.o Tafla_Dno.o MathWzorce.o Dr3D_gnuplot_api.o -lpthread

#main:src/main.cpp src/Dr3D_gnuplot_api.cpp src/Dron.cpp src/MathWzorce.cpp\
#src/Tafla_Dno.cpp inc/Dr3D_gnuplot_api.hh inc/Dron.hh\
#inc/MathWzorce.hh inc/Tafla_Dno.hh
#	g++ -c -g -Wall -pedantic -std=c++17 src/main.cpp src/Dr3D_gnuplot_api.cpp src/Dron.cpp #src/MathWzorce.cpp src/Tafla_Dno.cpp inc/Dr3D_gnuplot_api.hh inc/#Dron.hh inc/MathWzorce.hh inc/Tafla_Dno.hh inc/Draw3D_api_interface.hh
