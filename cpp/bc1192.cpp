#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, res, nCa;
	char le;
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		cin >> fVal >> le >> sVal;
		
		if(fVal == sVal) res = fVal * sVal;
		else res = (int) le < 97? sVal - fVal : fVal + sVal;
		
		cout << res << endl;
	}
}
