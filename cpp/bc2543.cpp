#include <iostream>

using namespace std;

int main()
{
    int count, nCa, ind, fVal, sVal;
    
    while(cin >> nCa >> ind)
    {
        count = 0;
        
        for(int i = 0; i < nCa; i++)
        {
            cin >> fVal >> sVal;
            if(fVal == ind && sVal == 0) count++;
        }
        cout << count << endl;
    }
}
