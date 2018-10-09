IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11 -g

ODIR=../src
LDIR =../lib

LIBS=-lm

_OBJ = point_t.o sky_t.o greedy_t.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: greedy

$(ODIR)/point_t.o: $(ODIR)/point_t.cpp $(IDIR)/point_t.hpp 
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/sky_t.o: $(ODIR)/sky_t.cpp $(IDIR)/sky_t.hpp $(IDIR)/point_t.hpp  
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(ODIR)/greedy_t.o: $(ODIR)/greedy_t.cpp $(IDIR)/greedy_t.hpp $(IDIR)/sky_t.hpp $(IDIR)/point_t.hpp
	$(CC) -c -o $@ $< $(CFLAGS)	
	
$(ODIR)/main.o: $(ODIR)/main.cpp $(IDIR)/greedy_t.hpp $(IDIR)/sky_t.hpp $(IDIR)/point_t.hpp
	$(CC) -c -o $@ $< $(CFLAGS)		

greedy: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
	./greedy
	./concorde CyA.tsp

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(INCDIR)/*~