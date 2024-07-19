#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int fSo, sSo, nCa, fVal, sVal;
	double res;
	
	while(cin >> nCa)
	{
		fSo = sSo = 0;
		
		for(int i = 0; i < nCa; i++)
		{
			cin >> fVal >> sVal;
			
			fSo += fVal * sVal;
			sSo += sVal;
		}
		
		res = (double) fSo / (sSo * 100);
		cout << fixed << setprecision(4) << res << endl;
	}
}
