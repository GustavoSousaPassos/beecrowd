#include <iostream>

using namespace std;

int main()
{
	int iVec, cIn, cOut, val;
	cIn = cOut = 0;
	
	cin >> iVec;
	
	for(int i = 0; i < iVec; i++)
	{
		cin >> val;
		val >= 10 && val <= 20? cIn++ : cOut++;
	}
	
	cout << cIn << " in\n" << cOut << " out" << endl;
}
