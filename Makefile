
indent: indent.o 
	g++ -o indent indent.o 
	
unindent: unindent.o
	g++ -o unindent unindent.o

tests: tests.o
	g++ -o tests tests.o 

unindent.o: unindent.cpp
	g++ -c unindent.cpp

indent.o: indent.cpp
	g++ -c indent.cpp

tests.o: tests.cpp 
	g++ -c tests.cpp

clean:
	rm  indent.o unindent.o



