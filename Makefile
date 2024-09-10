CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp TestManager.cpp tests/TestComms.cpp tests/TestHeaters.cpp tests\TestMotors.cpp tests\TestSensors.cpp tests\TestLimitSwitches.cpp tests\TestTouchScreen.cpp tests\TestMicrocontroller.cpp tests\TestBuzzers.cpp tests\TestLinuxProcessor.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = dna_extraction_tester

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)