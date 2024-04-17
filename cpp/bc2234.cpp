#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int fVal, sVal;
	float res;
	
	cin >> fVal >> sVal;
	
	res = (float) fVal / sVal;
	
	cout << fixed << setprecision(2) << res << endl;
}
