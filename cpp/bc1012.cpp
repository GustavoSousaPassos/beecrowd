#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double fVal, sVal, tVal, aTri, aCi, aTra, aQua, aRe;
	
	cin >> fVal >> sVal >> tVal;
	
	aTri = (fVal * tVal) / 2;
	aCi = pow(tVal,2) * 3.14159;
	aTra = ((fVal + sVal)* tVal) / 2;
	aQua = pow(sVal, 2);
	aRe = fVal * sVal;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << aTri <<  endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << aCi << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << aTra << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << aQua << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << aRe << endl;
}
