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

OBJECTS = Objects/Airport.o Objects/Counter.o Objects/Date.o Objects/FlightData.o Objects/FlightInfo.o Objects/main.o Objects/Menu_func.o Objects/PathFinder.o Objects/Recorder.o Objects/Route.o Objects/UserData.o Objects/UserInfo.o

compile: $(OBJECTS)
	$(CXX) -o run $(OBJECTS)

Objects/main.o: main.cpp Classes/Menu_func.h
	$(CXX) -c main.cpp -o Objects/main.o

Objects/Airport.o: Airport.h Headers/Airport.cpp
	$(CXX) -c Headers/Airport.cpp -o Objects/Airport.o

Objects/Counter.o: Classes/Counter.h Classes/Counter.h Classes/FlightInfo.h Classes/UserInfo.h
	$(CXX) -c Headers/Counter.cpp -o Objects/Counter.o

Objects/Date.o: Airport.h Headers/Airport.cpp Classes/Date.h Headers/Date.cpp
	$(CXX) -c Headers/Date.cpp -o Objects/Date.o

Objects/FlightData.o: Airport.h Headers/Airport.cpp Classes/FlightData.h Headers/FlightData.cpp Classes/Counter.h Headers/Counter.cpp Classes/FlightInfo.h Headers/FlightInfo.cpp
	$(CXX) -c Headers/FlightData.cpp -o Objects/FlightData.o

Objects/FlightInfo.o: Airport.h Headers/Airport.cpp Classes/FlightInfo.h Headers/FlightInfo.cpp Classes/Route.h Headers/Route.cpp Classes/Date.h Headers/Date.cpp
	$(CXX) -c Headers/FlightInfo.cpp -o Objects/FlightInfo.o

Objects/Menu_func.o: Airport.h Headers/Airport.cpp Classes/Menu_func.h Headers/Menu_func.cpp Classes/FlightData.h Headers/FlightData.cpp Classes/UserData.h Headers/UserData.cpp Classes/Recorder.h Headers/Recorder.cpp
	$(CXX) -c Headers/Menu_func.cpp -o Objects/Menu_func.o

Objects/PathFinder.o: Classes/PathFinder.h Headers/PathFinder.cpp Airport.h Headers/Airport.cpp Classes/FlightData.h Headers/FlightData.cpp
	$(CXX) -c Headers/PathFinder.cpp -o Objects/PathFinder.o

Objects/Recorder.o: Classes/Recorder.h Headers/Recorder.cpp Classes/FlightInfo.h Headers/FlightInfo.cpp Classes/UserInfo.h Headers/UserInfo.cpp
	$(CXX) -c Headers/Recorder.cpp -o Objects/Recorder.o

Objects/Route.o: Classes/Route.h Headers/Route.cpp
	$(CXX) -c Headers/Route.cpp -o Objects/Route.o

Objects/UserData.o: Airport.h Headers/Airport.cpp Classes/UserData.h Headers/UserData.cpp Classes/Counter.h Headers/Counter.cpp Classes/UserInfo.h Headers/UserInfo.cpp
	$(CXX) -c Headers/UserData.cpp -o Objects/UserData.o

Objects/UserInfo.o: Airport.h Headers/Airport.cpp Classes/UserInfo.h Headers/UserInfo.cpp Classes/Route.h Headers/Route.cpp Classes/Date.h Headers/Date.cpp
	$(CXX) -c Headers/UserInfo.cpp -o Objects/UserInfo.o