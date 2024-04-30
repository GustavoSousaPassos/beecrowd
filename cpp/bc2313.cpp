#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int fVal, sVal, tVal;
	string fRes = "";
	char sRes;
	
	cin >> fVal >> sVal >> tVal;
	
	bool  lVe;
	
	lVe = (fVal + sVal > tVal) && (fVal + tVal > sVal) && (sVal + tVal > fVal);
	
	if(!lVe) 
		cout << "Invalido" << endl;
	else 
	{
		bool tEq, tIs;
		
		tEq = (fVal == sVal) && (sVal == tVal);
		tIs = (fVal == sVal && tVal != fVal) || (fVal != sVal && tVal == sVal) || (fVal == tVal && tVal != sVal);
		
		if(tEq == true) fRes += "Valido-Equilatero";
		else if(tIs == true) fRes += "Valido-Isoceles";
		else fRes += "Valido-Escaleno";
		
		if(fVal > sVal && fVal > tVal)
			sRes = pow(fVal, 2) == pow(sVal, 2) + pow(tVal, 2)? 'S' : 'N';
		else if(sVal > fVal && sVal > tVal)
			sRes = pow(sVal, 2) == pow(fVal, 2) + pow(tVal, 2)? 'S' : 'N';
		else
			sRes = pow(tVal, 2) == pow(fVal, 2) + pow(sVal, 2)? 'S' : 'N';
		
		cout << fRes << "\nRetangulo: " << sRes << endl;
	}
}
