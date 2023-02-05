#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, sum = 0;
	
	cin >> fVal >> sVal;
	
	if(fVal > sVal)
	{
		int aux = fVal;
		fVal = sVal;
		sVal = aux;
	}
	
	for(int i = fVal+1; i < sVal; i++)
		if(i % 2 != 0) sum += i;
	
	
	cout << sum << endl;
}
