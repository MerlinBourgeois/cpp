CXX = g++                # Compilateur C++
CXXFLAGS = -std=c++11    # Options de compilation C++
TARGET = NG    # Nom du fichier exécutable
SRCS = NG.cpp   # Fichier source

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
