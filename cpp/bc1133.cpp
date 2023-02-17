#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, aux;
	
	cin >> fVal >> sVal;
	
	if(fVal > sVal)
	{
		aux = sVal;
		sVal = fVal;
		fVal = aux;
	}
	
	for(int i = fVal+1; i < sVal; i++)
		if(i % 5 == 2 || i % 5 == 3) cout << i << endl;
}
