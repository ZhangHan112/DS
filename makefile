all: HC

HC: HC.o OneMax.o
	g++ -ggdb -o HC HC.o OneMax.o Brute_Force.cpp

OneMax.o: OneMax.cpp
	g++ -ggdb -c OneMax.cpp

HC.o: HC.cpp
	g++ -ggdb -c HC.cpp

Brute_Force: Brute_Force.cpp
	g++ -ggdb -c Brute_Force.cpp

dep:
	echo "Do nothing"

clean:
	rm -f HC HC *.o
