build:
	-mkdir -p Objects
	-mkdir -p DataBase
	-touch DataBase/Flight_Records.txt
	-touch DataBase/User_Records.txt
	-make compile

clean:
	-rm -r -f Objects
	-rm -r -f DataBase
	-rm -f run
	-rm -f run.exe

Airport = Headers/Airport.cpp Airport.h
Date = $(Airport) Headers/Date.cpp Classes/Date.h
Route = Headers/Route.cpp Classes/Route.h
FlightInfo = $(Airport) $(Route) $(Date) Headers/FlightInfo.cpp Classes/FlightInfo.h
UserInfo = $(Airport) $(Route) $(Date) Headers/UserInfo.cpp Classes/UserInfo.h
Counter = $(FlightInfo) $(UserInfo) Headers/Counter.cpp Classes/Counter.h
Recorder = Headers/Recorder.cpp Classes/Recorder.h Headers/FlightData.cpp Classes/FlightData.h Headers/UserData.cpp Classes/UserData.h $(Counter) $(FlightInfo) $(UserInfo)
FlightData = $(Airport) $(Recorder)
UserData = $(Airport) $(Recorder)
PathFinder = $(Airport) $(FlightData) Headers/PathFinder.cpp Classes/PathFinder.h
Menu = $(Airport) $(PathFinder) $(Recorder) Headers/Menu_func.cpp Classes/Menu_func.h
Main = $(Airport) $(Menu) main.cpp
OBJECTS = Objects/Airport.o Objects/Counter.o Objects/Date.o Objects/FlightData.o Objects/FlightInfo.o Objects/main.o Objects/Menu_func.o Objects/PathFinder.o Objects/Recorder.o Objects/Route.o Objects/UserData.o Objects/UserInfo.o

compile: $(OBJECTS)
	$(CXX) -o run $(OBJECTS)

Objects/main.o: $(Main)
	$(CXX) -c main.cpp -o Objects/main.o

Objects/Airport.o: $(Airport)
	$(CXX) -c Headers/Airport.cpp -o Objects/Airport.o

Objects/Counter.o: $(Counter)
	$(CXX) -c Headers/Counter.cpp -o Objects/Counter.o

Objects/Date.o: $(Date)
	$(CXX) -c Headers/Date.cpp -o Objects/Date.o

Objects/FlightData.o: $(FlightData)
	$(CXX) -c Headers/FlightData.cpp -o Objects/FlightData.o

Objects/FlightInfo.o: $(FlightInfo)
	$(CXX) -c Headers/FlightInfo.cpp -o Objects/FlightInfo.o

Objects/Menu_func.o: $(Menu)
	$(CXX) -c Headers/Menu_func.cpp -o Objects/Menu_func.o

Objects/PathFinder.o: $(PathFinder)
	$(CXX) -c Headers/PathFinder.cpp -o Objects/PathFinder.o

Objects/Recorder.o: $(Recorder)
	$(CXX) -c Headers/Recorder.cpp -o Objects/Recorder.o

Objects/Route.o: $(Route)
	$(CXX) -c Headers/Route.cpp -o Objects/Route.o

Objects/UserData.o: $(UserData)
	$(CXX) -c Headers/UserData.cpp -o Objects/UserData.o

Objects/UserInfo.o: $(UserInfo)
	$(CXX) -c Headers/UserInfo.cpp -o Objects/UserInfo.o