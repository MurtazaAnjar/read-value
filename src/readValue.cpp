#include "readValue.h"

#include <iostream>
#include <string>
int promptAndRead(const std::string &prompt) {
    int input = 0;
    std::cout << prompt << std::endl;
    std::cin >> input;
    return input;
}
int readValue(const int min, const int max, const std::string &prompt, const std::string &err) {
    int readInput = promptAndRead(prompt);
    while (readInput<min || readInput>max) {
        std::cerr << err << std::endl;
        readInput = promptAndRead(prompt);
    }
    return readInput;
}