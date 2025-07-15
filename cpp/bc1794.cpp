#include <iostream>

using namespace std;

int main()
{
	int tRo, lA, lB, sA, sB;
	string res;
	
	cin >> tRo;
	cin >> lA >> lB >> sA >> sB;
	
	res = (tRo >= lA && tRo <= lB) && (tRo >= sA && tRo <= sB)? "possivel" : "impossivel";
	
	cout << res << endl;
}
