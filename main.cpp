#include <iostream>
#include "removeLeadingSpaces.h"
#include "countChar.h"
int main() {
    std::string st = removeLeadingSpaces("       int x = 1;  ");
    std::cout << st << "\n";

    std::string response;
    std::string oneLine;
    while(getline(std::cin, response)) {
        oneLine = removeLeadingSpaces(response);
        int counter = countChar(oneLine, '{');
        std::cout << oneLine << "\n";
    }

    int counter = countChar("{{{{}}}}", '{');
    std::cout << counter << "\n";
    return 0;
}