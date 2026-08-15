CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = main

SRC = main.cpp Student.cpp Course.cpp
OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(OBJ) $(TARGET).exe 2>nul