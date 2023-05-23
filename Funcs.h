#pragma once
#include <string>

void computeLPS(std::string pat, int* lps);
int KMPSearch(const std::string& pat, const std::string& txt);
std::string findPattern(const std::string& text, int K);
bool IsKPeriodic(const std::string& text, int K); 