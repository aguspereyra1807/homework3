BIN: 
	mkdir -p bin/

run1: BIN
	g++ -std=c++20 -Wall EJ1/main.cpp EJ1/sources/*.cpp  -o bin/main1
	./bin/main1

run2: BIN
	g++ -std=c++20 -Wall EJ2/main.cpp EJ2/sources/*.cpp -o bin/main2
	./bin/main2

clean:
	rm -rf bin