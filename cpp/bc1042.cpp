#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, tVal;
	
	cin >> fVal >> sVal >> tVal;
	
	int cOrg[3] = {fVal, sVal, tVal};
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if(cOrg[j] > cOrg[j+1])
			{
				int aux = cOrg[j];
				cOrg[j] = cOrg[j+1];
				cOrg[j+1] = aux;
			}
		}
	}
	
	for(int k = 0; k < 3; k++) cout << cOrg[k] << endl;
	
	cout << "\n" << fVal << "\n" << sVal << "\n" << tVal << endl;
}
