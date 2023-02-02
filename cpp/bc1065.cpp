#include <iostream>

using namespace std;

int main()
{
	int val, count = 0;
	
	for(int i = 0; i < 5; i++)
	{
		cin >> val;
		if(val % 2 == 0) count++;
	}
	
	cout << count << " valores pares" << endl;
}
