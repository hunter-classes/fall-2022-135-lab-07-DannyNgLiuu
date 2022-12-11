#include <iostream>
#include <cctype>
#include "removeLeadingSpaces.h"

std::string removeLeadingSpaces(std::string line) {
    int counter = 0;
    while(counter < line.length()) {
        if(isspace(line[counter])) {
            line.erase(0,1);
        } else {
            break;
        }
    }
    return line;
}