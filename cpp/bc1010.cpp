#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int pCodP, pNumP, sCodP, sNumP;
	double pValP, sValP, total;
	
	cin >> pCodP >> pNumP >> pValP;
	cin >> sCodP >> sNumP >> sValP;
	
	total = (pValP*pNumP) + (sValP*sNumP);
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
}
