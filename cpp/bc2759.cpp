#include <iostream>

using namespace std;

int main()
{
	char fCa, sCa, tCa;
	
	cin >> fCa >> sCa >> tCa;
	
	cout << "A = " << fCa << ", B = " << sCa << ", C = " << tCa << endl;
	cout << "A = " << sCa << ", B = " << tCa << ", C = " << fCa << endl;
	cout << "A = " << tCa << ", B = " << fCa << ", C = " << sCa << endl;
}
