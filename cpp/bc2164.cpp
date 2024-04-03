#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num;
	double fPa, sPa, res;
	
	cin >> num;
	
	fPa = pow((1 + sqrt(5)) / 2, num);
	sPa = pow((1 - sqrt(5)) / 2, num);
	
	res = (fPa - sPa) / sqrt(5);
	
	cout << fixed << setprecision(1) << res << endl;
}
