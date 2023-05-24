#pragma once
#include <string>

void computeLPS(std::string pat, int* lps);                     //создание lps массива
int KMPSearch(const std::string& pat, const std::string& txt);  //KMP поиск
std::string findPattern(const std::string& text, int K);        //создание шаблона по К элементам
bool IsKPeriodic(const std::string& text, int K);               // функция проверки кратности