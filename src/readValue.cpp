#include "readValue.h"

#include <iostream>
#include <string>
std::string promptAndRead(const std::string &prompt) {
    std::string input;
    std::cout << prompt << std::endl;
    std::getline(std::cin,input);
    std::cout<<std::endl;
    std::cin.clear();
    return input;
}
int readValue(const int min, const int max, const std::string &prompt, const std::string &err, int def) {
    std::string readInput = promptAndRead(prompt);
    int entry;
    if (readInput == "exit") {
        return -1;
    }else if (readInput == "def") {
        entry = def;
    }else {
        entry = std::stoi(readInput);//Assuming user inputs a number if not a specified keyword;
    }

    while (entry<min || entry>max) {
        std::cout << err << std::endl;
        readInput = promptAndRead(prompt);
        if (readInput == "exit") {
            return -1;
        }else if (readInput == "def") {
            entry = def;
        }else {
            entry = std::stoi(readInput);//Assuming user inputs a number if not a specified keyword;
        }
    }
    std::cout << "The value read is: " << entry << std::endl;
    return entry;
}