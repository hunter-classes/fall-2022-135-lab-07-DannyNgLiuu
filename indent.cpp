#include <iostream>
#include <iomanip>
#include "removeLeadingSpaces.h"
#include "countChar.h"

int main() {
    std::string response;
    std::string oneLine;
    std::string oneLine1;
    int counter = 0;
    int holder = 0;
    std::string tabs = "";
    while(getline(std::cin, response)) {
        oneLine = removeLeadingSpaces(response);

        std::cout << counter << " ";
        if(holder == 0 ) {
            std::cout << oneLine << "\n";
            holder = 1;
            counter++;
        } else {
            for(int i = 0; i < counter; i++) {
                tabs += "\t";
            }
            if(countChar(oneLine, '{') > 0) {
                counter++;
            }else if(countChar(oneLine, '}') > 0) {
                counter--;
            }
            if(oneLine.substr(0,1) == "}") {
                tabs = "";
            for(int i = 0; i < counter; i++) {
                tabs += "\t";
            }          
            }
            std::cout << tabs << oneLine << "\n";
            tabs = "";
        } 

    }
    return 0;
}