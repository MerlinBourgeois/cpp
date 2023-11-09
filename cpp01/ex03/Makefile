CXX = g++
CXXFLAGS = -std=c++11
TARGET = VI
SRCS = main.cpp \
       Weapon.cpp \
	   HumanA.cpp \
	   HumanB.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
