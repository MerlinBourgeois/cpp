CXX = g++
CXXFLAGS = -std=c++11
TARGET = HARL
SRCS = main.cpp \
       Harl.cpp \

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
