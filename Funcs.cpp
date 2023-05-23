#include "Funcs.h"
#include <string>
#include <iostream>
using namespace std;

void computeLPS(std::string pat, int* lps)   //создание ЛПС массива
{ 
    int j = 0; 
  
    lps[0] = 0; 

    int i = 1; 
    while (i < pat.size()) { 
        if (pat[i] == pat[j]) { 
            j++; 
            lps[i] = j; 
            i++; 
        } 
        else
        { 
            if (j != 0) 
            { 
                j = lps[j - 1]; 
            } 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 

int KMPSearch(const std::string& pat, const std::string& txt)  //КМП поиск подстроки
{ 
    int * lps = new int[pat.size()];

    computeLPS(pat, lps); 
  
    int i = 0, j = 0, cnt_in = 0;  

    while (i < txt.size()) { 
        if (pat[j] == txt[i])
        { 
            j++; 
            i++; 
        } 
        if (j == pat.size()) {  
            j = lps[j - 1];
            cnt_in++;
        } 
        else if (i < txt.size() && pat[j] != txt[i]) { 
            if (j != 0)
            {
                j = lps[j - 1]; 
            }
            else
            {
                i = i + 1;
            }           
        }        
    }
    return cnt_in;
}

string findPattern(const string& text, int K)   //набирает шаблон по К первым элементам строки
{
    string pattern;
    for(int i{0}; i < K; i++ )
        pattern += text[i];

    return pattern; 
}

bool IsKPeriodic(const string& text, int K)     //функция проверки кратности
{
    bool res;

    if(size(text) < 0 || size(text) > K)        //проверка выхода К за границы строки
        res = false;

    string patt = findPattern(text, K);         //находим шаблон
    int countPatt = KMPSearch(patt, text);      //находим количество входа шаблона в строку

    if(countPatt * K % K == 0 && size(text) - (countPatt * K) == 0 )    //проверка кратности входов шаблона
        res = true;

    return res; 
} 