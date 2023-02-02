#include <iostream>

using namespace std;

int main()
{
	int val;
	
	cin >> val;
	
	for(int i  = 1; i <= val;i++)
		if(i % 2 != 0) cout << i << endl;
}
