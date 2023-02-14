#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int fVal, sVal, cont;
	
	cin >> cont;
	
	for(int i = 0; i < cont; i++)
	{
		cin >> fVal >> sVal;
		
		if(sVal == 0) cout << "divisao impossivel" << endl;
		else cout << fixed << setprecision(1) << (float) fVal/ sVal << endl;
	}
}
