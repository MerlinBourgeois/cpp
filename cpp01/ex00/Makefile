CXX = g++
CXXFLAGS = -std=c++11
TARGET = BraiiiiiiinnnzzzZ
SRCS = main.cpp \
	   randomChump.cpp \
	   Zombie.cpp \
	   newZombie.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
