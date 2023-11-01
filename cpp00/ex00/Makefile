CXX = g++                # Compilateur C++
CXXFLAGS = -std=c++11    # Options de compilation C++
TARGET = megaphone    # Nom du fichier exécutable
SRCS = megaphone.cpp   # Fichier source

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
