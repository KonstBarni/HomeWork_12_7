#include <iostream>
#include <string>
#include "Funcs.h"

using namespace std;

int main()
{
    int K{0};
    string text;

    cout << "Input the text: ";
    getline(cin, text);

    cout << "Input the number: ";
    cin >> K;

    bool isMultiple = IsKPeriodic(text, K);

    if(isMultiple)
    {
        cout << "String is a multiple of a number K"<<endl;
    }
    else
    {
        cout << "String IS NOT a multiple of a number K" << endl;
    }

    return 0;
}