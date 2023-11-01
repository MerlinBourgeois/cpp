CXX = g++                # Compilateur C++
CXXFLAGS = -std=c++11    # Options de compilation C++
TARGET = MAPB    # Nom du fichier exécutable
SRCS = MAPB.cpp   # Fichier source

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
