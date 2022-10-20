main: main.o removeLeadingSpaces.o countChar.o
	g++ -o main main.o removeLeadingSpaces.o countChar.o

indent: indent.o removeLeadingSpaces.o countChar.o
	g++ -o indent indent.o removeLeadingSpaces.o countChar.o

unindent: unindent.o removeLeadingSpaces.o
	g++ -o unindent unindent.o removeLeadingSpaces.o

main.o: main.cpp removeLeadingSpaces.h countChar.h

indent.o: indent.cpp removeLeadingSpaces.h countChar.h

unindent.o: unindent.cpp removeLeadingSpaces.h

clean:
	rm -f main indent unindent indent.o unindent.o main.o removeLeadingSpaces.o countChar.o 