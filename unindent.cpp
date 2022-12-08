#include <iostream>
#include "removeLeadingSpaces.h"
//gets the input and removes all leading spaces using the removeLeadingSpaces function
int main() {
    std::string response;
    std::string oneLine;
    while(getline(std::cin, response)) {
        oneLine = removeLeadingSpaces(response);
        std::cout << oneLine << "\n";
    }
    return 0;
}