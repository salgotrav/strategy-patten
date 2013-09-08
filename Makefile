all: output

output: strategy.o duck.o flyInterface.o quackInterface.o
	g++ strategy.o duck.o flyInterface.o quackInterface.o -o output

strategy.o: 	strategy.cpp
		g++ -c strategy.cpp -o strategy.o

duck.o: 	duck.cpp
		g++ -c duck.cpp -o duck.o

flyInterface.o: flyInterface.cpp
		g++ -c flyInterface.cpp -o flyInterface.o

quackInterface.o: 	quackInterface.cpp
			g++ -c quackInterface.cpp -o quackInterface.o

clean: 
	rm -rf *o output
