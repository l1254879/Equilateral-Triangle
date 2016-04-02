all:triangle.h triangle.o driver.o
	g++ -o a.out triangle.o driver.o 
triangle.o:triangle.cpp triangle.h
	g++ -c triangle.cpp
driver.o:driver.cpp triangle.h
	g++ -c driver.cpp

clean:
	rm -f *.o
