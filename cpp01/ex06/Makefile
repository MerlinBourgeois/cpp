CXX = g++
CXXFLAGS = -std=c++11
TARGET = HarlFilter
SRCS = main.cpp \
       Harl.cpp \

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
