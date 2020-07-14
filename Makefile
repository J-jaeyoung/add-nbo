all: add-nbo

add-nbo: add-nbo.o
	g++ add-nbo.o -o add-nbo

add-nbo.o: add-nbo.cpp
	g++ -c add-nbo.cpp -o add-nbo.o

clean:
	rm -rf *.o add-nbo
