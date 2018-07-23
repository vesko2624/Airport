objdir = bin/obj
dbdir = database
build:
	-mkdir -p $(objdir)
	-mkdir -p $(dbdir)
	-touch $(dbdir)/flight_records.txt
	-touch $(dbdir)/user_records.txt
	-make compile

clean:
	-rm -r -f bin

FLAGS = -include include/functions.h -c
src_files = $(wildcard src/*.cpp)
functions = src/functions.cpp include/functions.h
date = $(functions) src/date.cpp include/date.h
route = src/route.cpp include/route.h
flight_info = $(functions) $(route) $(date) src/flight_info.cpp include/flight_info.h
user_info = $(functions) $(route) $(date) src/user_info.cpp include/user_info.h
counter = $(flight_info) $(user_info) src/counter.cpp include/counter.h
recorder = src/recorder.cpp include/recorder.h src/flight_data.cpp include/flight_data.h src/user_data.cpp include/user_data.h $(counter) $(flight_info) $(user_info)
flight_data = $(functions) $(recorder)
user_data = $(functions) $(recorder)
path_finder = $(functions) $(flight_data) src/path_finder.cpp include/path_finder.h
menu_func = $(functions) $(path_finder) $(recorder) src/menu_func.cpp include/menu_func.h
main = $(functions) $(menu_func) src/main.cpp
OBJECTS = $(patsubst src/%.cpp,$(objdir)/%.o,$(src_files))

compile: $(OBJECTS)
	$(CXX) -o run $(OBJECTS)

$(objdir)/main.o: $(main)
	$(CXX) $(FLAGS) src/main.cpp -o $(objdir)/main.o

$(objdir)/functions.o: $(functions)
	$(CXX) $(FLAGS) src/functions.cpp -o $(objdir)/functions.o

$(objdir)/counter.o: $(counter)
	$(CXX) $(FLAGS) src/counter.cpp -o $(objdir)/counter.o

$(objdir)/date.o: $(date)
	$(CXX) $(FLAGS) src/date.cpp -o $(objdir)/date.o

$(objdir)/flight_data.o: $(flight_data)
	$(CXX) $(FLAGS) src/flight_data.cpp -o $(objdir)/flight_data.o

$(objdir)/flight_info.o: $(flight_info)
	$(CXX) $(FLAGS) src/flight_info.cpp -o $(objdir)/flight_info.o

$(objdir)/menu_func.o: $(menu_func)
	$(CXX) $(FLAGS) src/menu_func.cpp -o $(objdir)/Menu_func.o

$(objdir)/path_finder.o: $(path_finder)
	$(CXX) $(FLAGS) src/path_finder.cpp -o $(objdir)/path_finder.o

$(objdir)/recorder.o: $(recorder)
	$(CXX) $(FLAGS) src/recorder.cpp -o $(objdir)/recorder.o

$(objdir)/route.o: $(route)
	$(CXX) $(FLAGS) src/route.cpp -o $(objdir)/route.o

$(objdir)/user_data.o: $(user_data)
	$(CXX) $(FLAGS) src/user_data.cpp -o $(objdir)/user_data.o

$(objdir)/user_info.o: $(user_info)
	$(CXX) $(FLAGS) src/user_info.cpp -o $(objdir)/user_info.o