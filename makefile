BIN: 
	mkdir -p bin/

run1: BIN
	g++ -std=c++20 -Wall EJ1/main.cpp EJ1/sources/*.cpp  -o bin/main1
	./bin/main1

run2: BIN
	g++ -std=c++20 -Wall EJ2/main.cpp EJ2/sources/GeometricShapes.cpp -o bin/main2
	./bin/main2

run3: BIN
	g++ -std=c++20 -Wall EJ3/main.cpp EJ3/sources/Class2.cpp -o bin/main3
	./bin/main3
	
clean:
	rm -rf bin