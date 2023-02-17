#include <iostream>

using namespace std;

int main()
{
	int fVal, sVal, sum = 0, aux;
	
	cin >> fVal >> sVal;
	
	if(fVal > sVal)
	{
		aux = fVal;
		fVal = sVal;
		sVal = aux;
	}
	
	for(int i = fVal; i < sVal; i++)
		if(i % 13 != 0) sum += i;
	
	cout << sum << endl;
}
