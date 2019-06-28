CXX = clang++

CXXFLAGS = -Wall -Wextra -std=c++11 

all: test

test: vertex.o face.o hedge.o vertex_test.o 
	$(CXX) $(CXXFLAGS) -o test vertex.o face.o hedge.o vertex_test.o 

vertex_test.o: ../test/vertex_test.cpp ../include/vertex.h ../include/face.h ../include/hedge.h
	$(CXX) $(CXXFLAGS) -c ../test/vertex_test.cpp

vertex.o: ../src/vertex.cpp ../include/vertex.h
	$(CXX) $(CXXFLAGS) -c ../src/vertex.cpp

face.o: ../src/face.cpp ../include/face.h
	$(CXX) $(CXXFLAGS) -c ../src/face.cpp

hedge.o: ../src/hedge.cpp ../include/hedge.h
	$(CXX) $(CXXFLAGS) -c ../src/hedge.cpp

clean:
	rm -rf test *.o



