#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int nCa;
	float tDi;
	string pal;
	
	cin >> nCa;
	
	for(int i = 0; i < nCa; i++)
	{
		cin >> pal;
		
		tDi = pal.size() / 100.00;
		
		cout << fixed <<  setprecision(2) << tDi << endl;
	}
}
