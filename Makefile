CC = g++
CFLAGS = -g -Wall
SFOLDER = source
EXECFOLDER = exec

all: $(SFOLDER)/main.cpp
	$(CC) $(CFLAGS) $^ -o $(EXECFOLDER)/main

clean:
	rm -rf $(EXECFOLDER)/*