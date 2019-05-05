main.exe: main.cpp
	g++ -Wall -Werror -pedantic -g --std=c++11 main.cpp -o main.exe

clean :
	rm -rvf *.exe *~ *.out *.dSYM *.stackdump