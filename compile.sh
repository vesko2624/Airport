mkdir Objects
g++ -c main.cpp -o Objects/main.o
g++ -c Headers/Airport.cpp -o Objects/Airport.o
g++ -c Headers/Counter.cpp -o Objects/Counter.o
g++ -c Headers/Date.cpp -o Objects/Date.o
g++ -c Headers/FlightData.cpp -o Objects/FlightData.o
g++ -c Headers/FlightInfo.cpp -o Objects/FlightInfo.o
g++ -c Headers/Menu_func.cpp -o Objects/Menu_func.o
g++ -c Headers/PathFinder.cpp -o Objects/PathFinder.o
g++ -c Headers/Recorder.cpp -o Objects/Recorder.o
g++ -c Headers/Route.cpp -o Objects/Route.o
g++ -c Headers/UserData.cpp -o Objects/UserData.o
g++ -c Headers/UserInfo.cpp -o Objects/UserInfo.o
g++ -o run Objects/main.o Objects/Airport.o Objects/Counter.o Objects/Date.o Objects/FlightData.o Objects/FlightInfo.o Objects/Menu_func.o Objects/PathFinder.o Objects/Recorder.o Objects/Route.o Objects/UserData.o Objects/UserInfo.o