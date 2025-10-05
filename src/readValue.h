#pragma once
#include <string>

int promptAndRead(const std::string &prompt);
int readValue(int min, int max, const std::string &prompt, const std::string &err);