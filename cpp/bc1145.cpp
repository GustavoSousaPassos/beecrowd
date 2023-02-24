#include <iostream>

using namespace std;

int main()
{
	int count = 0, fVal, sVal;
	
	cin >> fVal >> sVal;
	
	cout << 1;
	
	for(int i = 2; i != sVal; i++)
	{
		cout << " " << i;
		count++;
		
		if(count == fVal-1)
		{
			cout << endl;
			cout << i+1;
			count = 0;
			i++;
		}
	}
	
	cout << " " << sVal << endl;
}
