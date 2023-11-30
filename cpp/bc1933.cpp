#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, res;
	
	cin >> fVal >> sVal;
	
	if(fVal == sVal) res = fVal;
	else res = fVal > sVal? fVal : sVal;
	
	cout << res << endl;
}
