#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	double fPa, sPa, ra = sqrt(5);
	
	cin >> num;

	fPa = pow((1 + ra) / 2, num);
	sPa = pow((1 - ra) / 2, num);
	
	cout << fixed << setprecision(1) << (fPa - sPa) / ra << endl;
}
