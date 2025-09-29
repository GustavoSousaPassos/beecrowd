#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int pEs = 0, pDi = 32;
    
    for(int i = 0; i < 7; i++)
    {
    	if(i == 0 || i == 6) cout << "---------------------------------------" << endl;
    	else
    	{
	        if(i % 2 != 0) 
	        {
	            cout << "|" << setw(pEs) << "x = 35" << fixed;
				cout << setw(pDi) << "|"  << fixed << endl;
	            pEs += 16;
	            pDi -= 17;
	        }
	        else cout << "|                                     |" << endl;
	 	}
    }
    
    return 0;
}
