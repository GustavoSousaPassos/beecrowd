#include <iostream>

using namespace std;

int main()
{
	long long cFi[61];
	int nTes;
	
	cFi[0] = 0;
	cFi[1] = 1;
	
	for(int i = 2; i < 61; i++)
		cFi[i] = cFi[i-1] + cFi[i-2];
	
	cin >> nTes;
	
	for(int i = 0; i < nTes; i++)
	{
		int val;
		
		cin >> val;
		
		cout << "Fib(" << val << ") = " << cFi[val] << endl;
	}
}
