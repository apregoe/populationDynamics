CC = g++
CFLAGS = -g -Wall -Wno-c++11-extensions
CFLAGASS = -S -O1
SFOLDER = source
EXECFOLDER = exec

all: $(SFOLDER)/main.cpp
	$(CC) $(CFLAGS) $^ -o $(EXECFOLDER)/main
ass: $(SFOLDER)/main.cpp
	$(CC) $(CFLAGS) $(CFLAGASS) $^ -o $(EXECFOLDER)/main.s 
clean:
	rm -rf $(EXECFOLDER)/*
