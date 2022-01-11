CC=gcc
OBJECTS_MAIN=main.o edges.o nodes.o algo.o 
FLAGS= -Wall -g
EXE=graph

#target commands
all: $(EXE)
$(EXE): $(OBJECTS_MAIN) 
	$(CC) $(OBJECTS_MAIN) -o $(EXE)
edges.o: edges.c edges.h
	$(CC) $(FLAGS) -c edges.c
nodes.o: nodes.c nodes.h
	$(CC) $(FLAGS) -c nodes.c
algo.o: algo.c algo.h
	$(CC) $(FLAGS) -c algo.c
main.o: main.c edges.h nodes.h algo.h  
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o *.a *.so $(EXE)