PROG = imd0030
CC = g++
BUD = build/
ROOT_DIR:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
CPPFLAGS =  -O0 -g -Wall -ansi -pedantic -I$(ROOT_DIR)/include
OBJS = $(BUD)main.o $(BUD)relator.o $(BUD)milhao.o $(BUD)troco.o

bin/$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG) 

$(BUD)main.o: 
	$(CC) $(CPPFLAGS) -c src/main.cpp  -o $(BUD)main.o

$(BUD)relator.o: include/relator.hpp
	$(CC) $(CPPFLAGS) -c src/relator.cpp -o $(BUD)relator.o

$(BUD)milhao.o: include/milhao.hpp
	$(CC) $(CPPFLAGS) -c src/milhao.cpp -o $(BUD)milhao.o

$(BUD)troco.o: include/troco.hpp
	$(CC) $(CPPFLAGS) -c src/troco.cpp -o $(BUD)troco.o

clean:
	rm -f $(BUD)*.o