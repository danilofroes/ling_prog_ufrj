CXX = g++

CXXFLAGS = -std=c++11 -Wall -g

TARGET = programa_grafo

SRCS = main.cpp grafo.cpp vertice.cpp aresta.cpp terminal.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)