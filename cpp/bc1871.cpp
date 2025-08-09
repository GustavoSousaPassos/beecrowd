#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal;
	string res;
	
	while(true)
	{
	    res = "";
	    int j = 0;
	    
		cin >> fVal >> sVal;
		
		if(fVal == 0 && sVal == 0) break;
		else
		{
		    string so = to_string(fVal+sVal);
		    
		    for(int i = 0; i < so.size(); i++)
		        if(so[i] != '0') res += so[i];
		  
		    cout << res << endl;
		}
	}
}
