PROG = imd0030
CC = g++
ROOT_DIR:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
CPPFLAGS = -O0 -g -Wall -ansi -pedantic -I$(ROOT_DIR)/include
OBJS = main.o relator.o milhao.o troco.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) 

main.o: 
	$(CC) $(CPPFLAGS) -c src/main.cpp

relator.o: include/relator.hpp
	$(CC) $(CPPFLAGS) -c src/relator.cpp

milhao.o: include/milhao.hpp
	$(CC) $(CPPFLAGS) -c src/milhao.cpp

troco.o: include/troco.hpp
	$(CC) $(CPPFLAGS) -c src/troco.cpp

clean:
	rm -f *.o