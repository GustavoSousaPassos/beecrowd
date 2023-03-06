#include <iostream>

using namespace std;

int main()
{
	int x[10], val;
	
	for(int i = 0; i < 10; i++)
	{
		cin >> val;
		
		if(val <= 0) x[i] = 1;
		else x[i] = val;
	}
	
	for(int i = 0; i < 10; i++)
		cout << "X[" << i << "] = " << x[i] << endl;
}
