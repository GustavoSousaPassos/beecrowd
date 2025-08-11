#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double fPib, sPib, res;
	
	cin >> fPib >> sPib;
	
	fPib = fPib / 100 + 1;
	sPib = sPib / 100 + 1;
	
	res = (fPib * sPib - 1) * 100;
	
	cout << fixed << setprecision(6) << res << endl;
}
