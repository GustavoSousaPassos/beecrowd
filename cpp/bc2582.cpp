#include <iostream>

using namespace std;

int main()
{
	string vec[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
	int nCa, fVal, sVal, so;
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		cin >> fVal >> sVal;
		so = fVal + sVal;
		cout << vec[so] << endl;
	}
	
}
