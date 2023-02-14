#include <iostream>

using namespace std;

int main()
{
	int num, fVal, sVal;
	
	cin >> num;
	
	for(int i = 0; i < num; i++)
	{
		int sOdd = 0;
		
		cin >> fVal >> sVal;
		
		if(sVal < fVal)
		{
			int aux = fVal;
			fVal = sVal;
			sVal = aux;
		}
		
		for(int j = fVal+1; j < sVal; j++)
			if(j % 2 != 0) sOdd += j;
			
		cout << sOdd << endl;
	}
}
