#include <iostream>

using namespace std;

int main()
{
	int val;
	
	cin >> val;
	
	for(int i = 1; i <= 10000; i++)
		if(i % val == 2) cout << i << endl;
}
