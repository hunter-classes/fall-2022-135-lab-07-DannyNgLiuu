#include <iostream>
#include <string>

/*
    CountChar(string, char)

    counts the frequency of a char

*/
int countChar(std::string line, char c) {
    int counter = 0;
    for(int i = 0; i < line.length(); i++) {
        if(line[i] == c) {
            counter++;
        }
    }
    return counter;
}