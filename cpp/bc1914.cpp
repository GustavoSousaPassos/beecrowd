#include <iostream>

using namespace std;

int main()
{
	int nCa, fPe, sPe;
	string fP, fVal, sP, sVal, res="";
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		cin >> fP >> fVal >> sP >> sVal;
		cin >> fPe >> sPe;
		
		((fPe + sPe) % 2) == 0? res = "PAR" : res = "IMPAR";
		
		if(res == fVal) cout << fP << endl;
		else cout << sP << endl;
	}
}
