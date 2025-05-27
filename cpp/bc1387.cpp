#include <iostream>

using namespace std;

int main()
{
    int fVal, sVal;

    while(true)
    {
        cin >> fVal >> sVal;
        if(fVal == 0 && sVal == 0)break;
        else cout << fVal+sVal << endl;
    }
}