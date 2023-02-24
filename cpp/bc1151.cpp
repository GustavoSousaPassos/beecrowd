#include <iostream>

using namespace std;

int main()
{
	int cVal[46], val;
	
	cVal[0] = 0;
	cVal[1] = 1;
	
	cin >> val;
	
	cout << cVal[0] << " " << cVal[1];
	
	for(int i = 2; i < val; i++)
	{
		cVal[i] = cVal[i-2] + cVal[i-1];
		cout << " " << cVal[i];
	}
	
	cout << endl;
}
