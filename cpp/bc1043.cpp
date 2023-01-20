#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float fVal, sVal, tVal;
	
	cin >> fVal >> sVal >> tVal;
	
	bool fVer = fVal + sVal > tVal;
	bool sVer = sVal + tVal > fVal;
	bool tVer = fVal + tVal > sVal;
	
	if(fVer == sVer && sVer == tVer) cout << "Perimetro = " << fixed << setprecision(1) << fVal+sVal+tVal << endl; 
	else cout << "Area = " << fixed << setprecision(1) << ((fVal+sVal)*tVal) / 2 << endl; 
}
