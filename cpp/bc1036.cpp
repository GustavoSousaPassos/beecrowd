#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float valA, valB, valC, delta, r1, r2;
	
	cin >> valA >> valB >> valC;
	
	delta = pow(valB, 2) -4*valA*valC;
	
	if(valA == 0 || delta < 0) cout << "Impossivel calcular" << endl;
	else
	{
		r1 = ((valB - sqrt(delta)) / (2*valA))*-1;
		r2 = ((valB + sqrt(delta)) / (2*valA))*-1;
		
		cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
	}
}
