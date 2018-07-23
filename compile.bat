@echo off
mkdir bin\obj
mkdir database
g++ -c -include include/functions.h src/main.cpp -o bin/obj/main.o
g++ -c -include include/functions.h src/functions.cpp -o bin/obj/functions.o
g++ -c -include include/functions.h src/counter.cpp -o bin/obj/counter.o
g++ -c -include include/functions.h src/date.cpp -o bin/obj/date.o
g++ -c -include include/functions.h src/flight_data.cpp -o bin/obj/flight_data.o
g++ -c -include include/functions.h src/flight_info.cpp -o bin/obj/flight_info.o
g++ -c -include include/functions.h src/menu_func.cpp -o bin/obj/menu_func.o
g++ -c -include include/functions.h src/path_finder.cpp -o bin/obj/path_finder.o
g++ -c -include include/functions.h src/recorder.cpp -o bin/obj/recorder.o
g++ -c -include include/functions.h src/route.cpp -o bin/obj/route.o
g++ -c -include include/functions.h src/user_data.cpp -o bin/obj/user_data.o
g++ -c -include include/functions.h src/user_info.cpp -o bin/obj/user_info.o
g++ -o run bin/obj/main.o bin/obj/functions.o bin/obj/counter.o bin/obj/date.o bin/obj/flight_data.o bin/obj/flight_info.o bin/obj/menu_func.o bin/obj/path_finder.o bin/obj/recorder.o bin/obj/route.o bin/obj/user_data.o bin/obj/user_info.o
PAUSE