#include <iostream>
#include <string>
#include "Funcs.h"

using namespace std;

int main()
{
    int K{0};
    string text;
    bool start{true};
   
    while(start)
    {
        cout << "Press 'q' for quit" << endl;
        cout << "Input the text: ";
        cin >> text;
        
        if(text == "q")
            return 0;

        cout << "Input the number: ";
        cin >> K;

        if(K == 'q')
            return 0;

        if(cin.fail())
        {
            cout << "Invalid input, try again!" << endl;
            cin.clear();
        }

        bool isMultiple = IsKPeriodic(text, K);

        if(isMultiple)
        {
            cout << "String is a multiple of a number K"<<endl;
        }
        else
        {
            cout << "String IS NOT a multiple of a number K" << endl;
        }

    }

    return 0;
}