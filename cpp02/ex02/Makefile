CXX = g++
CXXFLAGS = -std=c++11
TARGET = MOPP
SRCS = main.cpp \
       Fixed.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
