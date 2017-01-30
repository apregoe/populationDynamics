CC = g++
CFLAGS = -g -Wall -Wno-c++11-extensions
SFOLDER = source
EXECFOLDER = exec

all: $(SFOLDER)/main.cpp
	$(CC) $(CFLAGS) $^ -o $(EXECFOLDER)/main

clean:
	rm -rf $(EXECFOLDER)/*