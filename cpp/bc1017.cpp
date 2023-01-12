#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int tVi, velM;
	
	cin >> tVi >> velM;
	
	float qtdL = (tVi * velM) / 12.0;
	
	cout << fixed << setprecision(3) << qtdL << endl;
}
