#include <iostream>

using namespace std;

int main()
{
	int nAb, aP;
	string aIn;
	
	cin >> nAb >> aP;
	
	for(int i = 0; i < aP; i++)
	{
		cin >> aIn;
		
		nAb -= 1;
		
		if(aIn == "fechou") nAb += 2;
	}
	
	cout << nAb << endl;
}
