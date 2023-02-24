#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int val, sRes, tRes;
	
	cin >> val;
	
	for(int i  = 1; i <= val; i++)
	{
		sRes = pow(i, 2);
		tRes = pow(i, 3);
		
		cout << i << " " << sRes << " " << tRes << endl;
		cout << i << " " << sRes+1 << " " << tRes+1 << endl;
	}	
} 
