flags = -lglut -lGLU -lGL -march=native -funroll-loops -Wall -Wextra -std=c++11 -fopenmp

all: build

run: build
	./run

build: entity.o world.o plant.o herbivore.o carnivore.o main.o

main.o: main.cpp Classes/reference.h
	@g++ main.cpp -Wall -o run  $(flags) entity.o world.o plant.o herbivore.o carnivore.o

world.o: Classes/world.cpp
	@g++ Classes/world.cpp -c $(flags)

plant.o: Classes/plant.cpp
	@g++ Classes/plant.cpp -c $(flags)

herbivore.o: Classes/herbivore.cpp
	@g++ Classes/herbivore.cpp -c $(flags)

entity.o: Classes/entity.cpp Classes/reference.h
	@g++ Classes/entity.cpp -c $(flags)

carnivore.o: Classes/carnivore.cpp
	@g++ Classes/carnivore.cpp -c $(flags)

clean:
	@rm run *.o
