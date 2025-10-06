#pragma once
#include <string>

std::string promptAndRead(const std::string &prompt);
int readValue(int min, int max, const std::string &prompt, const std::string &err, int def=10);