#include <iostream>
#include "removeLeadingSpaces.h"

int main() {
    std::string response;
    std::string oneLine;
    while(getline(std::cin, response)) {
        oneLine = removeLeadingSpaces(response);
        std::cout << oneLine << "\n";
    }
    return 0;
}