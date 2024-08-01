#include <iostream>

using namespace std;

int main()
{
	int aMi, aMax, nPe, count;
	
	while(cin >> nPe >> aMi >> aMax)
	{
		count = 0;
		int vec[nPe];
		
		for(int i = 0; i < nPe; i++)
			cin >> vec[i];
		
		for(int i = 0; i < nPe; i++)
			if(vec[i] >= aMi && vec[i] <= aMax) count++;
		
		cout << count << endl;
	}	
}
