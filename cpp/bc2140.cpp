#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int cVal[] = {4, 7, 10, 12, 15, 20, 22, 25, 30, 40, 52, 55, 60, 70, 100, 102, 105, 110, 120, 150, 200};
	int fVal, sVal, trc;
	
	for(;;)
	{
		string res = "impossible";
		
		cin >> fVal >> sVal;
		
		if(fVal == 0 && sVal == 0) break;
		else
		{
			trc = abs(fVal - sVal);
			
			for(int i = 0; i < 21; i++)
			{
				if(cVal[i] == trc)
				{
					res = "possible";
					break;
				}
			}
			
			cout << res << endl;
		}
	}
	
}
