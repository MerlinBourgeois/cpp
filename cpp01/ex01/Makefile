CXX = g++
CXXFLAGS = -std=c++11
TARGET = EPDC
SRCS = main.cpp \
	   zombieHorde.cpp \
	   Zombie.cpp \

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
