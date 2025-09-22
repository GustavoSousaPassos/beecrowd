#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j = 0, eRe;
    char fLi[] = "---------------------------------------";
    string cVal[3] = {"Roberto", "5786", "UNIFEI"};
    
    for(i = 0; i < 7;i++)
    {
        if(i == 0 ||i == 6) cout << fLi << endl;
        else 
        {
            if(i % 2 != 0) 
            {
            	eRe = 39 - (cVal[j].size() + 9); 
                cout << "|        " << cVal[j] << setw(eRe) << "|" << fixed << endl;
                j++;
            }
            else cout << "|" << setw(38) << "|" << fixed << endl;
        }
    }
    return 0;
}
