#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double fVa = 234.345, sVa = 45.698;
	
	cout << fixed << setprecision(6) << fVa << " - " << sVa << endl;
	cout << setprecision(0) << fVa << " - " << sVa << endl;
	cout << setprecision(1) << fVa << " - " << sVa << endl;
	cout << setprecision(2) << fVa << " - " << sVa << endl;
	cout << setprecision(3) << fVa << " - " << sVa << endl;
	cout << setprecision(6) << scientific << fVa << " - " << sVa << endl;
	cout << uppercase << scientific << fVa << " - " << sVa  << fixed << endl;
	cout << setprecision(3) << fVa << " - " << sVa << endl;
	cout << setprecision(3) << fVa << " - " << sVa << endl;
}
