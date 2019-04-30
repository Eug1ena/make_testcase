main: main.o in.o out.o
	g++ main.o in.o out.o -o main
main.o: main.cpp
	g++ -std=c++14 -O2 -c main.cpp
in.o: in.cpp
	g++ -std=c++14 -O2 -c in.cpp
out.o: out.cpp
	g++ -std=c++14 -O2 -c out.cpp
.PHONY: clean
clean:
	rm -f main.o in.o out.o
.PHONY: cleanf
cleanf:
	rm -f ./in/*.txt ./out/*.txt