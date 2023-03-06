#include <iostream>

using namespace std;

int main()
{
	int vec[1000], val, j = 0;
	
	cin >> val;
	
	for(int i = 0; i < 1000; i++)
	{
		vec[i] = j;
		if(j == val-1) j = 0;
		else j++;
	}
	
	for(int i = 0; i < 1000; i++)
		cout << "N[" << i << "] = " << vec[i] << endl;
}
