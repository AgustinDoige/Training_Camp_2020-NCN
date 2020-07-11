CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99 -g
TARGET = main

all: main.cpp
	$(CC) -o $(TARGET) main.cpp

full: main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)