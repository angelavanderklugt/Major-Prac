all:make

make: Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	clang++ -std=c++11 main.cpp Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	./a.out

Hunter.o: Hunter.cpp Hunter.h Event.h Story.h
	g++ -c Hunter.cpp

Terrain.o: Terrain.cpp Terrain.h
	g++ -c Terrain.cpp

Mountain.o: Mountain.cpp Mountain.h
	g++ -c Mountain.cpp

Savanna.o: Savanna.cpp Savanna.h
	g++ -c Savanna.cpp

Jungle.o: Jungle.cpp Jungle.h
	g++ -c Jungle.cpp

Test1: Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	g++ -std=c++11 main.cpp Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o -o test1
	./test1 < input-1-1.txt > output-1-1.txt

Test2: Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	g++ -std=c++11 main.cpp Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o -o test2
	./test2 < input-2-1.txt > output-2-1.txt

Test: Test1 Test2

clean:
	rm -rf *o make

#Regression Testing Area

#Hunter, event and story, as event and story are both just .h files
RTest1: Hunter.o
	g++ -std=c++11 mainHuntEvenStor.cpp Hunter.o
	./a.out

#Terrain
RTest2: Terrain.o
	g++ -std=c++11 mainTerrain.cpp Terrain.o
	./a.out

#Jungle, which includes Terrain
RTest3: Jungle.o Terrain.o
	g++ -std=c++11 mainJungle.cpp Jungle.o Terrain.o
	./a.out

#Mountain, includes Terrain
RTest4: Mountain.o Terrain.o
	g++ -std=c++11 mainMountain.cpp Mountain.o Terrain.o
	./a.out

#Savanna, includes Terrain
RTest5: Savanna.o Terrain.o
	g++ -std=c++11 mainSavanna.cpp Savanna.o Terrain.o
	./a.out
